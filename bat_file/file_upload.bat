@echo off
cd %github_folder%
set /p filename=파일(ex- "6 April"/ 폴더명 을 입력 시, 폴더 내부 파일 전부 올라감) : 
git add %filename%
:Start
set /p message=커밋할 내용 : 
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