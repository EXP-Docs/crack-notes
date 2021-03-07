;
;  Hacker Disassembler Engine
;  Copyright (c) 2006-2007 Veacheslav Patkov
;  aLL rights reserved.
;
;  hde.inc : assembler header file (masm/tasm syntax)
;

hde_disasm         proto stdcall :dword, :dword

HDE_STRUCT struct
      len          db ?    ; length of command
      p_rep        db ?    ; rep & rep(n)z prefix: 0xF2 or 0xF3
      p_lock       db ?    ; lock prefix 0xF0
      p_seg        db ?    ; segment prefix: 0x2E, 0x36, 0x3E, 0x26, 0x64, 0x65
      p_66         db ?    ; prefix 0x66
      p_67         db ?    ; prefix 0x67
      opcode       db ?    ; opcode
      opcode2      db ?    ; second opcode (if first opcode equal 0x0F)
      modrm        db ?    ; ModR/M byte
      modrm_mod    db ?    ;  - mod byte of ModR/M
      modrm_reg    db ?    ;  - reg byte of ModR/M
      modrm_rm     db ?    ;  - r/m byte of ModR/M
      sib          db ?    ; SIB byte
      sib_scale    db ?    ;  - scale byte of SIB
      sib_index    db ?    ;  - index byte of SIB
      sib_base     db ?    ;  - base byte of SIB
      imm8         db ?    ; immediate imm8
      imm16        dw ?    ; immediate imm16
      imm32        dd ?    ; immediate imm32
      disp8        db ?    ; displacement disp8
      disp16       dw ?    ; displacement disp16 (if prefix 0x67 exist)
      disp32       dd ?    ; displacement disp32
      rel8         db ?    ; relative address rel8
      rel16        dw ?    ; relative address rel16 (if prefix 0x66 exist)
      rel32        dd ?    ; relative address rel32
HDE_STRUCT ends
