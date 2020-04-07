@echo off
cd %github_folder%
:Start
set /p message=Ä¿¹ÔÇÒ ³»¿ë : 
IF "%message%"=="" GOTO Default
git pull
git commit -m "%message%" -a
git push

GOTO Exit

:Default
set msg=Changed!
git pull
git commit -m "%msg%" -a
git push

GOTO Exit

:Exit
