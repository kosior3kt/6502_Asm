#ifndef __INSTRUCTION_CODES
#define __INSTRUCTION_CODES

#define Byte unsigned char

////////////////////////////////////// Load/Store
/// LDA instructions
const Byte INS_LDA_IM   = 0xA9;
const Byte INS_LDA_ZP   = 0xA5;
const Byte INS_LDA_ABS  = 0xAD;
const Byte INS_LDA_ZPX  = 0xB5;
const Byte INS_LDA_ABSY = 0xB9;
const Byte INS_LDA_ABSX = 0xBD;
const Byte INS_LDA_INDX = 0xA1;
const Byte INS_LDA_INDY = 0xB1;

/// LDX instructions
const Byte INS_LDX_IM   = 0xA2;
const Byte INS_LDX_ZP   = 0xA6;
const Byte INS_LDX_ZPY  = 0xB6;
const Byte INS_LDX_ABS  = 0xAE;
const Byte INS_LDX_ABSY = 0xBE;

/// LDY instructions
const Byte INS_LDY_IM   = 0xA0;
const Byte INS_LDY_ZP   = 0xA4;
const Byte INS_LDY_ZPX  = 0xB4;
const Byte INS_LDY_ABS  = 0xAC;
const Byte INS_LDY_ABSX = 0xBC;

/// STA instructions
const Byte INS_STA_ZP   = 0x85;
const Byte INS_STA_ZPX  = 0x95;
const Byte INS_STA_ABS  = 0x8D;
const Byte INS_STA_ABSX = 0x9D;
const Byte INS_STA_ABSY = 0x99;
const Byte INS_STA_INDX = 0x81;
const Byte INS_STA_INDY = 0x91;

/// STX
const Byte INS_STX_ZP   = 0x86;
const Byte INS_STX_ZPY  = 0x96;
const Byte INS_STX_ABS  = 0x8E;

/// STY
const Byte INS_STY_ZP   = 0x84;
const Byte INS_STY_ZPX  = 0x94;
const Byte INS_STY_ABS  = 0x8C;

////////////////////////////////////// Increment/Decrement
/// INC instructions
const Byte INS_INC_ZP   = 0xE6;
const Byte INS_INC_ZPX  = 0xF6;
const Byte INS_INC_ABS  = 0xEE;
const Byte INS_INC_ABSX = 0xFE;

/// INX and INY
const Byte INS_INX      = 0xE8;
const Byte INS_INY      = 0xC8;

/// DEC incstructions
const Byte INS_DEC_ZP   = 0xC6;
const Byte INS_DEC_ZPX  = 0xD6;
const Byte INS_DEC_ABS  = 0xCE;
const Byte INS_DEC_ABSX = 0xDE;

/// DEX and DEY
const Byte INS_DEX = 0xCA;
const Byte INS_DEY = 0x88;

////////////////////////////////////// Jumps/Calls
const Byte INS_JSR     = 0x20;
const Byte INS_RTS     = 0x40;
const Byte INS_JMP_ABS = 0x4C;
const Byte INS_JMP_IND = 0x6C;

////////////////////////////////////// Stack Operations
const Byte INS_TSX = 0xBA;
const Byte INS_TXS = 0x9A;
const Byte INS_PHA = 0x08;
const Byte INS_PHP = 0x48;
const Byte INS_PLA = 0x68;
const Byte INS_PLP = 0x28;

////////////////////////////////////// Register Transfers
const Byte INS_TAX = 0xAA;
const Byte INS_TAY = 0xA8;
const Byte INS_TXA = 0x8A;
const Byte INS_TYA = 0x98;

////////////////////////////////////// Logical
/// AND
const Byte INS_AND_IM   = 0x29;
const Byte INS_AND_ZP   = 0x25;
const Byte INS_AND_ZPX  = 0x35;
const Byte INS_AND_ABS  = 0x2D;
const Byte INS_AND_ABSX = 0x3D;
const Byte INS_AND_ABSY = 0x39;
const Byte INS_AND_INDX = 0x21;
const Byte INS_AND_INDY = 0x31;

/// EOR
const Byte INS_EOR_IM   = 0x49;
const Byte INS_EOR_ZP   = 0x45;
const Byte INS_EOR_ZPX  = 0x55;
const Byte INS_EOR_ABS  = 0x4D;
const Byte INS_EOR_ABSX = 0x5D;
const Byte INS_EOR_ABSY = 0x59;
const Byte INS_EOR_INDX = 0x41;
const Byte INS_EOR_INDY = 0x51;

