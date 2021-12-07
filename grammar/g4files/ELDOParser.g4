// ----------------------------------------------------------------------------
// Author : Enrico Fraccaroli
// Date   : 04/02/2018
// ----------------------------------------------------------------------------
parser grammar ELDOParser;

options {
    tokenVocab = ELDOLexer;
}

// ============================================================================
netlist
    : netlist_title? end_of_line netlist_entity* end? end_of_line;

// ============================================================================
netlist_title
    : ID+;

// ============================================================================
netlist_entity
    : include
    | library
    | library_def
    | subckt
    | analysis
    | global
    | model
    | global_declarations
    | control
    | component
    ;

// ============================================================================
include
    : standard_include
    | dspf_include
    | verilog_include;

// ------------------------------------
// Include a File in an Input Netlist
// Syntax:
//      .INC[LUDE] FNAME
//
standard_include
    : INCLUDE filepath end_of_line;

// ------------------------------------
// Compile and Load Verilog-A Modules
// Syntax:
//      .VERILOG filename
//
verilog_include
	: VERILOG filepath end_of_line;

// ------------------------------------
// Load DSPF File
// Syntax:
//      .DSPF_INCLUDE [FILE=]DSPF_FILENAME [INST={list_of_subckt_inst}]
//          + [LEVEL=C|RC|RCC] [DEV=DSPF|SCH[EMATIC]] [RMINVAL=val] [CMINVAL=val]
//          + [CCMINVAL=val] [ADDXNET] [ADDX]
//      .DSPF_INCLUDE [FILE=]DSPF_FILENAME [LEVEL=C|RC|RCC]
//          + [DEV=DSPF|SCH[EMATIC]] DEDICATEDX=subckt_name [RMINVAL=val]
//          + [CMINVAL=val] [CCMINVAL=val] [ADDXNET] [ADDX]
//
dspf_include
    : DSPF_INCLUDE (ID EQUAL)? filepath parameter_list? end_of_line;

// ============================================================================
// Insert Circuit Information from a Library File
// 
// Syntax:
//      .LIB [KEY=KNAME] FNAME [LIBTYPE]
//      .LIB LIBTYPE
//
library
    : LIB library_key? library_path library_name? end_of_line;
library_key
    : KEY EQUAL ID;  
library_path
    : filepath;
library_name
    : ID;

// ============================================================================
// Library variant management
// 
// Syntax:
//      .LIB <libtype>
//          ...
//      .ENDL
//
library_def
    : library_def_header library_def_content+ library_def_footer end_of_line;
library_def_header
    : LIB library_name end_of_line;
library_def_content
    : netlist_entity;
library_def_footer
    : LIB_END library_name?;

// ============================================================================
// Subcircuit Definition
// Syntax:
//      .SUBCKT NAME NN {NN} [(ANALOG|OSR|DIGITAL)] [(NONOISE)] [(INLINE)] [[PARAM:] PAR=VAL {PAR=VAL}] [STATISTICAL=0|1]
//          {CIRCUIT_COMPONENTS}
//      .ENDS [NAME]
//      .SUBCKT LIB FNAME SNAME [LIBTYPE]
subckt
    : subckt_header subckt_content+ subckt_footer;
subckt_header
    : SUBCKT ID (node_list)? (PARAM_LIST_START? parameter_list)? end_of_line;
subckt_content
    : netlist_entity;
subckt_footer
    : SUBCKT_END ID? end_of_line;

// ============================================================================
analysis
    : ac
    | age
    | checksoa
    | dc
    | dchiz
    | dcmismatch
    | dex
    | dsp
    | dspmod
    | four
    | lstb
    | mc
    | noise
    | noisetran
    | op
    | optfour
    | optimize
    | optnoise
    | pz
    | ramp
    | sens
    | sensac
    | sensparam
    | snf
    | solve
    | tf
    | tran
    | wcase
    | extract
    ;

// ------------------------------------
// AC Analysis
// Syntax:
// Parameter-Driven Analysis
//      .AC TYPE nb fstart fstop [SWEEP DATA=dataname] [UIC] [MONTE=val]
//      .AC TYPE nb fstart fstop [SWEEP parameter_name TYPE nb start stop] [UIC] [MONTE=val]
//      .AC TYPE nb fstart fstop [SWEEP parameter_name start stop incr] [UIC] [MONTE=val]
// Data-Driven Analysis
//      .AC DATA=dataname [SWEEP DATA=dataname] [UIC] [MONTE=val]
//      .AC DATA=dataname [SWEEP parameter_name TYPE nb start stop] [UIC] [MONTE=val]
//      .AC DATA=dataname [SWEEP parameter_name start stop incr] [UIC] [MONTE=val]
// List-Driven Analysis
//      .AC LIST {list_of_frequency_points} [SWEEP DATA=dataname] [UIC] [MONTE=val]
//      .AC LIST {list_of_frequency_points} [SWEEP parameter_name TYPE nb start stop] [UIC] [MONTE=val]
//      .AC LIST {list_of_frequency_points} [SWEEP parameter_name start stop incr] [UIC] [MONTE=val]
// Adaptive Analysis
//      .AC ADAPTIVE tolerance_value fstart fstop
//
ac
    : AC (ac_parameter_driven | ac_data_driven | ac_list_driven | ac_adaptive) end_of_line;
ac_parameter_driven
    : ID NUMBER NUMBER NUMBER parameter_list?;
ac_data_driven
    : parameter parameter_list?;
ac_list_driven
    : ID parameter_list?;
ac_adaptive
    : ID NUMBER NUMBER NUMBER;

// ------------------------------------
// Age Analysis
// Syntax:
//      .AGE [TAGE=value] [TUNIT=year|month|day|hour|min|sec] [NBRUN[S]=value]
//          + [LIN[={YES|ON|1}|{NO|OFF|0}] | LOG[={YES|ON|1}|{NO|OFF|0}]]
//          + [LOGMODE_MINEXP=value]
//          + [TSTART=value] [TSTOP=value] [TWINDOW={(a1,b1) (an,bn)}]
//          + [MODE= sim | load | save | MCload | blockload] [AGELIB=file_name]
//          + [AGEALL[={YES|ON|1}|{NO|OFF|0}]]
//          + [RESTRICT_MC={YES|ON|1}|{NO|OFF|0}]
//          + [ASCII[={YES|ON|1}|{NO|OFF|0}]]
//          + [COMPUTE_LAST[={YES|ON|1}|{NO|OFF|0}]]
//          + [PLOT={FRESH_FINAL|ALL}]
//          + [AGEDSIM={YES|ON|1}|{NO|OFF|0}]
//          + [PRINT_CONFIGURATION={YES|ON|1}|{NO|OFF|0}]
//          + [STRESS_LIST={YES|ON|1}|{NO|OFF|0}]
//          + [STRESS_SORT_NBMAX=value]
//          + [STRESS_SORT_REL=value]
//          + [STRESS_SORT_ABS=value]
//          + [STRESS_LIST_FILE=file_name]
//          + [STRESS_LIST_SPLIT_MOS={YES|ON|1}|{NO|OFF|0}]
//          + [STRESS_SORT_ORDER=ASCENDING|DESCENDING]
//          + [STRESS_SORT_DELTA=extract_label]
//          + [DELTA_VDS=value]
//          + [DELTA_VGS=value]
//          + [DELTA_VBS=value]
//          + [USER_WARNING={YES|ON|1}|{NO|OFF|0}]
//
age
    : AGE parameter_list end_of_line;

