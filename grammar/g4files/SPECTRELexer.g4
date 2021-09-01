// ----------------------------------------------------------------------------
// Author : Enrico Fraccaroli
// Date   : 04/02/2018
// Reference: references/Spectre_tutorial.pdf
// ----------------------------------------------------------------------------
lexer grammar SPECTRELexer;

channels { COMMENTS }

fragment BOL : {getCharPositionInLine() == 0}? [ \t]*;

// ----------------------------------------------------------------------------
// COMMENT
// ----------------------------------------------------------------------------
COMMENT : ( STAR | SLASH SLASH) .*? NL -> channel(COMMENTS);

// ----------------------------------------------------------------------------
// BEGIN OF LINE KEYWORDS
// ----------------------------------------------------------------------------
GLOBAL            : BOL[gG][lL][oO][bB][aA][lL]; // Global Nodes
INCLUDE           : BOL[iI][nN][cC][lL][uU][dD][eE]; // Include File
CPP_INCLUDE       : BOL[#] INCLUDE; // Include CPP File
AHDL_INCLUDE      : BOL[aA][hH][dD][lL]'_'[iI][nN][cC][lL][uU][dD][eE]; // Verilog-A Usage and Language Summary (veriloga)
LIBRARY           : BOL[lL][iI][bB][rR][aA][rR][yY]; // Library
LIBRARY_END       : BOL[eE][nN][dD][lL][iI][bB][rR][aA][rR][yY]; // End library
SECTION           : BOL[sS][eE][cC][tT][iI][oO][nN]; // Section
SECTION_END       : BOL[eE][nN][dD][sS][eE][cC][tT][iI][oO][nN]; // End section
SUBCKT            : BOL[sS][uU][bB][cC][kK][tT]; // Subckt begin
INLINE_SUBCKT     : BOL[iI][nN][lL][iI][nN][eE]' '[sS][uU][bB][cC][kK][tT]; // Inline Subckt begin
SUBCKT_END        : BOL[eE][nN][dD][sS]; // Subckt end
SIMULATOR         : BOL[sS][iI][mM][uU][lL][aA][tT][oO][rR]; // Simulator language
GLOBAL_PARAMETERS : BOL[pP][aA][rR][aA][mM][eE][tT][eE][rR][sS]; // Netlist Parameters
MODEL	            : BOL[mM][oO][dD][eE][lL];
EXPORT            : BOL[eE][xX][pP][oO][rR][tT];
SAVE              : BOL[sS][aA][vV][eE]; // Output Selections

// ----------------------------------------------------------------------------
// CONTROL COMMANDS
// ----------------------------------------------------------------------------
ALTER      : [aA][lL][tT][eE][rR]; // Alter a Circuit, Component, or Netlist Parameter
ALTERGROUP : [aA][lL][tT][eE][rR][gG][rR][oO][uU][pP]; // Alter Group
OPTIONS    : [oO][pP][tT][iI][oO][nN][sS]; // Immediate Set Options
SET        : [sS][eE][tT]; // Deferred Set Options
SHELL      : [sS][hH][eE][lL][lL]; // Shell Command
INFO       : [iI][nN][fF][oO]; // Circuit Information
NODESET    : [nN][oO][dD][eE][sS][eE][tT]; // Node Sets
IC         : [iI][cC];
ASSERT     : [aA][sS][sS][eE][rR][tT];
CHECK      : [cC][hH][eE][cC][kK];

// ----------------------------------------------------------------------------
// KEYWORDS
// ----------------------------------------------------------------------------
LANGUAGE    : [lL][aA][nN][gG]; // Language
PORTS       : [pP][oO][rR][tT][sS];
WAVE        : [wW][aA][vV][eE];
PWL         : [pP][wW][lL];
SIN         : [sS][iI][nN];
SFFM        : [sS][fF][fF][mM];
PULSE       : [pP][uU][lL][sS][eE];
COEFFS      : [cC][oO][eE][fF][fF][sS];
INSENSITIVE : [iI][nN][sS][eE][nN][sS][iI][tT][iI][vV][eE];
IF          : [iI][fF]; // The Structural if-statement
ELSE        : [eE][lL][sS][eE]; // The Structural if-statement
PARAMETERS  : [pP][aA][rR][aA][mM][eE][tT][eE][rR][sS]; // Netlist Parameters
ANALOGMODEL : [aA][nN][aA][lL][oO][gG][mM][oO][dD][eE][lL]; // Using analogmodel for Model Passing
CHECKPOINT  : [cC][hH][eE][cC][kK][pP][oO][iI][nN][tT]; // Checkpoint - Restart
//PARAM       : [pP][aA][rR][aA][mM];
//PARAMS      : [pP][aA][rR][aA][mM][sS];
//OPTION      : [oO][pP][tT][iI][oO][nN];
//EXTRACT     : [eE][xX][tT][rR][aA][cC][tT];
//DEFWAVE     : [dD][eE][fF][wW][aA][vV][eE];
//LIB         : [lL][iI][bB];
//END         : [eE][nN][dD];
//FFILE       : [fF][fF][iI][lL][eE];
//PLOT        : [pP][lL][oO][tT];
//OP   	      : [oO][pP];
//PROBE	      : [pP][rR][oO][bB][eE];
//VERILOG	    : [vV][eE][rR][iI][lL][oO][gG];
//REAL        : [rR][eE][aA][lL]  ;
//RETURN      : [rR][eE][tT][uU][rR][nN]; // Spectre Netlist Keywords

// ----------------------------------------------------------------------------
// LANGUAGES
// ----------------------------------------------------------------------------
SPECTRE : [sS][pP][eE][cC][tT][rR][eE];
SPICE   : [sS][pP][iI][cC][eE];

// ----------------------------------------------------------------------------
// STATISTICS BLOCKS
// ----------------------------------------------------------------------------
STATISTICS   : [sS][tT][aA][tT][iI][sS][tT][iI][cC][sS]; // Statistics block label
PROCESS      : [pP][rR][oO][cC][eE][sS][sS];
CORRELATE    : [cC][oO][rR][rR][eE][lL][aA][tT][eE];
TRUNCATE     : [tT][rR][uU][nN][cC][aA][tT][eE];
MISMATCH     : [mM][iI][sS][mM][aA][tT][cC][hH];
VARY         : [vV][aA][rR][yY];

// ----------------------------------------------------------------------------
// RELIABILITY BLOCKS
// ----------------------------------------------------------------------------
RELIABILITY  : [rR][eE][lL][iI][aA][bB][iI][lL][iI][tT][yY];

// ----------------------------------------------------------------------------
// ANALYSIS STATEMENTS
// ----------------------------------------------------------------------------
AC           : [aA][cC]; // AC Analysis
ACMATCH      : [aA][cC][mM][aA][tT][cC][hH]; // AC Device Matching Analysis
DC           : [dD][cC]; // DC Analysis
DCMATCH      : [dD][cC][mM][aA][tT][cC][hH]; // DC Device Matching Analysis
ENVLP        : [eE][nN][vV][lL][pP]; // Envelope Following Analysis
SP           : [sS][pP]; // S-Parameter Analysis
STB          : [sS][tT][bB]; // Stability Analysis
SWEEP        : [sS][wW][eE][eE][pP]; // Sweep Analysis
TDR          : [tT][dD][rR]; // Time-Domain Reflectometer Analysis
TRAN         : [tT][rR][aA][nN]; // Transient Analysis
XF           : [xX][fF]; // Transfer Function Analysis
PAC          : [pP][aA][cC]; // Periodic AC Analysis
PDISTO       : [pP][dD][iI][sS][tT][oO]; // Periodic Distortion Analysis
PNOISE       : [pP][nN][oO][iI][sS][eE]; // Periodic Noise Analysis
PSP          : [pP][sS][pP]; // Periodic S-Parameter Analysis
PSS          : [pP][sS][sS]; // Periodic Steady-State Analysis
PXF          : [pP][xX][fF]; // Periodic Transfer Function Analysis
PZ           : [pP][zZ]; // PZ Analysis
QPAC         : [qQ][pP][aA][cC]; // Quasi-Periodic AC Analysis
QPNOISE      : [qQ][pP][nN][oO][iI][sS][eE]; // Quasi-Periodic Noise Analysis
QPSP         : [qQ][pP][sS][pP]; // Quasi-Periodic S-Parameter Analysis
QPSS         : [qQ][pP][sS][sS]; // Quasi-Periodic Steady State Analysis
QPXF         : [qQ][pP][xX][fF]; // Quasi-Periodic Transfer Function Analysis
SENS         : [sS][eE][nN][sS]; // Sensitivity Analyses 
MONTECARLO   : [mM][oO][nN][tT][eE][cC][aA][rR][lL][oO]; // Monte Carlo Analysis
NOISE        : [nN][oO][iI][sS][eE]; // Noise Analysis
CHECKLIMIT   : [cC][hH][eE][cC][kK][lL][iI][mM][iI][tT]; // Checklimit Analysis

// ----------------------------------------------------------------------------
// Component Statements Part I
// ----------------------------------------------------------------------------
A2D     : [aA]'2'[dD];                  // Analog-to-Logic Converter
B3SOIPD : [bB]'3'[sS][oO][iI][pP][dD];  // B3SOI-PD Transistor
BJT     : [bB][jJ][tT];                 // Bipolar Junction Transistor
BJT301  : [bB][jJ][tT]'301';            // Lateral PNP Transistor
BJT500  : [bB][jJ][tT]'500';            // Lateral PNP Transistor
BJT503  : [bB][jJ][tT]'503';            // Vertical NPN/PNP Transistor
BJT504  : [bB][jJ][tT]'504';            // Vertical NPN/PNP Transistor
BJT504T : [bB][jJ][tT]'504'[tT];        // Vertical NPN/PNP Transistor
BSIM1   : [bB][sS][iI][mM]'1';          // BSIM1 Field Effect Transistor
BSIM2   : [bB][sS][iI][mM]'2';          // BSIM2 Field Effect Transistor
BSIM3   : [bB][sS][iI][mM]'3';          // BSIM3 MOS Transistor
BSIM3V3 : [bB][sS][iI][mM]'3'[vV]'3';   // BSIM3v3 MOS Transistor
BSIM4   : [bB][sS][iI][mM]'4';          // BSIM4 MOS Transistor
BSIMSOI : [bB][sS][iI][mM][sS][oO][iI]; // BSIMSOI-PD/FD Transistor
BTASOI  : [bB][tT][aA][sS][oO][iI];     // BTA SOI Transistor

// ----------------------------------------------------------------------------
// Component Statements Part II
// ----------------------------------------------------------------------------
CAPACITOR: [cC][aA][pP][aA][cC][iI][tT][oO][rR]; // Two Terminal Capacitor (capacitor)
CCCS     : [cC][cC][cC][sS];                     // Linear Current Controlled Current Source (cccs)
CCVS     : [cC][cC][vV][sS];                     // Linear Current Controlled Voltage Source (ccvs)
CKTROM   : [cC][kK][tT][rR][oO][mM];             // Circuit Reduced Order Model (cktrom)
CORE     : [cC][oO][rR][eE];                     // Magnetic Core with Hysteresis (core)
D2A      : [dD][2][aA];                          // Logic-to-Analog Converter (d2a)
DELAY    : [dD][eE][lL][aA][yY];                 // Delay Line (delay)
DIO500   : [dD][iI][oO]'500';                    // Diode Level 500 (dio500)
DIODE    : [dD][iI][oO][dD][eE];                 // Junction Diode (diode)
EKV      : [eE][kK][vV];                         // EKV MOSFET Transistor (ekv)
FOURIER  : [fF][oO][uU][rR][iI][eE][rR];         // Ratiometric Fourier Analyzer (fourier)
GAAS     : [gG][aA][aA][sS];                     // GaAs MESFET (gaas)
HBT      : [hH][bB][tT];                         // Hetero-Junction Bipolar Transistor (hbt)
HISIM    : [hH][iI][sS][iI][mM];                 // HiSIM1 Field Effect Transistor (hisim)
HVMOS    : [hH][vV][mM][oO][sS];                 // HV MOS Transistor (hvmos)
INDUCTOR : [iI][nN][dD][uU][cC][tT][oO][rR];     // Two Terminal Inductor (inductor)
INTCAP   : [iI][nN][tT][cC][aA][pP];             // Interconnect Capacitance (intcap)
IPROBE   : [iI][pP][rR][oO][bB][eE];             // Current Probe (iprobe)
ISOURCE  : [iI][sS][oO][uU][rR][cC][eE];         // Independent Current Source (isource)
JFET     : [jJ][fF][eE][tT];                     // Junction Field Effect Transistor (jfet)
JUNCAP   : [jJ][uU][nN][cC][aA][pP];             // Junction Capacitor (juncap)
MISNAN   : [mM][iI][sS][nN][aA][nN];             // MISN Field Effect Transistor (misnan)
MOS0     : [mM][oO][sS]'0';                      // MOS Level-0 Transistor (mos0)
MOS1     : [mM][oO][sS]'1';                      // MOS Level-1 Transistor (mos1)
MOS1000  : [mM][oO][sS]'1000';                   // Compact MOS-Transistor Distortion Model (mos1000)
MOS1100  : [mM][oO][sS]'1100';                   // Compact MOS-Transistor Distortion Model (mos1100)
MOS11010 : [mM][oO][sS]'11010';                  // Compact MOS-Transistor Distortion Model (mos11010)
MOS11011 : [mM][oO][sS]'11011';                  // Compact MOS-Transistor Distortion Model (mos11011)
MOS15    : [mM][oO][sS]'15';                     // MOS Level-15 Transistor (mos15)

// ----------------------------------------------------------------------------
// Component Statements Part III
// ----------------------------------------------------------------------------
MOS2            : [mM][oO][sS]'2';                                             // MOS Level-2 Transistor (mos2)
MOS3            : [mM][oO][sS]'3';                                             // MOS Level-3 Transistor (mos3)
MOS30           : [mM][oO][sS]'30';                                            // Long Channel JFET/MOSFET Model (mos30)
MOS3002         : [mM][oO][sS]'3002';                                          // Long Channel JFET/MOSFET Model (mos3002)
MOS3100         : [mM][oO][sS]'3100';                                          // Long Channel JFET/MOSFET Model (mos3100)
MOS40           : [mM][oO][sS]'40';                                            // Silicon On Isolator JFET Model (mos40)
MOS705          : [mM][oO][sS]'705';                                           // Compact MOS-Transistor Model (mos705)
MOS902          : [mM][oO][sS]'902';                                           // Compact MOS-Transistor Model (mos902)
MOS903          : [mM][oO][sS]'903';                                           // Compact MOS-Transistor Model (mos903)
MSLINE          : [mM][sS][lL][iI][nN][eE];                                    // Microstrip Line (msline)
MTLINE          : [mM][tT][lL][iI][nN][eE];                                    // Multi-Conductor Transmission Line (mtline)
MUTUAL_INDUCTOR : [mM][uU][tT][uU][aA][lL]'_'[iI][nN][dD][uU][cC][tT][oO][rR]; // Mutual Inductor (mutual_inductor)
NODCAP          : [nN][oO][dD][cC][aA][pP];                                    // Node Capacitance (nodcap)
NODE            : [nN][oO][dD][eE];                                            // Set Node Quantities (node)
NPORT           : [nN][pP][oO][rR][tT];                                        // Linear N Port (nport)
PARAMTEST       : [pP][aA][rR][aA][mM][tT][eE][sS][tT];                        // Parameter Value Tester (paramtest)
PCCCS           : [pP][cC][cC][cC][sS];                                        // Polynomial Current Controlled Current Source (pcccs)
PCCVS           : [pP][cC][cC][vV][sS];                                        // Polynomial Current Controlled Voltage Source (pccvs)
PHY_RES         : [pP][hH][yY]'_'[rR][eE][sS];                                 // Physical Resistor (phy_res)
PORT            : [pP][oO][rR][tT];                                            // Independent Resistive Source (port)
PSITFT          : [pP][sS][iI][tT][fF][tT];                                    // Poly-Si TFT (psitft)
PVCCS           : [pP][vV][cC][cC][sS];                                        // Polynomial Voltage Controlled Current Source (pvccs)
PVCVS           : [pP][vV][cC][vV][sS];                                        // Polynomial Voltage Controlled Voltage Source (pvcvs)
QUANTITY        : [qQ][uU][aA][nN][tT][iI][tT][yY];                            // Quantity Information (quantity)
RDIFF           : [rR][dD][iI][fF][fF];                                        // Diffusion Resistor Model (rdiff)
RELAY           : [rR][eE][lL][aA][yY];                                        // Four Terminal Relay (relay)
RESISTOR        : [rR][eE][sS][iI][sS][tT][oO][rR];                            // Two Terminal Resistor (resistor)
SCCCS           : [sS][cC][cC][cC][sS];                                        // s-Domain Linear Current Controlled Current Source (scccs)
SCCVS           : [sS][cC][cC][vV][sS];                                        // s-Domain Current Controlled Voltage Source (sccvs)
SVCCS           : [sS][vV][cC][cC][sS];                                        // s-Domain Linear Voltage Controlled Current Source (svccs)
SVCVS           : [sS][vV][cC][vV][sS];                                        // s-Domain Voltage Controlled Voltage Source (svcvs)
SWITCH          : [sS][w][iI][tT][cC][hH];                                     // Ideal Switch (switch)
TLINE           : [tT][lL][iI][nN][eE];                                        // Transmission Line (tline)
TOM2            : [tT][oO][mM][2];                                             // GaAs MESFET (tom2)
TOM3            : [tT][oO][mM][3];                                             // GaAs MESFET (tom3)
TRANSFORMER     : [tT][rR][aA][nN][sS][fF][oO][rR][mM][eE][rR];                // Linear Two Winding Ideal Transformer (transformer)
VBIC            : [vV][bB][iI][cC];                                            // VBIC Bipolar Transistor (vbic)
VCCS            : [vV][cC][cC][sS];                                            // Linear Voltage Controlled Current Source (vccs)
VCVS            : [vV][cC][vV][sS];                                            // Linear Voltage Controlled Voltage Source (vcvs)
VSOURCE         : [vV][sS][oO][uU][rR][cC][eE];                                // Independent Voltage Source (vsource)
WINDING         : [w][iI][nN][dD][iI][nN][gG];                                 // Winding for Magnetic Core (winding)
ZCCCS           : [zZ][cC][cC][cC][sS];                                        // z-Domain Linear Current Controlled Current Source (zcccs)
ZCCVS           : [zZ][cC][cC][vV][sS];                                        // z-Domain Current Controlled Voltage Source (zccvs)
ZVCCS           : [zZ][vV][cC][cC][sS];                                        // z-Domain Linear Voltage Controlled Current Source (zvccs)
ZVCVS           : [zZ][vV][cC][vV][sS];                                        // z-Domain Voltage Controlled Voltage Source (zvcvs)

// ----------------------------------------------------------------------------
// Component Statements Others
// ----------------------------------------------------------------------------
BSOURCE     : [bB][sS][oO][uU][rR][cC][eE]; // Behavioural Source Use Model

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
fragment INT        : DIGIT+ [Ll]? LETTER?;
fragment FLOAT      : DIGIT+ '.' DIGIT* EXP? [Ll]? LETTER?
                    | DIGIT+ EXP? [Ll]? LETTER?
                    | '.' DIGIT+ EXP? [Ll]? LETTER?;
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
ID
    : ( LETTER
      | EXCLAMATION_MARK
      | AT_SIGN
      | POUND_SIGN
      | DIGIT
      | UNDERSCORE
      | DOLLAR
      | DOT)
      ( LETTER
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

STRING : '"' ( ESCAPE | ~[\\"] )*? '"' ;

// ----------------------------------------------------------------------------
// WHITESPACES and NEWLINES
// ----------------------------------------------------------------------------
NL  : '\r'?'\n';
WS  : [ \t]+ -> skip;
CNL : (BACKSLASH NL | (NL (WS)? PLUS)) -> skip;
