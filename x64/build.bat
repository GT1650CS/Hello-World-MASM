@echo off
ml64 /c hello.asm
link hello.obj /subsystem:windows /entry:main