///ORA 
const Byte INS_ORA_IM   = 0x09;
const Byte INS_ORA_ZP   = 0x05;
const Byte INS_ORA_ZPX  = 0x15;
const Byte INS_ORA_ABS  = 0x0D;
const Byte INS_ORA_ABSX = 0x1D;
const Byte INS_ORA_ABSY = 0x19;
const Byte INS_ORA_INDX = 0x01;
const Byte INS_ORA_INDY = 0x11;

/// BIT
const Byte INS_BIT_ZP  = 0x24;
const Byte INS_BIT_ABS = 0x2C;


////////////////////////////////////// Branches
const Byte INS_BCC  = 0x90;
const Byte INS_BCS  = 0xB0;
const Byte INS_BEQ  = 0xF0;
const Byte INS_BMI  = 0x30;
const Byte INS_BNE  = 0xD0;
const Byte INS_BPL  = 0x10;
const Byte INS_BVC  = 0x50;
const Byte INS_BVS  = 0x70;

////////////////////////////////////// Shifts
///ASL
const Byte INS_ASL_ACC   = 0x0A;
const Byte INS_ASL_ZP    = 0x06;
const Byte INS_ASL_ZPX   = 0x16;
const Byte INS_ASL_ABS   = 0x0E;
const Byte INS_ASL_ABSX  = 0x1E;

///LSR
const Byte INS_LSR_ACC   = 0x4A;
const Byte INS_LSR_ZP    = 0x46;
const Byte INS_LSR_ZPX   = 0x56;
const Byte INS_LSR_ABS   = 0x4E;
const Byte INS_LSR_ABSX  = 0x5E;

///ROL
const Byte INS_ROL_ACC   = 0x2A;
const Byte INS_ROL_ZP    = 0x26;
const Byte INS_ROL_ZPX   = 0x36;
const Byte INS_ROL_ABS   = 0x2E;
const Byte INS_ROL_ABSX  = 0x3E;

///ROR
const Byte INS_ROR_ACC   = 0x6A;
const Byte INS_ROR_ZP    = 0x66;
const Byte INS_ROR_ZPX   = 0x76;
const Byte INS_ROR_ABS   = 0x6E;
const Byte INS_ROR_ABSX  = 0x7E;

////////////////////////////////////// Arithmetic
///ADC
const Byte INS_ADC_IM    = 0x69;
const Byte INS_ADC_ZP    = 0x65;
const Byte INS_ADC_ZPX   = 0x75;
const Byte INS_ADC_ABS   = 0x6D;
const Byte INS_ADC_ABSX  = 0x7D;
const Byte INS_ADC_ABSY  = 0x79;
const Byte INS_ADC_INDX  = 0x61;
const Byte INS_ADC_INDY  = 0x71;

/// SBC
const Byte INS_SBC_IM    = 0xE9;
const Byte INS_SBC_ZP    = 0xE5;
const Byte INS_SBC_ZPX   = 0xF5;
const Byte INS_SBC_ABS   = 0xED;
const Byte INS_SBC_ABSX  = 0xFD;
const Byte INS_SBC_ABSY  = 0xF9;
const Byte INS_SBC_INDX  = 0xE1;
const Byte INS_SBC_INDY  = 0xF1;

/// CMP
const Byte INS_CMP_IM    = 0xC9;
const Byte INS_CMP_ZP    = 0xC5;
const Byte INS_CMP_ZPX   = 0xD5;
const Byte INS_CMP_ABS   = 0xCD;
const Byte INS_CMP_ABSX  = 0xDD;
const Byte INS_CMP_ABSY  = 0xD9;
const Byte INS_CMP_INDX  = 0xC1;
const Byte INS_CMP_INDY  = 0xD1;

///CPX
const Byte INS_CPX_IM    = 0xE0;
const Byte INS_CPX_ZP    = 0xE4;
const Byte INS_CPX_ABS   = 0xEC;

///CPY
const Byte INS_CPY_IM    = 0xC0;
const Byte INS_CPY_ZP    = 0xC4;
const Byte INS_CPY_ABS   = 0xCC;

////////////////////////////////////// Status Flag Changes
const Byte INS_CLC       = 0x18;
const Byte INS_CLD       = 0xD8;
const Byte INS_CLI       = 0x58;
const Byte INS_CLV       = 0xB8;
const Byte INS_SEC       = 0x38;
const Byte INS_SED       = 0xF8;
const Byte INS_SEI       = 0x78;

////////////////////////////////////// System Functions
const Byte INS_BRK       = 0x00;   
const Byte INS_NOP       = 0xEA;
const Byte INS_RTI       = 0x60;

////////////////////////////////////// SANITY RESCUER
const Byte INS_NOTHING   = 0xFF;

#undef Byte







#endif //__INSTRUCTION_CODES