// ------------------------------------
// Check Safe Operating Area Limits
// Syntax:
//      .CHECKSOA [ANALYSIS] [TSTART=val [TSTOP=val]] [TMIN=val]] [AUTOSTOP]
//          + [NOMERGE] [NOLIB] [FILE=filename] [NOXWINDOW]
//          + [ENABLE|DISABLE] [SOACODE=range1[{,range_x}]]
//          + [INST={list_of_instances}] [SUBCKT={list_of_subckts}] [RUNTMSG]
//
checksoa
    : CHECKSOA parameter_list end_of_line;

// ------------------------------------
// DC Analysis
// Syntax:
// Single Analysis
//      .DC
// Component Analysis
//      .DC CNAM [L|W] [TYPE nb] START STOP INCR [SWEEP DATA=dataname] [MONTE=val]
//      .DC CNAM [L|W] [TYPE nb] START STOP INCR [SWEEP parameter_name TYPE nb start stop] [MONTE=val]
//      .DC CNAM [L|W] [TYPE nb] START STOP INCR [SWEEP parameter_name start stop incr] [MONTE=val]
// Voltage or Current Source Analysis
//      .DC SNAM [TYPE nb] START STOP INCR [SNAM2 START2 STOP2 INCR2] [SWEEP DATA=dataname] [MONTE=val]
//      .DC SNAM [TYPE nb] START STOP INCR [SNAM2 START2 STOP2 INCR2] [SWEEP parameter_name TYPE nb start stop] [MONTE=val]
//      .DC SNAM [TYPE nb] START STOP INCR [SNAM2 START2 STOP2 INCR2] [SWEEP parameter_name start stop] incr [MONTE=val]
// Temperature Analysis
//      .DC TEMP START STOP INCR [SWEEP DATA=dataname] [MONTE=val]
//      .DC TEMP START STOP INCR [SWEEP parameter_name TYPE nb start stop] [MONTE=val]
//      .DC TEMP START STOP INCR [SWEEP parameter_name start stop incr] [MONTE=val]
// Parameter Analysis
//      .DC PARAM PARAM_NAME START STOP INCR [SWEEP DATA=dataname] [MONTE=val]
//      .DC PARAM PARAM_NAME START STOP INCR [SWEEP parameter_name TYPE nb start stop] [MONTE=val]
//      .DC PARAM PARAM_NAME START STOP INCR [SWEEP parameter_name start stop incr] [MONTE=val]
//      .DC PARAM PARAM_NAME [TYPE nb] START STOP INCR
// Data-Driven Analysis
//      .DC DATA=dataname [SWEEP DATA=dataname] [MONTE=val]
//      .DC DATA=dataname [SWEEP parameter_name TYPE nb start stop] [MONTE=val]
//      .DC DATA=dataname [SWEEP parameter_name start stop incr] [MONTE=val]
//
dc
    : DC (dc_component_analysis | dc_source_analysis | dc_temperature_analysis | dc_parameter_analysis | dc_data_driven_analysis)? end_of_line;
dc_component_analysis
    : ID ID? ID? NUMBER NUMBER NUMBER parameter_list?;
dc_source_analysis
    : ID ID? NUMBER NUMBER NUMBER (ID NUMBER NUMBER NUMBER)? parameter_list?;
dc_temperature_analysis
    : TEMP NUMBER NUMBER NUMBER parameter_list?;
dc_parameter_analysis
    : PARAM ID ID? NUMBER NUMBER NUMBER parameter_list?;
dc_data_driven_analysis
    : parameter parameter_list?;

// ------------------------------------
// DC Analysis High Impedance Detection
// Syntax:
//      .DCHIZ R=value
//
dchiz
    : DCHIZ parameter end_of_line;

// ------------------------------------
// DC Mismatch Analysis
// Syntax:
//      .DCMISMATCH [FILE=filename] [output] [DCALL[=0|1]] [SORT_REL=value] [SORT_ABS=value] [SORT_NBMAX=value] [NSIGMA=value]
//
dcmismatch
    : DCMISMATCH parameter_list? end_of_line;

// ------------------------------------
// Design Of Experiments
// Syntax:
//      .DEX EXPERIMENT = SCREENING | SCREENING_CTRL | SCREENING_NOISE
//          + RESPONSE = LIST_OF_MEASURES
//          + [DESIGN = ORTHA_2_N | ORTHA_2_2N | FULL_FACT]
//          + [FACTOR = LIST_OF_FACTORS]
//          + [FIND_FACTOR]
//
dex
    : DEX parameter parameter parameter_list? end_of_line;

// ------------------------------------
// (Digital Signal Processing) Computation
// Syntax:
//      .DSP LABEL=label_name [MODEL=model_name] [DSP=dsp_name] waveform_name
//          + [TSTART=val] [TSTOP=val] [FS=val] [NBPT=val]
//          + [PADDING=val] [WINDOW=name] [ALPHA=val] [BETA=val]
//          + [NORMALIZED=val] [INTERPOLATE=val] [DISPLAY_INPUT=val]
//          + [FNORMAL=val] [FMIN=val] [FMAX=val]
//          + [NAUTO=val] [NCORR=val] [NPSD=val] [NSECT=val]
//          + [NBINTERVAL=val
//          + [XSTART=val XSTOP=val SAMPLE=YES|NO FS=val]
//          + [BASELINE=val] [TOPLINE=val]
//          + [EDGE_TRIGGER = RISING | FALLING | EITHER]
//          + [XSTART=val] [XEND=val]
//
dsp
    : DSP parameter parameter? parameter? ID parameter_list? end_of_line;

// ------------------------------------
// PSD (Power Spectral Density) Computation
// Syntax:
//      .DSPMOD DSP=CORRELO|PERIODO LABEL=label_name
//          + [TSTART=val] [TSTOP=val] [FS=val] [NBPT=val]
//          + [PADDING=val] [WINDOW=name] [ALPHA=val] [BETA=val]
//          + [NORMALIZED=val] [NORMALIZATION_FACTOR=val] [INTERPOLATE=val]
//          + [DISPLAY_INPUT=val] [FNORMAL=val] [FMIN=val] [FMAX=val]
//          + [NAUTO=val] [NCORR=val] [NPSD=val] [NSECT=val]
//
dspmod
    : DSPMOD parameter parameter parameter_list? end_of_line;  

// ------------------------------------
// FFT Select Waveform
// Syntax:
//      .FOUR LABEL=label_name waveform_name [optfour_parameters]
//
four
    : FOUR parameter ID parameter_list? end_of_line; 

// ------------------------------------
// Loop Stability Analysis
// Syntax:
//      .LSTB SOURCE_NAME
//
lstb
    : LSTB filepath end_of_line; 

// ------------------------------------
// Monte Carlo Analysis
// Syntax:
//      .MC RUNNO [OUTER] [OV] [SEED=integer_value] [NONOM] [ALL]
//          + [VARY=LOT|DEV] [IRUN=val] [NBBINS=val] [ORDMCS] [MCLIMIT]
//          + [PRINT_EXTRACT=NOMINAL|ALL|run_number] [SIGBIN=val]
//          + [MAXABSBIN=val] [MAXRELBIN=val]
//          + [MONITOR] [AUTOSTOP=value]
//          + [SAVE=mc_file] [RESTART=mc_file]
//
mc
    : MC NUMBER parameter_list? end_of_line;

// ------------------------------------
// Noise Analysis
// Syntax:
//      .NOISE OUTV INSRC NUMS
//
noise
    : NOISE parameter parameter NUMBER end_of_line;

