
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0121f8fc) overlaps instruction at (ram,0x0121f8f9)
    */

void FUN_0121f8d8(undefined *param_1)

{
  undefined uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  unkbyte10 Var5;
  long in_stack_00000000;
  
  bVar4 = *(uint *)(in_stack_00000000 + -9) < 200;
  Var5 = FUN_0121f86d();
  pbVar3 = (byte *)Var5;
  if (bVar4) {
    *pbVar3 = *pbVar3 | (byte)Var5;
  }
  *pbVar3 = *pbVar3 + (byte)Var5;
  uVar1 = in((short)((unkuint10)Var5 >> 0x40));
  *param_1 = uVar1;
  uVar2 = (int)Var5 + 0x80000;
  *(char *)(ulong)uVar2 = *(char *)(ulong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

