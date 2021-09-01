// ----------------------------------------------------------------------------
// Author : Enrico Fraccaroli
// Date   : 04/02/2018
// ----------------------------------------------------------------------------
parser grammar SPECTREParser;

options {
    tokenVocab = SPECTRELexer;
}

// ============================================================================
netlist
    : netlist_title? (NL* | EOF) netlist_entity+ (NL* | EOF);

// ============================================================================
netlist_title
    : ID+ (NL* | EOF);

// ============================================================================
netlist_entity
    : include
    | library
    | subckt
    | analysis
    | global
    | model
    | global_declarations
    | control
    | component

    | lang
    | section
    
    | analogmodel
    | statistics
    ;

// ============================================================================
// Include File (include)
// Syntax:
//      include "<file>" section=<name>
//
include
    : standard_include
    | cpp_include
    | ahdl_include
    ;
standard_include
    : INCLUDE  filepath parameter_assign? (NL* | EOF);
cpp_include
    : CPP_INCLUDE filepath (NL* | EOF);
ahdl_include
    : AHDL_INCLUDE filepath MINUS? ID? (NL* | EOF);


// ============================================================================
// Language Modes
// Syntax:
//      simulator lang=<mode> [insensitive=yes]
//
lang
    : SIMULATOR LANGUAGE EQUAL SPICE (NL* | EOF)
    | SIMULATOR LANGUAGE EQUAL SPECTRE (INSENSITIVE EQUAL ID)? (NL* | EOF);

// ============================================================================
// Library Definition
// Syntax:
//      library <name>
//          statements
//      library [<name>]
//
library
    : library_header library_content+ library_footer;
library_header
    : LIBRARY ID (NL* | EOF);
library_content
    : netlist_entity;
library_footer
    : LIBRARY_END ID? (NL* | EOF);

// ============================================================================
// Section Definition
// Syntax:
//      section <name>
//          statements
//      endsection [<name>]
//
section 
    : section_header section_content+ section_footer;
section_header
    : SECTION ID (NL* | EOF);
section_content
    : netlist_entity;
section_footer
    : SECTION_END ID? (NL* | EOF);

// ============================================================================
// Analog Model
// Syntax:
//      name [(]<node> ... <node>[)] analogmodel modelname=mastername [<param>=<value> ...]
//
analogmodel
    : ID node_list ANALOGMODEL parameter_list?;

// ============================================================================
// Sub-circuit definition
// Syntax:
//      [inline] subckt <name> (<node> ... <node>)
//          [parameters <param>=<value> ...]
//          statements
//      ends [<name>]
//
subckt
    : subckt_header subckt_content+ subckt_footer;
subckt_header
    : (INLINE_SUBCKT | SUBCKT) ID node_list? NL+;
subckt_content
    : netlist_entity;
subckt_footer
    : SUBCKT_END ID? (NL* | EOF);

// ============================================================================
// Structural if-statement (if)
// Syntax:
//      if <condition> { <statement> } [ else { <statement> } ]
//
if_statement
    : IF expression if_body if_alternative?;
if_alternative
    : ELSE if_body;
if_body
    : (NL* OPEN_CURLY NL*)?
        (component | analysis | control | if_statement | NL)+
      (NL* CLOSE_CURLY)? (NL* | EOF);

// ============================================================================
// Analysis Statements
//
analysis
    : ac
    | acmatch
    | dc
    | dcmatch
    | envlp
    | sp
    | stb
    | sweep
    | tdr
    | tran
    | xf
    | pac
    | pdisto
    | pnoise
    | psp
    | pss
    | pxf
    | pz
    | qpac
    | qpnoise
    | qpsp
    | qpss
    | qpxf
    | sens
    | montecarlo
    | noise
    | checklimit
    | reliability;

// ------------------------------------
// AC Analysis (ac)
// Syntax:
//      Name ac <param>=<value> ...
// 
ac
    : ID AC parameter_list? (NL* | EOF);

// ------------------------------------
// ACMatch Analysis
// Syntax:
//      Name ([node1] [node2]) acmatch <param>=<value> ...
// 
acmatch
    : ID ACMATCH node_list? parameter_list? (NL* | EOF);

// ------------------------------------
// DC Analysis
// Syntax:
//      Name dc parameter=value ...
// 
dc
    : ID DC parameter_list? (NL* | EOF);