// ------------------------------------
// Transient Noise Analysis
// Syntax:
//      .NOISETRAN FMIN=VAL FMAX=VAL NBRUN=VAL [NBF=VAL] [AMP=VAL]
//          + [SEED=VAL] [NOMOD=VAL] [NONOM] [TSTART=VAL] [TSTOP=VAL]
//          + [MRUN] [ALL] [NBBINS=VAL] [FMIN_FLICKER=VAL]
//
noisetran
    : NOISETRAN parameter parameter parameter parameter_list? end_of_line;

// ------------------------------------
// DC Operating Point Calculation
// Syntax:
// DC Operating Point Calculation
//     .OP [[KEYWORD] T1 {[KEYWORD] TN}]
//     .OP TIME=VAL|END [STEP=VAL] [TEMP=VAL]
//     .OP DC=VAL [DC2=VAL] [STEP=VAL] [TEMP=VAL]
//
op
    : OP (op_selective | op_time_based | op_dc_based) end_of_line;
op_selective
    : (ID? expression)*;
op_time_based
    : parameter parameter? parameter?;
op_dc_based
    : parameter parameter? parameter? parameter?;

// ------------------------------------
// FFT Post-processor Options
// Syntax:
//      .OPTFOUR [TSTART=VAL|EXPR] [TSTOP=VAL|EXPR] [NBPT=VAL] [FS=VAL]
//          + [NORMALIZED=0|1] [NORMALIZATION_FACTOR=val] [INTERPOLATE=0|1|2|3]
//          + [NOROUNDING[=1]] [RAPWIN=VAL]
//          + [WINDOW=name] [ALPHA=VAL] [BETA=VAL] [PADDING=1|2|3]
//          + [FMIN=VAL] [FMAX=VAL] [FNORMAL=freq] [DISPLAY_INPUT=0|1]
//
optfour
    : OPTFOUR parameter_list? end_of_line; 

// ------------------------------------
// Optimization
// Syntax:
//      .OPTIMIZE [qualifier=value {, qualifier=value }]
//          + [PARAM=list_of_parameters | *]
//          + [RESULTS=list_of_targets | *]
//
optimize
    : OPTIMIZE parameter_list? end_of_line;

// ------------------------------------
// AC Noise Analysis
// Syntax:
//      .OPTNOISE [ALL ON|OFF] [<CLASS> ON|OFF]
//          + [R ON|OFF|<max>] [OUTSOURCE ON|OFF] [NSWEIGHT <FILENAME>]
//          + [SORT D|V|TD|TV [SN <n>|SV <value>]] [NBW <FMIN> <FMAX>]
//
optnoise
    : OPTNOISE parameter_list? end_of_line;

// ------------------------------------
// Pole-Zero Analysis 
// Syntax:
//      .PZ OV
//
pz
    : PZ filepath end_of_line;

// ------------------------------------
// Automatic Ramping 
// Syntax:
//      .RAMP DC    VAL  [SIMPLIFY]
//      .RAMP TRAN T1 T2 [SIMPLIFY]
//
ramp
    : RAMP ID NUMBER NUMBER? ID? end_of_line; 

// ------------------------------------
// DC Sensitivity Analysis
// Syntax:
//      .SENS OVN {OVN}
//
sens
    : SENS parameter_list end_of_line; 

// ------------------------------------
// AC Sensitivity Analysis
// Syntax:
//      .SENSAC OVN {OVN} FREQ=val1[{,val2}] [SORT_REL=val] [SORT_ABS=val] [SORT_MAX=val]
//
sensac
    : SENSAC parameter_list end_of_line;  

// ------------------------------------
// Sensitivity Analysis
// Syntax:
//      .SENSPARAM sub[ckt]=subckt_name param=parameter_list
//          + [var[iation]=value] [inst[ance]=instance_list]
//          + [sort=inc[reasing] | dec[reasing] | alpha[betical]]
//          + [sort_nbmax=value] [sort_abs=value | sort_rel=value]
//
sensparam
    : SENSPARAM parameter parameter parameter_list? end_of_line;

// ------------------------------------
// Spot Noise Figure
// Syntax:
//      .SNF INPUT=(LIST_OF_DEVICES) OUTPUT=(LIST_OF_DEVICES) [INPUT_TEMP=VAL] [NOISETEMP=VAL]
//
snf
    : SNF parameter parameter parameter_list? end_of_line;

// ------------------------------------
// Sizing Facility
// Syntax:
//      .SOLVE PARAM param_name MIN MAX expr=expr [TOL=VAL] [RELTOL=VAL] [GRID=VAL]
//      .SOLVE obj_name [W|L]   MIN MAX expr=expr [TOL=VAL] [RELTOL=VAL] [GRID=VAL]
//      .SOLVE CNAME    [W|L]   MIN MAX OPSIZE    [TOL=VAL]
//
solve
    : SOLVE (solve_parameter | solve_object | solve_component) end_of_line;
solve_parameter
    : PARAM ID NUMBER NUMBER parameter_list end_of_line;
solve_object
    : PARAM ID ID? NUMBER NUMBER parameter_list end_of_line;
solve_component
    : PARAM ID ID? NUMBER NUMBER parameter_list end_of_line;

// ------------------------------------
// Transfer Function
// Syntax:
//      .TF OV IN
//
tf
    : TF parameter parameter end_of_line;

// ------------------------------------
// Transient Analysis
// Syntax:
// Point-Driven Analysis
//     .TRAN TPRINT TSTOP [TSTART [HMAX]] [SWEEP DATA=dataname] [UIC] [MONTE=val]
//     .TRAN TPRINT TSTOP [TSTART [HMAX]] [SWEEP parameter_name TYPE nb start stop] [UIC] [MONTE=val]
//     .TRAN TPRINT TSTOP [TSTART [HMAX]] [SWEEP parameter_name start stop incr] [UIC] [MONTE=val]
// Parameterized Analysis
//     .TRAN INCRn Tn [{INCRn Tn}] [TSTART=val] [SWEEP DATA=dataname] [UIC] [MONTE=val]
//     .TRAN INCRn Tn [{INCRn Tn}] [TSTART=val] [SWEEP parameter_name TYPE nb start stop] [UIC] [MONTE=val]
//     .TRAN INCRn Tn [{INCRn Tn}] [TSTART=val] [SWEEP parameter_name start stop incr] [UIC] [MONTE=val]
// Data-Driven Analysis
//     .TRAN DATA=dataname [SWEEP DATA=dataname] [UIC] [MONTE=val]
//     .TRAN DATA=dataname [SWEEP parameter_name TYPE nb start stop] [UIC] [MONTE=val]
//     .TRAN DATA=dataname [SWEEP parameter_name start stop incr] [UIC] [MONTE=val]
//
tran
    : TRAN (tran_point_driven|tran_parameterized|tran_data_driven) end_of_line;
tran_point_driven
    : NUMBER NUMBER (NUMBER NUMBER?)? parameter_list?;
tran_parameterized
    : (expression expression)+ parameter_list?;
tran_data_driven
    : parameter_list;

// ------------------------------------
// Worst Case Analysis
// Syntax:
//      .WCASE DC|AC|TRAN [OUTPUT=MIN|MAX|BOTH] [VARY=LOT|DEV|BOTH]
//          + [TOL=VAL] [ALL] [SORT_REL=VAL] [SORT_ABS=VAL] [SORT_NBMAX=VAL]
//
wcase
    : WCASE ID parameter_list? end_of_line;

// ------------------------------------
// Extract Waveform Characteristics
// Syntax:
//      .EXTRACT [EXTRACT_INFO] [LABEL=NAME] [FILE=FNAME] [UNIT=UNAME] [VECT]
//          + [CATVECT] $MACRO|FUNCTION [OPTIMIZER_INFO] [MC_INFO] [TIME=VALUE]
//          + [INTERP_MODE=LINEAR|QUADRATIC|SAMPHOLD|HISTOGRAM|SPECTRAL]
//
extract
    : EXTRACT parameter_list? end_of_line; 

