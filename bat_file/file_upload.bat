@echo off
cd C:\Users\pih\Desktop\CNU-ImageLab
set /p filename=파일(ex- "6 April"/JeongJongHo.py) : 
git add %filename%
:Start
set /p message=커밋할 내용 : 
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