// ------------------------------------
// DC Device Matching Analysis
// Syntax:
//      Name [<node> <node>] dcmatch parameter=value ...
// 
dcmatch
    : ID node_list? DCMATCH parameter_list? (NL* | EOF);

// ------------------------------------
// Envelope Following Analysis
// Syntax:
//      Name [<node> <node>] envlp parameter=value ...
// 
envlp
    : ID node_list? ENVLP parameter_list? (NL* | EOF);

// ------------------------------------
// S-Parameter Analysis
// Syntax:
//      Name sp parameter=value ...
// 
sp
    : ID SP parameter_list? (NL* | EOF);

// ------------------------------------
// Stability Analysis
// Syntax:
//      Name stb parameter=value ...
// 
stb
    : ID STB parameter_list? (NL* | EOF);

// ------------------------------------
// Sweep Analysis
// Syntax:
//      Name sweep [param=value ...] {
//          <statements
//      }
// 
sweep
    : sweep_header sweep_content+ sweep_footer;
sweep_header
    : ID SWEEP NL* parameter_list* OPEN_CURLY (NL* | EOF);
sweep_content
    : netlist_entity;
sweep_footer
    : CLOSE_CURLY (NL* | EOF);

// ------------------------------------
// Time-Domain Reflectometer Analysis (tdr)
// Syntax:
//      Name tdr parameter=value ...
// 
tdr
    : ID TDR parameter_list? (NL* | EOF);

// ------------------------------------
// Transient Analysis (tran)
// Syntax:
//      Name tran parameter=value ...
// 
tran
    : ID TRAN parameter_list? (NL* | EOF);

// ------------------------------------
// Transfer Function Analysis (xf)
// Syntax:
//      Name [<node> <node>] xf parameter=value ...
// 
xf
    : ID node_list? XF parameter_list? (NL* | EOF);

// ------------------------------------
// Periodic AC Analysis (pac)
// Syntax:
//      Name [<node> <node>] pac parameter=value ...
// 
pac
    : ID node_list? PAC parameter_list? (NL* | EOF);

// ------------------------------------
// Periodic Distortion Analysis (pdisto)
// Syntax:
//      Name [<node> <node>] pac parameter=value ...
// 
pdisto
    : ID node_list? PDISTO parameter_list? (NL* | EOF);

// ------------------------------------
// Periodic Noise Analysis (pnoise)
// Syntax:
//      Name [<node> <node>] ... pnoise parameter=value ...
// 
pnoise
    : ID node_list? PNOISE parameter_list? (NL* | EOF);

// ------------------------------------
// Periodic S-Parameter Analysis (psp)
// Syntax:
//      Name psp parameter=value ...
// 
psp
    : ID PSP parameter_list? (NL* | EOF);

// ------------------------------------
// Periodic Steady-State Analysis (pss)
// Syntax:
//      Name [<node> <node>] pss parameter=value ...
// 
pss
    : ID node_list? PSS parameter_list? (NL* | EOF);

// ------------------------------------
// Periodic Transfer Function Analysis (pxf)
// Syntax:
//      Name [<node> <node>] ... pxf parameter=value ...
// 
pxf
    : ID node_list? PXF parameter_list? (NL* | EOF);

// ------------------------------------
// PZ Analysis (pz)
// Syntax:
//      Name ... pz parameter=value ...
// 
pz
    : ID node_list? PZ parameter_list? (NL* | EOF);

// ------------------------------------
// Quasi-Periodic AC Analysis (qpac)
// Syntax:
//      Name qpac parameter=value ...
// 
qpac
    : ID QPAC parameter_list? (NL* | EOF);

// ------------------------------------
// Quasi-Periodic Noise Analysis (qpnoise)
// Syntax:
//      Name [<node> <node>] qpnoise parameter=value ...
// 
qpnoise
    : ID node_list? QPNOISE parameter_list? (NL* | EOF);

// ------------------------------------
// Quasi-Periodic S-Parameter Analysis (qpsp)
// Syntax:
//      Name qpsp parameter=value ...
// 
qpsp
    : ID QPSP parameter_list? (NL* | EOF);

// ------------------------------------
// Quasi-Periodic Steady State Analysis (qpss)
// Syntax:
//      Name (<node> <node>) ... qpss parameter=value ...
// 
qpss 
    : ID node_list? QPSS parameter_list? (NL* | EOF);