// ============================================================================
// Global Node Allocation
// Syntax:
//      .GLOBAL NN {NN}
//
global
    : GLOBAL node_list? end_of_line;

// ============================================================================
// Device Model Description
// Syntax:
//      .MODEL MNAME TYPE NONOISE [PAR=VAL]
//      .MODEL LIB FILENAME MNAME [LIBTYPE]
//
model
	: MODEL_DEF model_name model_master NONOISE? parameter_list? end_of_line
	| MODEL_DEF model_lib filepath model_name model_lib_type? end_of_line;
model_lib
    : ID;
model_name
	: ID;
model_master
	: ID;
model_lib_type
	: ID;

// ============================================================================
control
    : alter
    | save
    | option
    | nodeset
    
    | call_tcl
    | use_tcl
    | defmac
    | chrent
    | ic
    | print
    | plot
    | ffile
    | probe
    | defwave
    | temp
    | meas
    | connect
    ;

// ------------------------------------
// Generalized Re-run Facility
// Syntax:
//      .ALTER [LABEL]
//      [ELEMENT]
//      [SUBCKT]
//      [COMMAND]
//      [COMMENT]
//      .ALTER | .END
//
alter
    : alter_definition+ alter_footer end_of_line;
alter_definition
    : alter_header alter_content+;
alter_header
    : ALTER ID* end_of_line;
alter_content
    : netlist_entity;
alter_footer
    : NETLIST_END;

// ------------------------------------
// Save - Save Simulation Run
// Syntax:
//      .SAVE [[FILE=]FNAME] DC|END|TIME=VAL1 [REPEAT [ALT|SEQ]] 
//          + [TEMP=VAL2] [STEP=VAL3] [TYPE=NODESET|IC] [LEVEL=ALL|TOP] [CARLO=index]
//
save
    : SAVE save_file? save_when parameter_list? end_of_line;
save_file
    : (ID EQUAL)? filepath;
save_when
    : ID | END | parameter;

// ------------------------------------
// Simulator Configuration
// Syntax:
//      .OPT[ION] OPTION[=VAL] {OPTION[=VAL]}
//
option
    : (OPTION | OPT) parameter_list end_of_line;

// DC Analysis Conditions
// Syntax:
//      .NODESET V(NN)=VAL [SUBCKT=subckt_name] {V(NN)=VAL [SUBCKT=subckt_name]}
//
nodeset
    : NODESET parameter_list end_of_line;

// ------------------------------------
// Call Tcl Function
// Syntax:
//      .CALL_TCL [TRAN|AC|DC|...]
//      + WHEN=START|START_OF_RUN|END_OF_RUN|END
//      + [PLOT=[YES|NO|0|1]] [PLOT_TYPE=[TRAN|AC|DC|...]]
//      + [LABEL=alias_name] tcl_function_call
//
call_tcl
    : CALL_TCL ID? call_tcl_when? parameter_list? expression? ID? end_of_line;
call_tcl_when
    : WHEN EQUAL ( START | START_OF_RUN | END_OF_RUN | END );

// ------------------------------------
// Use Tcl File
// Syntax:
// .USE_TCL FILENAME [MODE=PPL|EZWAVE]
//
use_tcl
    : USE_TCL filepath end_of_line;

// ------------------------------------
// .DEFMAC - Macro Definition
// Syntax
// .DEFMAC MAC_NAME(ARG{, ARG})=EXPRESSION
//
defmac
    : DEFMAC parameter end_of_line;

// ------------------------------------
// .CHRENT - Piece Wise Linear Source
// Syntax:
//      .CHRENT NODE TN VN {TN VN} [P|F]
//      .CHRENT NODE (TN VN {TN VN}) FACTN {(TN VN {TN VN}) FACTN} [P|F]
//
chrent
    : CHRENT node chrent_behaviour ID? end_of_line;
chrent_behaviour
    : chrent_point+;
chrent_point
    : chrent_pair+ NUMBER?;
chrent_pair
    : NUMBER NUMBER;

// ------------------------------------
// .IC - Initial Transient Analysis Conditions
// Syntax
//     .IC V(NN)=VAL [SUBCKT=subckt_name] {V(NN)=VAL [SUBCKT=subckt_name]}
// Parameters
//     V(NN)
//         Voltage at the node NN in volts.
//     SUBCKT=subckt_name
//         If specified it will fix the voltage of the preceding node in all
//         instances of the subcircuit subckt_name.
//
ic
    : IC ic_content+ end_of_line;
ic_content
    : parameter ic_subckt?;
ic_subckt
    : SUBCKT EQUAL ID;

// ------------------------------------
// .PRINT
// Syntax
// .PRINT [ANALYSIS] [alias_name=]OVN
//
print
    : PRINT ID? parameter_list end_of_line;

// ------------------------------------
// Plotting of Simulation Results
// Syntax:
//      .PLOT [ANALYSIS] OVN [(LOW, HIGH)] [(VERSUS)] {OVN [(LOW, HIGH)]} [UNIT=NAME] [(SCATTERED)] [STEP=value]
//      .PLOT AC|FSST S(i, j) [(SMITH[,zref])] [(POLAR)]
//      .PLOT FOUR FOURxx(label_name) [(SPECTRAL)] [(CONTINUOUS)]
//      .PLOT DSP DSPxx(label_name)
//      .PLOT EXTRACT [MEAS(meas_name) | SWEEP(sweep_name)]
//      .PLOT [CONTOUR] MEAS(meas_name_x) MEAS(meas_name_y) [(SCATTERED)] [(SMITH[,zref])] [(POLAR)]
//      .PLOT [ANALYSIS] TWO_PORT_PARAM [(SMITH[,zref])] [(POLAR)]
//
plot
    : PLOT ID? parameter_list end_of_line;

// ------------------------------------
// S, Y, Z Parameter Output File Specification
// 
// Syntax:
//      .FFILE S|Z|Y|G|H|T|A [SINGLELINE] FILENAME [HZ|KHZ|MHZ|GHZ] [RI|MA|DB]
//  
ffile
	: FFILE ffile_tabulation ffile_singleline? filepath ffile_unit? ffile_storage_format? end_of_line;
ffile_tabulation
	: ID;
ffile_singleline
	: ID;
ffile_unit
	: ID;
ffile_storage_format
	: ID;

// ------------------------------------
// Output Shortform
// Syntax:
//      .PROBE [ANALYSIS] [ALL|I|IX|ISUB|PORT|PRINT|Q|S|SG|SPARAM|V|VN|VTOP|VX|VXN|W|WTOP]
//          + [MASK=mask_name] [EXCEPT=pattern] [PRINT] [STEP=val] [DELTA=val]
//      .PROBE [ANALYSIS] [MASK=mask_name] [EXCEPT=pattern] [alias_name=] OVN
//          + [PRINT] [STEP=val] [DELTA=val]
//
probe
	: PROBE ID? parameter_list? end_of_line;

// ------------------------------------
// Waveform Definition
// Syntax:
//      .DEFWAVE [SWEEP] [ANALYSIS] WAVE_NAME=WAVE_EXPR
//
defwave
    : DEFWAVE ID? ID? parameter end_of_line;

// ------------------------------------
// Set Circuit Temperature
// Syntax:
//      .TEMP TS {TS}
//
temp
    : TEMP_SET NUMBER+ end_of_line;

