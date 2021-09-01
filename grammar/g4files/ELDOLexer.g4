// ----------------------------------------------------------------------------
// Author : Enrico Fraccaroli
// Date   : 04/02/2018
// Reference: references/eldo_ur.pdf
// ----------------------------------------------------------------------------
lexer grammar ELDOLexer;

channels { COMMENTS }

fragment BOL     : {getCharPositionInLine() == 0}? [ \t]*;
fragment DOT_BOL : BOL '.';

// ----------------------------------------------------------------------------
// COMMENT
// ----------------------------------------------------------------------------
//     * Comment
//     // Comment
//     Code // Comment
COMMENT
    : (SLASH SLASH  .*? NL+
      | NL? BOL STAR .*? NL+ (BOL PLUS)?
      ) -> skip;

// ----------------------------------------------------------------------------
// BEGIN OF LINE KEYWORDS
// ----------------------------------------------------------------------------
INCLUDE      : DOT_BOL[iI][nN][cC][lL][uU][dD][eE]; // Include A File In An Input Netlist - extended
DSPF_INCLUDE : DOT_BOL[dD][sS][pP][fF]'_'[iI][nN][cC][lL][uU][dD][eE]; // Load DSPF File
LIB          : DOT_BOL[lL][iI][bB]; // Insert Circuit Information From A Library File
LIB_END      : DOT_BOL[eE][nN][dD][lL]; // End Eldo Library Variant Description
SUBCKT       : DOT_BOL[sS][uU][bB][cC][kK][tT]; // Subcircuit Definition
SUBCKT_END   : DOT_BOL[eE][nN][dD][sS]; // End Eldo Subcircuit Description
NETLIST_END  : DOT_BOL[eE][nN][dD]; // End Eldo Netlist
GLOBAL       : DOT_BOL[gG][lL][oO][bB][aA][lL]; // Global Node Allocation
MODEL_DEF    : DOT_BOL[mM][oO][dD][eE][lL]; // Device Model Description
VERILOG      : DOT_BOL[vV][eE][rR][iI][lL][oO][gG]; // Compile and Load Verilog-A Modules
GLOBAL_PARAM : DOT_BOL[pP][aA][rR][aA][mM]; // Global Declarations