// ------------------------------------
// Quasi-Periodic Transfer Function Analysis (qpxf)
// Syntax:
//      Name [<node> <node>] qpxf parameter=value ...
// 
qpxf
    : ID node_list? QPXF parameter_list? (NL* | EOF);

// ------------------------------------
// Sensitivity Analyses (sens)
// Syntax:
//      sens [(output_variables_list)] [ to (design_parameters_list) ] [ for ( analyses_list ) ]
// 
sens
    : SENS sens_output_variables_list? (ID sens_design_parameters_list)? (ID sens_design_parameters_list)? (NL* | EOF);
sens_output_variables_list
    : OPEN_ROUND node_list+ CLOSE_ROUND;
sens_design_parameters_list
    : OPEN_ROUND node_list+ CLOSE_ROUND;
sens_analyses_list
    : OPEN_ROUND node_list+ CLOSE_ROUND;

// ------------------------------------
// Monte Carlo Analysis (montecarlo)
// Syntax:
//      Name montecarlo parameter=value ... {
//          analysis statements ...
//          export statements ...
//      }
// 
montecarlo
    : montecarlo_header montecarlo_content+ montecarlo_export montecarlo_footer;
montecarlo_header
    : ID MONTECARLO NL* parameter_list* OPEN_CURLY (NL* | EOF);
montecarlo_content
    : netlist_entity;
montecarlo_export
    : EXPORT parameter_list (NL* | EOF);
montecarlo_footer
    : CLOSE_CURLY (NL* | EOF);

// ------------------------------------
// Noise Analysis (noise)
// Syntax:
//      Name [<node> <node>] noise parameter=value ...
// 
noise
    : ID node_list? NOISE parameter_list? (NL* | EOF);

// ------------------------------------
// Checklimit Analysis (checklimit)
// Syntax:
//      Name checklimit parameter=value ...
// 
checklimit
    : ID CHECKLIMIT parameter_list? (NL* | EOF);

// ============================================================================
// Global Nodes (global)
// Syntax:
//      global <ground> <node> ...
// ----------------------------------------------------------------------------
global
    : GLOBAL node_list (NL* | EOF);

// ============================================================================
// Model Statements
// Syntax:
//      model name master [[param1=value1] ... [param2=value2 ]]
// ----------------------------------------------------------------------------
model
    : MODEL model_name model_master parameter_list? (NL* | EOF);
model_name
    : ID;
model_master
    : ID | component_type;

// ============================================================================
control
    : alter
    | altergroup

    | assert_statement
    | check_statement

    | save
    | option
    | set
    | shell
    | info
    | nodeset
    | ic
    ;

// ------------------------------------
// Alter a Circuit, Component, or Netlist Parameter (alter)
// Syntax:
//      Name alter <param>=<value> ...
//
alter
    : ID ALTER parameter_list? (NL* | EOF);

// ------------------------------------
// Alter Group (altergroup)
// Syntax:
//      Name altergroup <param>=<value> {
//          {parameters=value}
//          <altergroup content>
//      }
//
altergroup
    : altergroup_header global_declarations altergroup_content+ altergroup_footer;
altergroup_header
    : ID ALTERGROUP NL* OPEN_CURLY (NL* | EOF);
altergroup_content
    : netlist_entity;
altergroup_footer
    : CLOSE_CURLY (NL* | EOF);

// ------------------------------------
// Assert Statement
// Syntax:
//      Name assert sub=subcircuit_master
//          { dev=instance | mod=model | primitive=primitive }
//          { param=parameter_name | modelparam=parameter }
//          [ min=value ] [ max=value ]
//          [ duration=independentvar_limit ]
//          [ message=”message”][level= notice | warning | error ]
//          [ info= yes | no ]
//
assert_statement
    : ID ASSERT parameter_assign parameter_list? (NL* | EOF);

// ------------------------------------
// Check Statement
// Syntax:
//      Name check <param>=<value> ...
//
check_statement
    : ID CHECK parameter_assign (NL* | EOF);

// ------------------------------------
// Output Selections (save)
// Syntax:
//      save <node|component|subckt>
// ex: save 7 out OpAmp1.comp M1:currents D3:oppoint L1:1 R4:pwr
save
    : SAVE ID parameter_list? (NL* | EOF);

