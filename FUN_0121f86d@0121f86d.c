
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0121f89f) */
/* WARNING: Removing unreachable block (ram,0x0121f8bc) */
/* WARNING: Removing unreachable block (ram,0x0121f8bf) */

void FUN_0121f86d(void)

{
  undefined8 in_RCX;
  
  syscall();
  FUN_0121f85c(&DAT_02200000,0x1c0a6cc,0x1e,in_RCX,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