// ----------------------------------------------------------------------------
// CONTROL COMMANDS
// ----------------------------------------------------------------------------
ALTER                    : DOT_BOL[aA][lL][tT][eE][rR]; // Generalized Re-run Facility
SAVE                     : DOT_BOL[sS][aA][vV][eE]; // Save Simulation Run
OPTION                   : DOT_BOL[oO][pP][tT][iI][oO][nN]; // Simulator Configuration
OPT                      : DOT_BOL[oO][pP][tT]; // Simulator Configuration
NODESET                  : DOT_BOL[nN][oO][dD][eE][sS][eE][tT]; // Node Sets
CALL_TCL                 : DOT_BOL[cC][aA][lL][lL]'_'[tT][cC][lL]; // Call Tcl Function
//A2D                      : DOT_BOL[aA]'2'[dD]; // Analog-to-Digital Converter
//ADDLIB                   : DOT_BOL[aA][dD][dD][lL][iI][bB]; // Insert a Model or Subcircuit File
//AGELIB                   : DOT_BOL[aA][gG][eE]'_'[lL][iI][bB]; // Define Functions For Reliability
//AGEMODEL                 : DOT_BOL[aA][gG][eE][mM][oO][dD][eE][lL]; // Reliability Model Parameter Declaration
//BIND                     : DOT_BOL[bB][iI][nN][dD]; // Configure Spice Descriptions
//BINDSCOPE                : DOT_BOL[bB][iI][nN][dD][sS][cC][oO][pP][eE]; // Define Local Scope For .BIND
//CHECKBUS                 : DOT_BOL[cC][hH][eE][cC][kK][bB][uU][sS]; // Check Bus Values
CHRENT                   : DOT_BOL[cC][hH][rR][eE][nN][tT]; // Piece Wise Linear Source
//CHRSIM                   : DOT_BOL[cC][hH][rR][sS][iI][mM]; // Input From A Prior Simulation
//COMCHAR                  : DOT_BOL[cC][oO][mM][cC][hH][aA][rR]; // Change Comment Character
CONNECT                  : DOT_BOL[cC][oO][nN][nN][eE][cC][tT]; // Connect Two Nodes
//CONSO                    : DOT_BOL[cC][oO][nN][sS][oO]; // Current Used By A Circuit
//CORREL                   : DOT_BOL[cC][oO][rR][rR][eE][lL]; // Correlation Between Parameters
//D2A                      : DOT_BOL[dD]'2'[aA]; // Digital-to-Analog Converter
//DATA                     : DOT_BOL[dD][aA][tT][aA]; // Parameter Sweep
//DE                       : DOT_BOL[dD][eE]; // Set Default Conditions
DEFMAC                   : DOT_BOL[dD][eE][fF][mM][aA][cC]; // Macro Definitions
//DEFMOD                   : DOT_BOL[dD][eE][fF][mM][oO][dD]; // Model Name Mapping
//DEFPLOTDIG               : DOT_BOL[dD][eE][fF][pP][lL][oO][tT][dD][iI][gG]; // Plotting an Analog Signal as a Digital Bus
DEFWAVE                  : DOT_BOL[dD][eE][fF][wW][aA][vV][eE]; // Waveform Definition
//DEL                      : DOT_BOL[dD][eE][lL]; // Remove Library Name
//DISCARD                  : DOT_BOL[dD][iI][sS][cC][aA][rR][dD]; // Ignore Instances or Subckt Definitions
//DISFLAT                  : DOT_BOL[dD][iI][sS][fF][lL][aA][tT]; // Disable Flat netlist Mode
//DISTRIB                  : DOT_BOL[dD][iI][sS][tT][rR][iI][bB]; // User Defined Distributions (Monte Carlo)
//EQUIV                    : DOT_BOL[eE][qQ][uU][iI][vV]; // Replace Node Name For Display
//EXTMOD                   : DOT_BOL[eE][xX][tT][mM][oO][dD]; // Extract Mode
FFILE                    : DOT_BOL[fF][fF][iI][lL][eE]; // S, Y, Z Parameter Output File Specification
//FILTER                   : DOT_BOL[fF][iI][lL][tT][eE][rR]; // Filter Data Driven Simulations
//FORCE                    : DOT_BOL[fF][oO][rR][cC][eE]; // Initial Transient Analysis Conditions
//FUNC                     : DOT_BOL[fF][uU][nN][cC]; // User Defined Function
//GUESS                    : DOT_BOL[gG][uU][eE][sS][sS]; // Initial DC Analysis Conditions
//HDL                      : DOT_BOL[hH][dD][lL]; // Compile and Load Verilog-A Modules
//HIER                     : DOT_BOL[hH][iI][eE][rR]; // Changing the Hierarchy Separator
IC                       : DOT_BOL[iI][cC]; // Initial Transient Analysis Conditions
//IGNORE_DSPF_ON_NODE      : DOT_BOL[iI][gG][nN][oO][rR][eE]'_'[dD][sS][pP][fF]'_'[oO][nN]'_'[nN][oO][dD][eE]; // Ignore DSPF on Specified Node
//INC                      : DOT_BOL[iI][nN][cC]; // Include A File In An Input Netlist     
//INIT                     : DOT_BOL[iI][nN][iI][tT]; // Initial Digital Circuit Conditions
//IPROBE                   : DOT_BOL[iI][pP][rR][oO][bB][eE]; // Current Probe
//LOAD                     : DOT_BOL[lL][oO][aA][dD]; // Use Previously Simulated Results
//LOOP                     : DOT_BOL[lL][oO][oO][pP]; // Insert a Feedback Loop
//LOTGROUP                 : DOT_BOL[lL][oO][tT][gG][rR][oO][uU][pP]; // Share Distributions
//MALIAS                   : DOT_BOL[mM][aA][lL][iI][aA][sS]; // Model and Subcircuit Name Mapping
//MAP_DSPF_NODE_NAME       : DOT_BOL[mM][aA][pP]'_'[dD][sS][pP][fF]'_'[nN][oO][dD][eE]'_'[nN][aA][mM][eE]; // Map Eldo Node to DSPF Node
//MCMOD                    : DOT_BOL[mM][cC][mM][oO][dD]; // LOT & DEV Variation Specification on Model Parameters (Monte Carlo)
MEAS                     : DOT_BOL[mM][eE][aA][sS]; // Measure Waveform Characteristics
//MODDUP                   : DOT_BOL[mM][oO][dD][dD][uU][pP]; // Aspire/SimPilot Command
//MODLOGIC                 : DOT_BOL[mM][oO][dD][lL][oO][gG][iI][cC]; // Digital Model Definition
//MONITOR                  : DOT_BOL[mM][oO][nN][iI][tT][oO][rR]; // Monitor Simulation Steps
//MPRUN                    : DOT_BOL[mM][pP][rR][uU][nN]; // Multi-Processor Simulation
//MSEL                     : DOT_BOL[mM][sS][eE][lL]; // Automatic Model Selection
//MSELECT                  : DOT_BOL[mM][sS][eE][lL][eE][cC][tT]; // Automatic Model Selection
//NET                      : DOT_BOL[nN][eE][tT]; // Network Analysis
//NEWPAGE                  : DOT_BOL[nN][eE][wW][pP][aA][gG][eE]; // Control Page Layout
//NOCOM                    : DOT_BOL[nN][oO][cC][oO][mM]; // Suppress Comment Lines from Output File
//NOISE_CORREL             : DOT_BOL[nN][oO][iI][sS][eE]'_'[cC][oO][rR][rR][eE][lL]; // Noise Source Correlation
//NOTRC                    : DOT_BOL[nN][oO][tT][rR][cC]; // Suppress Netlist from an Output File
//NWBLOCK                  : DOT_BOL[nN][wW][bB][lL][oO][cC][kK]; // Partition Netlist into Newton Blocks
//OBJECTIVE                : DOT_BOL[oO][bB][jJ][eE][cC][tT][iI][vV][eE]; // Optimization Objectives
//OP_DISPLAY               : DOT_BOL[oO][pP]'_'[dD][iI][sS][pP][lL][aA][yY]; // DC Operating Point Display
//OPTPWL                   : DOT_BOL[oO][pP][tT][pP][wW][lL]; // Accuracy by Time Window
//OPTWIND                  : DOT_BOL[oO][pP][tT][wW][iI][nN][dD]; // Accuracy by Time Window
//PARAMS                   : DOT_BOL[pP][aA][rR][aA][mM][sS]; // Global Declarations
//PARAMDEX                 : DOT_BOL[pP][aA][rR][aA][mM][dD][eE][xX]; // Statistical Parameter Declarations
//PARAMOPT                 : DOT_BOL[pP][aA][rR][aA][mM][oO][pP][tT]; // Optimization Parameter Declarations
//PART                     : DOT_BOL[pP][aA][rR][tT]; // Circuit Partitioning
PLOT                     : DOT_BOL[pP][lL][oO][tT]; // Plotting Simulation Results
//PLOTBUS                  : DOT_BOL[pP][lL][oO][tT][bB][uU][sS]; // Plotting of Bus Signals
PRINT                    : DOT_BOL[pP][rR][iI][nN][tT]; // Printing of Results
//PRINTBUS                 : DOT_BOL[pP][rR][iI][nN][tT][bB][uU][sS]; // Printing of Bus Signals
//PRINTFILE                : DOT_BOL[pP][rR][iI][nN][tT][fF][iI][lL][eE]; // Print Tabular Output File
PROBE                    : DOT_BOL[pP][rR][oO][bB][eE]; // Output Shortform
//PROBEBUS                 : DOT_BOL[pP][rR][oO][bB][eE][bB][uU][sS]; // Printing of Bus Signals
//PROTECT                  : DOT_BOL[pP][rR][oO][tT][eE][cC][tT]; // Netlist Protection
//RESTART                  : DOT_BOL[rR][eE][sS][tT][aA][rR][tT]; // Restart Simulation
//SC                       : DOT_BOL[sS][cC]; // Automatic Scaling of Active Devices 
//SCALE                    : DOT_BOL[sS][cC][aA][lL][eE]; // Automatic Scaling of Active Devices
//SELECT_DSPF_ON_NODE      : DOT_BOL[sS][eE][lL][eE][cC][tT]'_'[dD][sS][pP][fF]'_'[oO][nN]'_'[nN][oO][dD][eE]; // Select DSPF on Specified Node
//SETBUS                   : DOT_BOL[sS][eE][tT][bB][uU][sS]; // Create Bus
//SETKEY                   : DOT_BOL[sS][eE][tT][kK][eE][yY]; // Set Reliability Model Key (Password)
//SETSOA                   : DOT_BOL[sS][eE][tT][sS][oO][aA]; // Set Safe Operating Area
//SIGBUS                   : DOT_BOL[sS][iI][gG][bB][uU][sS]; // Set Bus Signal
//SINUS                    : DOT_BOL[sS][iI][nN][uU][sS]; // Sinusoidal Voltage Source
//START_TIME               : DOT_BOL[sS][tT][aA][rR][tT]'_'[tT][iI][mM][eE]; // Simulation Start Time
//STEP                     : DOT_BOL[sS][tT][eE][pP]; // Paramter Sweep
//SUBDUP                   : DOT_BOL[sS][uU][bB][dD][uU][pP]; // Subcircuit Duplicate Parameters
//VALUE_TABLE              : DOT_BOL[tT][aA][bB][lL][eE]; // Value Tables
//TCL_WAVE                 : DOT_BOL[tT][cC][lL]'_'[wW][aA][vV][eE]; // Waveform Definition Using a Tcl Function
TEMP_SET                 : DOT_BOL[tT][eE][mM][pP]; // Set Circuit Temperature
//TITLE                    : DOT_BOL[tT][iI][tT][lL][eE]; // Set Title of Binary Output File
//TOPCELL                  : DOT_BOL[tT][oO][pP][cC][eE][lL][lL]; // Select the TOP Cell Subcircuit
//TSAVE                    : DOT_BOL[tT][sS][aA][vV][eE]; // Save Simulation Run at Multiple Time Points
//TVINCLUDE                : DOT_BOL[tT][vV][iI][nN][cC][lL][uU][dD][eE]; // Test Vector Files
//UNPROTECT                : DOT_BOL[uU][nN][pP][rR][oO][tT][eE][cC][tT]; // Netlist Protection
//USE                      : DOT_BOL[uU][sS][eE]; // Use Previously Simulated Results
//USEKEY                   : DOT_BOL[uU][sS][eE][kK][eE][yY]; // Use Reliability Model Key (Password)
USE_TCL                  : DOT_BOL[uU][sS][eE]'_'[tT][cC][lL]; // Use Tcl File
//USE_VERILOGA             : DOT_BOL[uU][sS][eE]'_'[vV][eE][rR][iI][lL][oO][gG][aA]; // Load Compiled Verilog-A Modules
//VEC                      : DOT_BOL[vV][eE][cC]; // Test Vector Files
//WIDTH                    : DOT_BOL[wW][iI][dD][tT][hH]; // Set Print Paper Width

