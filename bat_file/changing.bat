@echo off
cd %github_folder%
:Start
set /p message=Ä¿¹ÔÇÒ ³»¿ë : 
IF "%message%"=="" GOTO Default
set message=%date% %message%
git pull
git commit -m "%message%" -a
git push

GOTO Exit

:Default
set msg=Changed!
set msg=%date% %msg%
git pull
git commit -m "%msg%" -a
git push

GOTO Exit

:Exit