// ------------------------------------
// Measure Waveform Characteristics
// Syntax:
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name TRIG trig_spec TARG targ_spec
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name                    WHEN when_spec AT val
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name FIND wave          WHEN when_spec
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name FIND wave AT val
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name FIND W(‘wave’)     WHEN when_spec [FROM=val] [TO=val]
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name DERIVATIVE wave    WHEN when_spec
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name DERIVATIVE wave AT val
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name meas_k wave [FROM=val] [TO=val]
//      .MEAS [ANALYSIS_INFO] [VECT] [CATVECT] label_name PARAM='value'
//
meas
    : MEAS meas_info? meas_vect? meas_catvect? meas_label_name meas_configuration+ parameter_list? end_of_line;
meas_info
    : ID;
meas_vect
    : VECT;
meas_catvect
    : CATVECT;
meas_label_name
    : ID;
meas_configuration
    : meas_find
    | meas_at
    | meas_when
    | meas_derivative
    | meas_param
    | meas_trig meas_targ;
meas_find
    : FIND expression;
meas_at
    : AT EQUAL? expression;
meas_when
    : WHEN expression;
meas_derivative
    : DERIVATIVE expression;
meas_param
    : PARAM EQUAL? expression;
meas_trig
    : TRIG parameter_list;
meas_targ
    : TARG parameter_list;

// ------------------------------------
// Connect - Connect Two Nodes
// Syntax:
//      .CONNECT N1 N2
//
connect
    : CONNECT expression expression end_of_line;

// ============================================================================
// Global Declarations
// Syntax:
//      Simple Description
//          .PARAM PAR=VAL {PAR=VAL}
//      Algebraic Description
//          .PARAM PAR=EXPR {PAR=EXPR}
//      Assigning a Character String
//          .PARAM PAR="NAME"
//      User Defined Function
//          .PARAM PAR(a,b)=EXPR
//      Monte Carlo Analysis Parameters
//          .PARAM PAR=VAL|PAR=EXPR
//              + LOT|DEV[/GAUSS|/UNIFORM|/USERDIST]=VAL|(dtype,-3sig,+3sig
//              + [,bi,-dz,+dz [,off,sv] [,scale])
//          .PARAM PAR=VAL LOTGROUP=my_lot_group
//          .PARAM PAR=MC_DISTRIBUTION
//          .PARAM PAR=VAL DEVX=VAL
//
global_declarations
	: GLOBAL_PARAM parameter_list end_of_line;

// ============================================================================
// COMPONENTS
// ============================================================================
component
    : component_type component_attribute* end_of_line;
component_type
    : resistor
    | capacitor
    | inductor
    | coupled_inductor
    | diffusion_resistor
    | transmission_line
    | lossy_transmission_line
    | ltl_w_model
    | ltl_u_model
    | junction_diode
    | bjt
    | jfet
    | mosfet
    | subckt_instance
    | ivsource
    | icsource
    | vcvs
    | cccs
    | vccs
    | ccvs
    | noise_function
    | sw
    | operational_amplifier
    | two_input_gate;
component_attribute
    : component_parameter_list
    | component_value
    | component_analysis
    | component_pin_list
    | component_port_list
    | component_net_list
    | component_coupling_list
    | component_value_list
    | component_table
    | component_positional_keywork
    | interp_type;
component_value
    : OPEN_CURLY (STRING | expression) CLOSE_CURLY
    |            (STRING | expression);
component_parameter_list
	: PARAM_LIST_START 
    | GENERIC_LIST_START
    | (PARAM_LIST_START | GENERIC_LIST_START)? parameter_list;
component_analysis
	: (AC | DC) OPEN_CURLY expression? CLOSE_CURLY
    | (AC | DC)            expression?;
component_positional_keywork
	: NOISE;
component_pin_list
	: PIN_LIST_START node_list;
component_port_list
	: PORT_LIST_START node_list;
component_net_list
	: NET_LIST_START node_list;
component_coupling_list
    : COUPLING_LIST_START expression+;
component_table
    : TABLE expression EQUAL expression_list+;
component_value_list
	: ( PWL | SIN | SFFM | PULSE | EXP ) OPEN_ROUND (expression COMMA?)+ CLOSE_ROUND;
interp_type
    : INTERP EQUAL ID;

// ============================================================================
// Resistor (or RC Wire)
// Rxx N1 N2
//      [MOD[EL]=MNAME] [VAL] [[TC1=]T1] [[TC2=]T2] [[TC3=]T3]
//    + [AC=VAL|{EXPR}] [T[EMP]=VAL] [DTEMP=VAL] [M=VAL] [L=VAL] [W=VAL]
//    + [STATISTICAL=0|1] [KEEPRMIN] [NONOISE] [KF=VAL] [AF=VAL] [WEEXP=VAL]
//    + [LEEXP=VAL] [FEXP=VAL] [FMIN=VAL] [FMAX=VAL] [NBF=VAL]
//
//      [MOD[EL]=MNAME] VALUE={EXPR} [ACDERFUNC=0|1]
//    + [RESTORE_CAUSALITY=0|1] [[TC1=]T1] [[TC2=]T2] [[TC3=]T3] [AC=VAL]
//    + [T[EMP]=VAL] [DTEMP=VAL] [M=VAL] [STATISTICAL=0|1] [KEEPRMIN] [NONOISE]
//    + [KF=VAL] [AF=VAL] [WEEXP=VAL] [LEEXP=VAL] [FEXP=VAL] [FMIN=VAL]
//    + [FMAX=VAL] [NBF=VAL] [FIT=0|1] [CFMAX=VAL] [CDELF=VAL]
//
//      [[TC1=]T1] [[TC2=]T2] [[TC3=]T3] [AC=VAL] [T[EMP]=VAL]
//    + [DTEMP=VAL] [M=VAL] [KF=VAL] [AF=VAL] [WEEXP=VAL] [LEEXP=VAL]
//    + [FEXP=VAL] [FMIN=VAL] [FMAX=VAL] [NBF=VAL] [STATISTICAL=0|1]
//    + TABLE EXPR [KEEPRMIN] [NONOISE]
//
//      POLY VAL {COEF} [TC1=T1] [TC2=T2] [TC3=T3] [STATISTICAL=0|1]
// RC Wire
//      MNAME [[R=]VAL] [TC1=VAL] [TC2=VAL] [C=VAL] [CRATIO=VAL]
//    + [L=VAL] [W=VAL] [M=VAL] [T[EMP]=VAL] [DTEMP=VAL] [SCALE=VAL]
//    + [STATISTICAL=0|1]
// ============================================================================
resistor : RESISTOR node node;

// ============================================================================
// CAPACITOR
// Cxx NP NN
//      [MOD[EL]=MNAME] [DCCUT] [VAL] [M=VAL] [L=VAL] [W=VAL]
//    + [T[EMP]=VAL] [DTEMP=VAL]
//    + [TC1=T1] [TC2=T2] [TC3=T3] [IC=VAL]
//    + [STATISTICAL=0|1]
//
//      POLY VAL {COEF}
//    + [M=VAL] [TC1=T1] [TC2=T2] [TC3=T3]
//    + [CTYPE=VAL] [IC=VAL]
//    + [STATISTICAL=0|1]
//
//      [VALUE=]{EXPR} [ACDERFUNC=0|1] [RESTORE_CAUSALITY=0|1]
//    + [TC1=T1] [TC2=T2] [TC3=T3] [CTYPE=VAL]
//    + [STATISTICAL=0|1]
// ============================================================================
capacitor : CAPACITOR node node;