// ----------------------------------------------------------------------------
// KEYWORDS
// ----------------------------------------------------------------------------
PARAM        : [pP][aA][rR][aA][mM];
TEMP         : [tT][eE][mM][pP];
KEY          : [kK][eE][yY];
NONOISE      : [nN][oO][nN][oO][iI][sS][eE];
TABLE        : [tT][aA][bB][lL][eE];
PWL          : [pP][wW][lL];
SIN          : [sS][iI][nN];
SFFM         : [sS][fF][fF][mM];
PULSE        : [pP][uU][lL][sS][eE];
INTERP       : [iI][nN][tT][eE][rR][pP];
MOD          : [mM][oO][dD];
MODEL        : [mM][oO][dD][eE][lL];
WHEN         : [wW][hH][eE][nN];
START        : [sS][tT][aA][rR][tT] ;
START_OF_RUN : [sS][tT][aA][rR][tT]UNDERSCORE[oO][fF]UNDERSCORE[rR][uU][nN];
END_OF_RUN   : [eE][nN][dD]UNDERSCORE[oO][fF]UNDERSCORE[rR][uU][nN];
END          : [eE][nN][dD];
FIND         : [fF][iI][nN][dD];
PP           : [pP][pP];
TRIG         : [tT][rR][iI][gG];
TARG         : [tT][aA][rR][gG];
//MACRO   : [mM][aA][cC][rR][oO];
//EL          : [eE][lL];
//DCFEED      : [dD][cC][fF][eE][eE][dD];
//AC          : [aA][cC];
//DC          : [dD][cC];
//TRAN        : [tT][rR][aA][nN];
//NOISE       : [nN][oO][iI][sS][eE];
//SUBCKT      : [sS][uU][bB][cC][kK][tT];
//VCR         : [vV][cC][rR];
//VCCAP       : [vV][cC][cC][aA][pP];
//END         : [eE][nN][dD];
//REPEAT      : [rR][eE][pP][eE][aA][tT];
//ALT         : [aA][lL][tT];
//SEQ         : [sS][eE][qQ];
//LDTL        : [lL][dD][tT][lL];
//PWL_ND      : [pP][wW][lL] OPEN_ROUND DIGIT+ CLOSE_ROUND;
//NPWL_ND     : [nN][pP][wW][lL] OPEN_ROUND DIGIT+ CLOSE_ROUND;
//PPWL_ND     : [pP][pP][wW][lL] OPEN_ROUND DIGIT+ CLOSE_ROUND;
//AND         : [aA][nN][dD];
//OR          : [oO][rR];
//NOR         : [nN][oO][rR];
//DELAY       : [dD][eE][lL][aA][yY];
//INTEGRATION : [iI][nN][tT][eE][gG][rR][aA][tT][iI][oO][nN];
//DERIVATION  : [dD][eE][rR][iI][vV][aA][tT][iI][oO][nN];
//FNS         : [fF][nN][sS];
//PZ          : [pP][zZ];
//FREQ        : [fF][rR][eE][qQ];
//TRANS       : [tT][rR][aA][nN][sS];
//OPAMP       : [oO][pP][aA][mM][pP];
//POLY        : [pP][oO][lL][yY];