// ------------------------------------
// Immediate Set Options (options)
// Syntax:
//      Name options <param>=<value> ...
option
    : ID OPTIONS parameter_list? (NL* | EOF);

// ------------------------------------
// Deferred Set Options (set)
// Syntax:
//      Name set <param>=<value> ...
set
    : ID SET parameter_list? (NL* | EOF);

// ------------------------------------
// Shell Command (shell)
// Syntax:
//      Name shell <param>=<value> ...
shell
    : ID SHELL parameter_list? (NL* | EOF);

// ------------------------------------
// Circuit Information (info)
// Syntax:
//      Name info <param>=<value> ...
info
    : ID INFO parameter_list? (NL* | EOF);

// ------------------------------------
// Node Sets (nodeset)
// Syntax:
//      nodeset <node | component | subcircuit>[:param]=value
nodeset
    : NODESET parameter_access? EQUAL expression (NL* | EOF);

// ------------------------------------
// Initial conditions
// Syntax:
//      ic signalName=value …
ic
    : IC parameter_list? (NL* | EOF);

// ============================================================================
// Statistics block
// Syntax:
//      statistics { <statements> }
//      process    { <statements> }
//      mismatch   { <statements> }
//      correlate param=[list of parameters] cc=<value>
//      correlate dev=[list of subcircuit instances] {param=[list of parameters]} cc=<value>
//      truncate tr=<value>
//      vary <parameter_name> dist=<type> {std=<value> | N=<value>} {percent=yes|no}
statistics
    : statistics_header statistics_content+ statistics_footer;
statistics_header
    : STATISTICS NL* OPEN_CURLY NL*;
statistics_content
    : process
    | mismatch
    | vary
    | correlate
    | truncate;
statistics_footer
    : CLOSE_CURLY (NL* | EOF);
process
    : PROCESS NL*  OPEN_CURLY NL* statistics_content+ CLOSE_CURLY (NL* | EOF);
mismatch
    : MISMATCH NL* OPEN_CURLY NL* statistics_content+ CLOSE_CURLY (NL* | EOF);
correlate
    : CORRELATE ID EQUAL OPEN_SQUARE parameter_id+ CLOSE_SQUARE (NL* | EOF)
    | CORRELATE (ID EQUAL OPEN_SQUARE parameter_id+ CLOSE_SQUARE)+ parameter_assign (NL* | EOF);
truncate
    : TRUNCATE parameter_assign (NL* | EOF);
vary
    : VARY ID parameter_list? (NL* | EOF);

// ============================================================================
// Reliability Analysis (reliability)
// Syntax:
//      name reliability <global options> {
//          <reliability control statements> ...
//          <stress simulation statements> ...
//          <aging testbench statements> ...
//          <aging/post-stress simulation statements> ...
//      }
reliability
    : reliability_header reliability_content+ reliability_footer;
reliability_header
    : ID RELIABILITY parameter_list? NL* OPEN_CURLY NL*;
reliability_content
    : reliability_control
    | netlist_entity;
reliability_footer
    : CLOSE_CURLY (NL* | EOF);
reliability_control
    : ID parameter_list (NL* | EOF);

// ============================================================================
global_declarations
    : GLOBAL_PARAMETERS OPEN_ROUND parameter_list_item+ CLOSE_ROUND (NL* | EOF)
    | GLOBAL_PARAMETERS          parameter_list_item+           (NL* | EOF);

// ============================================================================
// COMPONENTS
// ============================================================================
component
    : component_id node_list? component_master component_attribute* (NL* | EOF);
component_id
	: ID;
component_master
    : ID | component_type;
component_attribute
    : component_value
    | component_value_list
    | component_analysis
    | parameter_assign;
component_value
    : OPEN_CURLY? (STRING | expression) CLOSE_CURLY?;
component_value_list
	: ( PWL | SIN | SFFM | PULSE | WAVE | COEFFS ) EQUAL? OPEN_ROUND    (time_pair+ | expression+) CLOSE_ROUND
    | ( PWL | SIN | SFFM | PULSE | WAVE | COEFFS ) EQUAL? OPEN_SQUARE (time_pair+ | expression+) CLOSE_SQUARE
    | ( PWL | SIN | SFFM | PULSE | WAVE | COEFFS ) EQUAL? OPEN_CURLY  (time_pair+ | expression+) OPEN_CURLY;
