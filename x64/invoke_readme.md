# Things to keep in mind when using the INVOKE macro:

* When using locals inside a PROC, you must reserve a number of bytes that is a multiple of 16. This ensures that RSP remains 8 (mod 16) before each INVOKE,
  which is required by the macro (and the Windows x64 ABI) to align the stack correctly, because at any given CALL, the stack MUST be 16 byte aligned.

* The macro reserves the required 32-byte shadow space and any additional stack space for arguments beyond the fourth one. Additionally, it adjusts RSP to
  ensure 16-byte stack alignment at each call. You do not need to and should not manually allocate shadow space or align the stack when using this macro.
  However, an exception is within the entry PROC, assuming you do not use CRT startup. This is because Windows sets RSP to 0 (mod 16) before jumping to your
  entry point. Therefore, it is necessary to subtract 8 from RSP before you INVOKE anything. 