// ----------------------------------------------------------------------------
// LIST STARTING KEYWORDS
// ----------------------------------------------------------------------------
PARAM_LIST_START    : [pP][aA][rR][aA][mM]':';
PIN_LIST_START      : [pP][iI][nN]':';
NET_LIST_START      : [nN][eE][tT]':';
PORT_LIST_START     : [pP][oO][rR][tT]':';
COUPLING_LIST_START : [cC][oO][uU][pP][lL][iI][nN][gG]':';
GENERIC_LIST_START  : [gG][eE][nN][eE][rR][iI][cC]':';

// ----------------------------------------------------------------------------
// ANALYSIS STATEMENTS
// ----------------------------------------------------------------------------
AC         : DOT_BOL[aA][cC]; // AC Analysis
AGE        : DOT_BOL[aA][gG][eE]; // Age Analysis
CHECKSOA   : DOT_BOL[cC][hH][eE][cC][kK][sS][oO][aA]; // Check Safe Operating Area Limits
DC         : DOT_BOL[dD][cC]; // DC Analysis
DCHIZ      : DOT_BOL[dD][cC][hH][iI][zZ]; // DC Analysis High Impedance Detection
DCMISMATCH : DOT_BOL[dD][cC][mM][iI][sS][mM][aA][tT][cC][hH]; // DC Mismatch Analysis
DEX        : DOT_BOL[dD][eE][xX]; // Design Of Experiments
DSP        : DOT_BOL[dD][sS][pP]; // (Digital Signal Processing) Computation
DSPMOD     : DOT_BOL[dD][sS][pP][mM][oO][dD]; // PSD (Power Spectral Density) Computation
FOUR       : DOT_BOL[fF][oO][uU][rR]; // FFT Select Waveform
LSTB       : DOT_BOL[lL][sS][tT][bB]; // Loop Stability Analysis
MC         : DOT_BOL[mM][cC]; // Monte Carlo Analysis
NOISE      : DOT_BOL[nN][oO][iI][sS][eE]; // Noise Analysis
NOISETRAN  : DOT_BOL[nN][oO][iI][sS][eE][tT][rR][aA][nN]; // Transient Noise Analysis
OP         : DOT_BOL[oO][pP]; // DC Operating Point Calculation
OPTFOUR    : DOT_BOL[oO][pP][tT][fF][oO][uU][rR]; // FFT Post-processor Options
OPTIMIZE   : DOT_BOL[oO][pP][tT][iI][mM][iI][zZ][eE]; // Optimization
OPTNOISE   : DOT_BOL[oO][pP][tT][nN][oO][iI][sS][eE]; // AC Noise Analysis
PZ         : DOT_BOL[pP][zZ]; // Pole-Zero Analysis 
RAMP       : DOT_BOL[rR][aA][mM][pP]; // Automatic Ramping 
SENS       : DOT_BOL[sS][eE][nN][sS]; // DC Sensitivity Analysis
SENSAC     : DOT_BOL[sS][eE][nN][sS][aA][cC]; // AC Sensitivity Analysis
SENSPARAM  : DOT_BOL[sS][eE][nN][sS][pP][aA][rR][aA][mM]; // Sensitivity Analysis
SNF        : DOT_BOL[sS][nN][fF]; // Spot Noise Figure
SOLVE      : DOT_BOL[sS][oO][lL][vV][eE]; // Sizing Facility
TF         : DOT_BOL[tT][fF]; // Transfer Function
TRAN       : DOT_BOL[tT][rR][aA][nN]; // Transient Analysis
WCASE      : DOT_BOL[wW][cC][aA][sS][eE]; // Worst Case Analysis
EXTRACT    : DOT_BOL[eE][xX][tT][rR][aA][cC][tT]; // Extract Waveform Characteristics