component_analysis
	: (AC | DC) OPEN_CURLY expression? CLOSE_CURLY
    | (AC | DC)            expression?;

// ============================================================================
node_list
    :          node_list_item+
    | OPEN_ROUND node_list_item+ CLOSE_ROUND;
node_list_item
    : node | node_mapping | node_branch;
node_mapping
    : node EQUAL node;
node_pair
    : node COMMA node;
node_branch
    : node COLON node;
node
    : (ID | NUMBER) (DOT node)?;

// ============================================================================
expression
    : expression_unary
    | expression_function_call
    | expression_scope
    | expression_atom
    | expression_pair
    | expression expression_operator expression?
    | expression QUESTION_MARK expression COLON expression;
expression_unary
    : (PLUS | MINUS) expression;
expression_function_call
    : ID OPEN_ROUND (expression COMMA?)+ CLOSE_ROUND;
expression_pair
    : expression_atom COMMA expression_atom;
expression_scope
    : (OPEN_ROUND | OPEN_CURLY | APEX | OPEN_SQUARE) (expression COMMA?)+ (CLOSE_ROUND | CLOSE_CURLY | APEX | CLOSE_SQUARE);
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
    | STRING
    | keyword
    | analysis_type
    | component_type;

// ============================================================================
parameter_list
    : PARAMETERS? OPEN_ROUND? parameter_list_item+ CLOSE_ROUND?;
parameter_list_item
    : parameter_assign | parameter_id;
parameter_assign
    : parameter_id EQUAL expression
    | parameter_id EQUAL filepath;
parameter_id
    : (ID | SECTION | DC) expression_scope?;
parameter_access
    : COLON (ID | NUMBER);

// ============================================================================
// Access the value of a node or an expression.
// Example: V(P1)
value_access
    : ID? OPEN_ROUND (expression | node_pair | node) CLOSE_ROUND;
value_access_assign
    : value_access EQUAL expression;

// ============================================================================
time_pair
	: time_point expression
	| time_point OPEN_CURLY expression CLOSE_CURLY;
time_point
	: expression;

// ============================================================================
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

/*
// ----------------------------------------------------------------------------
// Start with the parser.
// ----------------------------------------------------------------------------
netlist        : netlist_title? lang_any? ( netlist_entity | (NL* | EOF) )+ EOF;
netlist_title  : ID+ (NL* | EOF);
netlist_entity :
               
               
               | parameter_list //TODO
               | analogmodel
               | if_statement
               | component
               ;


//keyword eldo ?

// ----------------------------------------------------------------------------
// .VERILOG
// ----------------------------------------------------------------------------
//verilog
//	: VERILOG verilog_option? filepath;
//verilog_option
//	: OPT_WORK ID;

// ----------------------------------------------------------------------------
// Parameters
// ----------------------------------------------------------------------------
// param
//	: (PARAM | PARAMS) parameter_list?;

// ----------------------------------------------------------------------------
// Plot
// ----------------------------------------------------------------------------
//plot
//    : PLOT plot_analysis? (display_option)+;
//plot_analysis
//	: DC | KEY_AC | KEY_TRAN | KEY_NOISE;

// ----------------------------------------------------------------------------
// FFILE
// ----------------------------------------------------------------------------
//ffile
//	: FFILE ffile_tabulation filepath ffile_unit? ffile_storage_format?;
//ffile_tabulation
//	: ID;
//ffile_unit
//	: ID;//FREQUENCY;
//ffile_storage_format
//	: ID;

// ----------------------------------------------------------------------------
// .PROBE
// Writes simulation results of specified signals to binary output files (.wdb).
// ----------------------------------------------------------------------------
//probe
//	: PROBE probe_analysis? (probe_probed_values)*;
//probe_analysis
//	: DC | AC | TRAN | NOISE;
//probe_probed_values
//	: ID
//	| ID OPEN_ROUND (node_pair | node) CLOSE_ROUND;

// ----------------------------------------------------------------------------
// Option
// ----------------------------------------------------------------------------
//option
//    : OPTION (ID | parameter_assign)+;

// ----------------------------------------------------------------------------
// Extract
// ----------------------------------------------------------------------------
//extract
//    : EXTRACT (expression | parameter_assign)+;

// ----------------------------------------------------------------------------
// Defwave
// ----------------------------------------------------------------------------
//defwave
//    : DEFWAVE (ID | parameter_assign)+;

// ----------------------------------------------------------------------------
// Checkpoint
// ----------------------------------------------------------------------------
//checkpoint
//    : CHECKPOINT;// TODO

// ----------------------------------------------------------------------------
// IF
// ----------------------------------------------------------------------------
//if
//    : IF;// TODO

// ----------------------------------------------------------------------------
// OP Operating Points
// ----------------------------------------------------------------------------
//op
//	: OP time_point+;

// ----------------------------------------------------------------------------
// Display option
// ----------------------------------------------------------------------------
//display_option
//	: ID OPEN_ROUND (node_pair | node) CLOSE_ROUND;


// ----------------------------------------------------------------------------
// User defined functions
// ----------------------------------------------------------------------------
user_function
    : REAL ID OPEN_ROUND (user_function_args)? CLOSE_ROUND NL* OPEN_CURLY  NL* (user_function_body)? NL* CLOSE_CURLY;

user_function_args
    : REAL ID
    | user_function_args COMMA user_function_args ;

user_function_body
    : RETURN expression SEMICOLON? ;

 */

