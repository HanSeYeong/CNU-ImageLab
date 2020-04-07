## 1. git clone 하기

> git clone "adress"

git 저장소 설치를 원하는 곳에 git bash를 연 후 (혹은 git bash를 연 후, cd 명령어로 이동)

git clone을 실행하여, github 파일을 복사해온다. (이 명령어와 동시에 해당 주소와 자동연결됨.)


## 2. git bash config login 하기

> git config user.name “Your name”

> git config user.email “Your email address”

설정 후, 설정된 내용은

> git config --list 

로 확인 가능하다.


## 3. 저장소에서 파일 보내기

> git add "파일명"

> git commit -m "커밋 메시지"

위 코드를 실행하여 변경하려는 파일과 commit 내용을 기록한다.

여러개를 한번에 커밋할때는 모든 파일 add 후 commit을 하면 된다.

특정 폴더 안에 있는 파일들은

> git add "폴더명"/"파일명"

을 사용.

##### > git commit -m "커밋 메시지" -a
##### 을 사용하면 모든 "변경사항"을 커밋에 싣는다. 

이 후,

> git push

를 사용하여 원격 저장소로 변경 내용을 전송한다.


## 4. 저장소와 충돌 발생시 / 변경내용을 받아올 시

> git pull

명령어를 사용하면 원격 저장소에 있는 파일들을 받아 올 수 있다.

원격 저장소 내 파일을 받은 뒤 push가 가능하기 때문에. (강제로 할 경우 저장소 내용이 날라감)

반드시 pull 이후 push를 해야한다.



##### commit 작성 후, pull을 할 경우, commit 내용이 merge ~~~~ 로 바뀌기 때문에, commit 내용을 다시 바꿔 줄 필요가 있다.