// ----------------------------------------------------------------------------
// COMPONENTS (devices, sources, macromodels-analog/digital/mixed/magnetic/switched capacitor)
// ----------------------------------------------------------------------------
RESISTOR                : BOL [rR] ID; // R**
CAPACITOR               : BOL [cC] ID; // C**
INDUCTOR                : BOL [lL] ID; // L**
COUPLED_INDUCTOR        : BOL [kK] ID; // K**
DIFFUSION_RESISTOR      : BOL [pP] ID; // P**
TRANSMISSION_LINE       : BOL [tT] ID; // T**
LOSSY_TRANSMISSION_LINE : BOL [yY] ID; // Y**
LTL_W_MODEL             : BOL [wW] ID; // W**
LTL_U_MODEL             : BOL [uU] ID; // U**
JUNCTION_DIODE          : BOL [dD] ID; // D**
BJT                     : BOL [qQ] ID; // Q**
JFET                    : BOL [jJ] ID; // J**
MOSFET                  : BOL [mM] ID; // M**
S_DOMAIN_FILTER         : BOL [fF][nN][sS] ID; // FNS**
Z_DOMAIN_FILTER         : BOL [fF][nN][zZ] ID; // FNZ**
SUBCK_INSTANCE          : BOL [xX] ID; // X**
IVSOURCE                : BOL [vV] ID; // V**
ICSOURCE                : BOL [iI] ID; // I**
VCVS                    : BOL [eE] ID; // E**
CCCS                    : BOL [fF] ID; // F**
VCCS                    : BOL [gG] ID; // G**
CCVS                    : BOL [hH] ID; // H**
OPA                     : BOL [oO][pP][aA] ID; // OPA**
SW                      : BOL [sS] ID; // S**
NOISE_FUNCTION          : BOL [nN][oO][iI][sS][eE] ID; // N**

