; --- INCLUDES ---
INCLUDE invoke.inc 
INCLUDE windows.inc

; --- DATA ---
.DATA
    msg DB "Hello, World!", 0
    cap DB "MASM64", 0
	
; --- CODE ---
.CODE
main PROC
	  SUB RSP, 8 ; simulate normal caller state
    INVOKE MessageBoxA, 0, OFFSET msg, OFFSET cap, MB_OK
    INVOKE ExitProcess, 0
main ENDP

END