// ============================================================================
// INDUCTOR
// Lxx NP NN 
//      [MOD[EL]=MNAME] [DCFEED] [VAL] [M=VAL1] [T[EMP]=VAL] [DTEMP=VAL]
//    + [IC=VAL3] [TC1=T1] [TC2=T2] [TC3=T3] [R=VAL4] [STATISTICAL=0|1]
//
//      POLY VAL {LN} [IC=VAL] [R=VAL] [TC1=T1] [TC2=T2] [TC3=T3]
//    + [STATISTICAL=0|1]
//
//      [VALUE=]{EXPR} [ACDERFUNC=0|1] [RESTORE_CAUSALITY=0|1]
//    + [R=VAL|R VALUE=EXPR|R
//    + TABLE {fval rval}] [TC1=T1] [TC2=T2] [TC3=T3] [STATISTICAL=0|1]
//
//      {port_list} KMATRIX=data_block [STATISTICAL=0|1]
//
//      {port_list} RELUCTANCE=({rn,cn,valn}) <options> [STATISTICAL=0|1]
//
//      {port_list} RELUCTANCE {FILE=”file”} <options> [STATISTICAL=0|1]
// ============================================================================
inductor : INDUCTOR node node;

// ============================================================================
// Coupled Inductor - K**
// Kxx Lyy Lzz KVAL [KR=KRVAL]
// ============================================================================
coupled_inductor : COUPLED_INDUCTOR ID ID;

// ============================================================================
// Diffusion Resistor (or Semiconductor Resistor)
// Pxx N1 N2 [NS] MNAME [L=VAL] [W=VAL] [NB=VAL]
// Pxx N1 N2 NS MNAME [R=VAL] [L=VAL] [CL=VAL] [W=VAL] [CW=VAL] [AREA=VAL] [STATISTICAL=0|1]
// ============================================================================
diffusion_resistor : DIFFUSION_RESISTOR node node node? ID;

// ============================================================================
// Transmission Line
// Txx NAP NAN NBP NBN [Z0=VAL1] TD=VAL2 [STATISTICAL=0|1]
// Txx NAP NAN NBP NBN [Z0=VAL1] F=VAL3 [NL=VAL4] [STATISTICAL=0|1]
// ============================================================================
transmission_line : TRANSMISSION_LINE node node node node;

// ============================================================================
// Lossy Transmission Line
// Yxx LDTL [PIN:] P1...PN [REFin] PN+1...P2N REFout
//      + [PARAM: [LEVEL=1] [LENGTH=val] [SAVEFIT=val] [M=VAL]
//      + [R(i)=val] [L(i,j)=val] [C(i,j)=val] [G(i,j)=val] [FR1=val]]
// ============================================================================
lossy_transmission_line : LOSSY_TRANSMISSION_LINE;

// ============================================================================
// Lossy Transmission Line - W Model
// Wxx N=nb_line
//      + P1...PN PGNDin PN+1...P2N PGNDout
//      + RLGCfile=file_name L=length [FP=val]
//      + [MULTIDEBYE=val] [SAVEFIT=val] [COMPAT=val] [FGD=val]
// ============================================================================
ltl_w_model : LTL_W_MODEL;

// ============================================================================
// Lossy Transmission Line - W Model
// Uxx P1...PN PGNDin PN+1...P2N PGNDout UNAME L=length [SAVEFIT=val]
// ============================================================================
ltl_u_model : LTL_U_MODEL;

// ============================================================================
// Junction Diode
// Dxx NP NN
//      [NM] MNAME [[AREA=]AREA_VAL] [PERI|PJ|PD=PERIVAL]
//    + [PGATE=PGATE_VAL] [T[EMP]=VAL] [DTEMP=VAL] [M=VAL] [OFF=0|1]
//    + [STATISTICAL=0|1] [NOISE=0|1] [NONOISE]
//
//      [NM] MNAME [FMIN=VAL] [FMAX=VAL] [NBF=VAL] [STATISTICAL=0|1]
// ============================================================================
junction_diode : JUNCTION_DIODE node node;

// ============================================================================
// BJT - Bipolar Junction Transistor
// Qxx NC NB NE
//      [NS] [TH] MNAME [[AREA=]AREA_VAL] [AREAB=AREA_VAL]
//    + [AREAC=AREA_VAL] [T[EMP]=VAL] [DTEMP=VAL] [M=VAL] [OFF=0|1]
//    + [STATISTICAL=0|1] [NOISE=0|1] [NONOISE]
//
//      [NS] MNAME [FMIN=VAL] [FMAX=VAL] [NBF=VAL] [STATISTICAL=0|1]
// ============================================================================
bjt : BJT node node node node? ID
    | BJT node node node node? node? ID;

// ============================================================================
// JFET - Junction Field Effect Transistor - J**
// Jxx ND NG NS MNAME
//      [[AREA=]AREA_VAL] [L=VAL] [W=VAL]
//    + [T[EMP]=VAL] [DTEMP=VAL] [M=VAL] [OFF=0|1] [STATISTICAL=0|1]
//    + [NONOISE] [NOISE=1]
//
//      [FMIN=VAL] [FMAX=VAL] [NBF=VAL] [STATISTICAL=0|1]
//
// MESFET
//      [AREA] [L=VAL] [W=VAL] [T[EMP]=VAL] [DTEMP=VAL]
//    + [M=VAL] [OFF=0|1] [STATISTICAL=0|1] [NONOISE] [NOISE=1]
//
//      [FMIN=VAL] [FMAX=VAL] [NBF=VAL] [STATISTICAL=0|1]
// ============================================================================
jfet : JFET node node node ID;

// ============================================================================
// MOSFET - M**
// Mxx ND NG NS
//      [NB] [{NN}] [MOD[EL]=]MNAME [[L=]VAL] [[W=]VAL]
//    + [AD=VAL] [AS=VAL] [PD=VAL] [PS=VAL] [GEO=VAL] [NRD=VAL] [NRS=VAL]
//    + [M=VAL] [RDC=VAL] [RSC=VAL] [T[EMP]=VAL] [DTEMP=VAL] [STATISTICAL=0|1]
//    + [NONOISE] [NOISE=1]
//
//      [NB] [{NN}] [MOD[EL]=]MNAME [W=VAL] [L=VAL]
//    + [FMIN=VAL] [FMAX=VAL] [NBF=VAL] [STATISTICAL=0|1]
// ============================================================================
mosfet : MOSFET node_list ((MODEL | MOD) EQUAL)? ID;

// ============================================================================
// Subcircuit Instance
// Xxx NN {NN} NAME [PAR=VAL] [PAR={EXPR}] [M=VAL] [TEMP=VAL] [DTEMP=VAL]
//    + [STATISTICAL=0|1] [(ANALOG|OSR|DIGITAL)] [NONOISE|NOISE=0]
//      [MODEL:] MNAME PIN: {pin=net}
//
//    + PARAM: {par=val} KEYWORD: {keywords} [STATISTICAL=0|1]
//
//      [MODEL:] MNAME NET: {net=pin}
//    + PARAM: {par=val} KEYWORD: {keywords} [STATISTICAL=0|1]
// ============================================================================
subckt_instance : SUBCK_INSTANCE node_list ID
                | SUBCK_INSTANCE (MODEL COLON)? ID;