// ----------------------------------------------------------------------------
// DIGITAL COMPONENTS
// ----------------------------------------------------------------------------
DIG_NAND                : BOL [nN][aA][nN][dD] ID; // NAND**
DIG_AND                 : BOL [aA][nN][dD] ID; // AND**
DIG_NOR                 : BOL [nN][oO][rR] ID; // NOR**
DIG_OR                  : BOL [oO][rR] ID; // OR**
DIG_XOR                 : BOL [xX][oO][rR] ID; // XOR**

// ----------------------------------------------------------------------------
// EXPRESSIONS
// ----------------------------------------------------------------------------
EQUAL               : '=';
EXCLAMATION_MARK    : '!';
LESS_THAN           : '<';
GREATER_THAN        : '>';
LESS_THAN_EQUAL     : LESS_THAN EQUAL;
GREATER_THAN_EQUAL  : GREATER_THAN EQUAL;
LOGIC_EQUAL         : EQUAL EQUAL;
LOGIC_NOT_EQUAL     : EXCLAMATION_MARK EQUAL;
LOGIC_AND           : AMPERSAND AMPERSAND;
LOGIC_OR            : PIPE PIPE;
LOGIC_BITWISE_AND   : AMPERSAND;
LOGIC_BITWISE_OR    : PIPE;
LOGIC_XOR           : CARET CARET;
BITWISE_SHIFT_LEFT  : LESS_THAN LESS_THAN;
BITWISE_SHIFT_RIGHT : GREATER_THAN GREATER_THAN;
POWER_OPERATOR      : STAR STAR;
AND                 : 'and';
OR                  : 'or';
COLON               : ':';
SEMICOLON           : ';';
PLUS                : '+';
MINUS               : '-';
STAR                : '*';
OPEN_ROUND          : '(';
CLOSE_ROUND         : ')';
OPEN_SQUARE         : '[';
CLOSE_SQUARE        : ']';
OPEN_CURLY          : '{';
CLOSE_CURLY         : '}';
QUESTION_MARK       : '?';
COMMA               : ',';
DOLLAR              : '$';
AMPERSAND           : '&';
DOT                 : '.';
UNDERSCORE          : '_';
AT_SIGN             : '@';
POUND_SIGN          : '#';
BACKSLASH           : '\\';
SLASH               : '/';
APEX                : '\'';
QUOTES              : '"';
PIPE                : '|';
PERCENT             : '%';
CARET               : '^';
TILDE               : '~';
ARROW               : MINUS GREATER_THAN;

