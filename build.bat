@echo off
ml /c /coff hello.asm
link hello.obj /subsystem:windows