// ============================================================================
// Independent Voltage Source
// Vxx NP NN [[DC] DCVAL] [AC [ACMAG [ACPHASE]]]
// ----------------------------------------------------------------------------
// Independent Source Element
//      [TIME_DEPENDENT_FUNCTION1]
//    + [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val] [LPORT=val]
//    + [MODE=keyword] [NOISETEMP=val]
//
//      [TIME_DEPENDENT_FUNCTION1]
//    + [TC1=val] [TC2=val] ZPORT_FILE=string [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val]
// ----------------------------------------------------------------------------
// Noise Source
//      [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val] NOISE [THN=VAL] [FLN=VAL]
//    + [ALPHA=VAL] [FC=VAL] [N=VAL] [FMIN=VAL] [FMAX=VAL] [NBF=VAL]
//
//      [TC1=val] [TC2=val] ZPORT_FILE=string [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val] NOISE [THN=VAL] [FLN=VAL]
//    + [ALPHA=VAL] [FC=VAL] [N=VAL] [FMIN=VAL] [FMAX=VAL] [NBF=VAL]
// ----------------------------------------------------------------------------
// Tabular Noise Source
//      [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val] NOISE TABLE
//    + [[INTERP=]DEC|OCT|LIN|LOG|HARM_DEC|HARM_OCT] [DB|MA]
//    + (f1 val1) (f2 val2) ...
//
//      [TC1=val] [TC2=val] ZPORT_FILE=string [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val] NOISE TABLE
//    + [[INTERP=]DEC|OCT|LIN|LOG|HARM_DEC|HARM_OCT] [DB|MA]
//    + (f1 val1) (f2 val2) ...
// ----------------------------------------------------------------------------
// Multi-Tone Source
//      [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val]
//    + FOUR [DELAY=val] fund1 [fund2 [fund3]] MA|RI|DB|PMA|PDB|PDBM
//    + (int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2
//    + {(int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2}
//
//      [TC1=val] [TC2=val] ZPORT_FILE=string
//    + [IPORT=val] [CPORT=val] [LPORT=val] [MODE=keyword] [NOISETEMP=val]
//    + FOUR [DELAY=val] fund1 [fund2 [fund3]] MA|RI|DB|PMA|PDB|PDBM
//    + (int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2
//    + {(int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2}
// ============================================================================
ivsource : IVSOURCE node node;

// ============================================================================
// Independent Current Source
// Ixx NP NN [[DC] DCVAL] [AC [ACMAG [ACPHASE]]]
// ----------------------------------------------------------------------------
// Independent Source Element
//      [TIME_DEPENDENT_FUNCTION1]
//    + [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val] [LPORT=val]
//    + [NOISETEMP=val]
//
//      [TIME_DEPENDENT_FUNCTION1]
//    + [TC1=val] [TC2=val] ZPORT_FILE=string [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val]
// ----------------------------------------------------------------------------
// Noise Sources
//      [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]] [RPORT_TC1=val]
//    + [RPORT_TC2=val] [IPORT=val] [CPORT=val] [LPORT=val] [NOISETEMP=val]
//    + NOISE [THN=VAL] [FLN=VAL] [ALPHA=VAL] [FC=VAL] [N=VAL] [FMIN=VAL]
//    + [FMAX=VAL] [NBF=VAL]
// 
//      [TC1=val] [TC2=val] [IPORT=val] [CPORT=val]
//    + ZPORT_FILE=string [LPORT=val] [MODE=keyword] [NOISETEMP=val]
//    + NOISE [THN=VAL] [FLN=VAL] [ALPHA=VAL] [FC=VAL] [N=VAL] [FMIN=VAL]
//    + [FMAX=VAL] [NBF=VAL]
// ----------------------------------------------------------------------------
// Tabular Noise Source
//      [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val]
//    + [LPORT=val] [NOISETEMP=val] NOISE TABLE
//    + [[INTERP=]DEC|OCT|LIN|LOG|HARM_DEC|HARM_OCT] (f1 val1) (f2 val2) ...
// 
//      [TC1=val] [TC2=val] ZPORT_FILE=string [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val] NOISE TABLE
//    + [[INTERP=]DEC|OCT|LIN|LOG|HARM_DEC|HARM_OCT] (f1 val1) (f2 val2) ...
// ----------------------------------------------------------------------------
// Multi-Tone Source
//      [TC1=val] [TC2=val] [RPORT=val [NONOISE] [NOISE=1]]
//    + [RPORT_TC1=val] [RPORT_TC2=val] [IPORT=val] [CPORT=val]
//    + [LPORT=val] [NOISETEMP=val]
//    + FOUR [DELAY=val] fund1 [fund2 [fund3]] MA|RI|DB|PMA|PDB|PDBM
//    + (int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2
//    + {(int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2}
// 
//      [TC1=val] [TC2=val] ZPORT_FILE=string [IPORT=val] [CPORT=val]
//    + [LPORT=val] [MODE=keyword] [NOISETEMP=val]
//    + FOUR [DELAY=val] fund1 [fund2 [fund3]] MA|RI|DB|PMA|PDB|PDBM
//    + (int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2
//    + {(int_val1 [,int_val2 [,int_val3]]) real_val1 real_val2}
// ============================================================================
icsource : ICSOURCE node node;

// ============================================================================
// Voltage Controlled Voltage Source
// Exx NP NN
// ----------------------------------------------------------------------------
// Linear (Voltage Gain Block)
//      [VCVS] NCP NCN VAL [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
//
//      [VCVS] NCP NCN VAL0 {VALn} [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Polynomial
//      [VCVS] POLY(ND) PCP PCN {PCP PCN} PN {PN}
//    + [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Piece Wise Linear
//      PWL(1) NCP NCN PWL_LIST [DELTA=val]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Multi-Input Gate
//      NAND(ND)|AND(ND)|OR(ND)|NOR(ND) PCP PCN {PCP PCN}
//    + PWL_LIST [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Delay Element
//      DELAY NCP NCN [TD=val] [ABS=VAL]
// ----------------------------------------------------------------------------
// Arithmetic Expression
//      VALUE={EXPR} [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Tabular
//      [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL]
//    + TABLE EXPR=(XN YN) {(XN YN)} [ABS=VAL]
// ----------------------------------------------------------------------------
// Integral/Derivative
//      INTEGRATION|DERIVATION NCP NCN VAL
//    + [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// S-domain
//      FNS NCP NCN n0 n1 ... nm, p0 p1 ... pn
//      PZ NCP NCN a zr1 zi1 ... zrm zim, b pr1 pi1 ... prn pin
// ----------------------------------------------------------------------------
// Frequency Dependent
//      FREQ NCP NCN f0 a0 ph0 f1 a1 ph1... fn an phn
//    + [RESTORE_CAUSALITY=0|1]
// ----------------------------------------------------------------------------
// Ideal Transformer
//      TRANS[FORMER] NCP NCN VAL [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Ideal Op-Amp
//      OPAMP NCP NCN
// ============================================================================
vcvs : VCVS node node;

// ============================================================================
// Current Controlled Current Source
// Fxx NP NN
// ----------------------------------------------------------------------------
// Linear (Current Gain Block)
//      [CCCS] VN VAL [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Polynomial
//      [CCCS] POLY(ND) VN {VN} PN {PN}
//    + [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL]
//    + [ABS=VAL]
// ----------------------------------------------------------------------------
// Piece Wise Linear
//      PWL(1) VN PWL_LIST [DELTA=val]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Multi-Input Gate
//      NAND(ND)|AND(ND)|OR(ND)|NOR(ND) VN {VN}
//    + PWL_LIST [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Delay Element
//      DELAY VN [TD=val] [ABS=VAL]
// ----------------------------------------------------------------------------
// Integral/Derivative
//      INTEGRATION|DERIVATION VN VAL [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// S-domain
//      FNS VN n0 n1 ... nm, p0 p1 ... pn
//
//      PZ VN a zr1 zi1 ... zrm zim, b pr1 pi1 ... prn pin
// ============================================================================
cccs : CCCS node node;