keyword
    : ALTER
    | ALTERGROUP
    | OPTIONS
    | SET
    | SHELL
    | INFO
    | NODESET
    | IC
    | ASSERT
    | CHECK

    | LANGUAGE
    | PORTS
    | WAVE
    | PWL
    | SIN
    | SFFM
    | PULSE
    | COEFFS
    | INSENSITIVE
    | IF
    | ELSE
    | PARAMETERS
    | ANALOGMODEL
    | CHECKPOINT

    | SPECTRE
    | SPICE

    | STATISTICS
    | PROCESS
    | CORRELATE
    | TRUNCATE
    | MISMATCH
    | VARY

    | RELIABILITY
    ;

analysis_type
    : AC
    | ACMATCH
    | DC
    | DCMATCH
    | ENVLP
    | SP
    | STB
    | SWEEP
    | TDR
    | TRAN
    | XF
    | PAC
    | PDISTO
    | PNOISE
    | PSP
    | PSS
    | PXF
    | PZ
    | QPAC
    | QPNOISE
    | QPSP
    | QPSS
    | QPXF
    | SENS
    | MONTECARLO
    | NOISE
    | CHECKLIMIT;

component_type
    : A2D
    | B3SOIPD
    | BJT
    | BJT301
    | BJT500
    | BJT503
    | BJT504
    | BJT504T
    | BSIM1
    | BSIM2
    | BSIM3
    | BSIM3V3
    | BSIM4
    | BSIMSOI
    | BTASOI

    | CAPACITOR
    | CCCS
    | CCVS
    | CKTROM
    | CORE
    | D2A
    | DELAY
    | DIO500
    | DIODE
    | EKV
    | FOURIER
    | GAAS
    | HBT
    | HISIM
    | HVMOS
    | INDUCTOR
    | INTCAP
    | IPROBE
    | ISOURCE
    | JFET
    | JUNCAP
    | MISNAN
    | MOS0
    | MOS1
    | MOS1000
    | MOS1100
    | MOS11010
    | MOS11011
    | MOS15

    | MOS2
    | MOS3
    | MOS30
    | MOS3002
    | MOS3100
    | MOS40
    | MOS705
    | MOS902
    | MOS903
    | MSLINE
    | MTLINE
    | MUTUAL_INDUCTOR
    | NODCAP
    | NODE
    | NPORT
    | PARAMTEST
    | PCCCS
    | PCCVS
    | PHY_RES
    | PORT
    | PSITFT
    | PVCCS
    | PVCVS
    | QUANTITY
    | RDIFF
    | RELAY
    | RESISTOR
    | SCCCS
    | SCCVS
    | SVCCS
    | SVCVS
    | SWITCH
    | TLINE
    | TOM2
    | TOM3
    | TRANSFORMER
    | VBIC
    | VCCS
    | VCVS
    | VSOURCE
    | WINDING
    | ZCCCS
    | ZCCVS
    | ZVCCS
    | ZVCVS

    | BSOURCE
    ;