// ----------------------------------------------------------------------------
// NUMERICAL VALUES
// ----------------------------------------------------------------------------
fragment DIGIT      : [0-9];
fragment HEXDIGIT   : '0x' ('0'..'9' | 'a'..'f' | 'A'..'F')+;
fragment OCTALDIGIT : '0' '0'..'7'+;
fragment EXP        : ('E' | 'e') ('+' | '-')? INT ;
fragment INT        : ('+' | '-')? DIGIT+ [Ll]? LETTER?;
fragment FLOAT      : ('+' | '-')? DIGIT+ '.' DIGIT* EXP? [Ll]? LETTER?
                    | ('+' | '-')? DIGIT+ EXP? [Ll]? LETTER?
                    | ('+' | '-')? '.' DIGIT+ EXP? [Ll]? LETTER?;
fragment HEX        : '0' ('x'|'X') HEXDIGIT+ [Ll]? ;
PERCENTAGE          : FLOAT '%'  ;
COMPLEX             : INT 'i' | FLOAT 'i' ;
NUMBER              : INT | FLOAT | HEX;

// ----------------------------------------------------------------------------
// STRINGS
// ----------------------------------------------------------------------------
fragment LETTER : [a-zA-Z];
fragment ESCAPE : '\\'
                ( [abtnfrv]
                | '"'
                | '\''
                | 'u' HEXDIGIT HEXDIGIT HEXDIGIT HEXDIGIT
                | 'u' '{' HEXDIGIT HEXDIGIT HEXDIGIT HEXDIGIT '}'
                | [0-3] [0-7] [0-7]
                | [0-7] [0-7]
                | [0-7]
                | HEXDIGIT HEXDIGIT );
ID      : ( LETTER
          | EXCLAMATION_MARK
          | AT_SIGN
          | POUND_SIGN
          | DIGIT
          | UNDERSCORE
          | DOLLAR
          | DOT)
          ( SLASH
          | LETTER
          | EXCLAMATION_MARK
          | AT_SIGN
          | POUND_SIGN
          | DIGIT
          | UNDERSCORE
          | COLON
          | DOT
          | LESS_THAN
          | GREATER_THAN
          | BACKSLASH LESS_THAN
          | BACKSLASH GREATER_THAN
          | DOLLAR
          | PERCENT
          | ARROW )*;

STRING : QUOTES ( ESCAPE | ~[\\"] )*? QUOTES
       | APEX   ( ESCAPE | ~[\\"] )*? APEX;

// ----------------------------------------------------------------------------
// WHITESPACES and NEWLINES
// ----------------------------------------------------------------------------
NL  : '\r'?'\n';
WS  : [ \t]+ -> skip;
CNL : (BACKSLASH NL | NL+ BOL PLUS) -> skip;