// ============================================================================
// Voltage Controlled Current Source
// Gxx NP NN
// ----------------------------------------------------------------------------
// Linear (Transconductance Gain Block)
//      [VCR|VCCAP|VCCS] NCP NCN VAL [MIN=VAL] [MAX=VAL]
// + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Polynomial
//      [VCR|VCCAP|VCCS] POLY(ND) PCP PCN {PCP PCN} PN {PN}
//    + [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Piece Wise Linear
//      [VCR|VCCAP|VCCS] [PWL(1)|NPWL(1)|PPWL(1)] NCP NCN PWL_LIST
//    + [DELTA=val] [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL]
//    + [ABS=VAL]
// ----------------------------------------------------------------------------
// Multi-Input Gate
//      NAND(ND)|AND(ND)|OR(ND)|NOR(ND) PCP PCN {PCP PCN}
//    + PWL_LIST [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Delay Element
//      DELAY NCP NCN [TD=val] [ABS=VAL]
// ----------------------------------------------------------------------------
// Arithmetic Expression
//      VALUE={EXPR} [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Tabular
//      [VCR|VCCAP|VCCS] [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL]
//    + [SCALE=VAL] [ABS=VAL] TABLE EXPR=(XN YN) {(XN YN)}
// ----------------------------------------------------------------------------
// Integral/Derivative
//      INTEGRATION|DERIVATION NCP NCN VAL
//    + [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// S-domain
//      FNS NCP NCN n0 n1 ... nm, p0 p1 ... pn
//      PZ NCP NCN a zr1 zi1 ... zrm zim, b pr1 pi1 ... prn pin
// ----------------------------------------------------------------------------
// Frequency Dependent
//      FREQ NCP NCN f0 a0 ph0 f1 a1 ph1... fn an phn
//    + [RESTORE_CAUSALITY=0|1]
// ============================================================================
vccs : VCCS node node;

// ============================================================================
// Current Controlled Voltage Source
// Hxx NP NN
// ----------------------------------------------------------------------------
// Linear (Transresistance Gain Block)
//      [CCVS] VN VAL [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Polynomial
//      [CCVS] POLY(ND) VN {VN} PN {PN}
//    + [MIN=VAL] [MAX=VAL] [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Piece Wise Linear
//      PWL(1) VN PWL_LIST [DELTA=val]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Multi-Input Gate
//      NAND(ND)|AND(ND)|OR(ND)|NOR(ND) VN {VN}
//    + PWL_LIST [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// Delay Element
//      DELAY VN [TD=val] [ABS=VAL]
// ----------------------------------------------------------------------------
// Integral/Derivation
//      INTEGRATION|DERIVATION VN VAL [MIN=VAL] [MAX=VAL]
//    + [TC1=VAL] [TC2=VAL] [SCALE=VAL] [ABS=VAL]
// ----------------------------------------------------------------------------
// S-domain
//      FNS VN n0 n1 ... nm, p0 p1 ... pn
//
//      PZ VN a zr1 zi1 ... zrm zim, b pr1 pi1 ... prn pin
// ============================================================================
ccvs : CCVS node node;

// ============================================================================
// Noise
// ----------------------------------------------------------------------------
// NOISE THN FLN ALPHA [FC N] [FMIN] [FMAX] [NBF] [value={expr}]
//
// Noise Table Function
// NOISE TABLE [[INTERP=]DEC|OCT|LIN|LOG|HARM_DEC|HARM_OCT] [DB|MA]
//    + (f1 val1) (f2 val2) ...
// ============================================================================
noise_function : NOISE;

// ============================================================================
// Switch
// ----------------------------------------------------------------------------
// Sxx NC N1 N2 [MNAME] [RON [CREC]]
// ============================================================================
sw : SW node node node ID? (expression_atom expression_atom?)?;

// ============================================================================
// Operational Amplifier
// ----------------------------------------------------------------------------
// OPAxx INP INN OUTP OUTN [MNAME] [LEVEL=VAL] [VOFF=VAL]
//    + [SL=VAL] [CIN=VAL] [RS=VAL] [VSAT=VAL] [VSATM=VAL]
//    + [GAIN=VAL] [FC=VAL] [FNDP=VAL] [IMAX=VAL] [CMRR=VAL]
// ============================================================================
operational_amplifier : OPA node node node node ID?;

// ============================================================================
// 2-Input Digital Gates
// ----------------------------------------------------------------------------
// <dgate><xx> IN1 IN2 OUT [REF1 REF2] [MNAME] [PAR=VAL]
// ============================================================================
two_input_gate : (DIG_NAND | DIG_AND | DIG_OR | DIG_NOR | DIG_XOR) node node node (ID ID)? ID? parameter_list;

// ============================================================================
// End - End Eldo Netlist
//
end
    : NETLIST_END end_of_line;

// ============================================================================
expression
    : expression_unary
    | expression_function_call
    | expression_list
    | expression_atom
    | expression OPEN_CURLY          expression CLOSE_CURLY
    | expression expression_operator expression?
    | expression QUESTION_MARK expression COLON expression;
expression_unary
    : (PLUS | MINUS) expression;
expression_function_call
    : (ID | MOD | MODEL) (OPEN_ROUND | OPEN_CURLY | OPEN_SQUARE) (expression COMMA?)+ (CLOSE_ROUND | CLOSE_CURLY | CLOSE_SQUARE);
expression_list
    : (OPEN_ROUND | OPEN_CURLY | OPEN_SQUARE) (expression COMMA?)+ (CLOSE_ROUND | CLOSE_CURLY | CLOSE_SQUARE);
expression_operator
    : EQUAL
    
    | PLUS | MINUS | STAR | SLASH

    | LOGIC_AND | LOGIC_BITWISE_AND
    | LOGIC_OR  | LOGIC_BITWISE_OR

    | LOGIC_EQUAL | LOGIC_NOT_EQUAL

    | LOGIC_XOR

    | LESS_THAN    | LESS_THAN_EQUAL
    | GREATER_THAN | GREATER_THAN_EQUAL

    | EXCLAMATION_MARK

    | BITWISE_SHIFT_LEFT | BITWISE_SHIFT_RIGHT

    | POWER_OPERATOR | CARET

    | PERCENT;
expression_atom
    : NUMBER
    | ID
    | STRING
    | PERCENTAGE
    | STRING;

// ============================================================================
node_list
    :            (node_list_item COMMA?)+
    | OPEN_ROUND (node_list_item COMMA?)+ CLOSE_ROUND;
node_list_item
    : node
    | node_mapping;
node_mapping
    : node EQUAL node;
node
    : (ID | NUMBER) (DOT node)?;

// ============================================================================
parameter_list
    : PARAM_LIST_START? OPEN_ROUND? parameter_list_item+ CLOSE_ROUND?;
parameter_list_item
    : parameter;
parameter
    : parameter_lhs parameter_rhs?;
parameter_lhs
    : expression_function_call
    | expression_list
    | (ID | MOD | MODEL)
    ;
parameter_rhs
    : EQUAL expression;

// ============================================================================
// filepath
//    : SLASH     ((ID SLASH)+)? ID
//    | DOT SLASH ((ID SLASH)+)? ID
//    |           ((ID SLASH)+)? ID;
filepath
    : filepath_element;
filepath_element
    : ID
    | STRING
    | ID     filepath_element
    | APEX   filepath_element APEX
    | SLASH  filepath_element
    | DOT    filepath_element
    | MINUS  filepath_element
    | DOLLAR filepath_element
    ;

end_of_line
    : (NL* | EOF);