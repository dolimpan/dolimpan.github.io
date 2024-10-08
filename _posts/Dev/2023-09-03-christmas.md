---
layout: view
title:  "크리스마스 대작전! 사이트 개발 후기"
date:   2023-09-13 12:00:00 +0900
categories: Django
---

\#Django #백엔드 #AWS #서버

### 0. 배경

홍익대학교 컴퓨터공학과에는 "콕"이라는 배드민턴 학회가 있다. "콕" 학회는 배드민턴뿐만 아니라 다양한 활동과 술자리를 제공하며 컴퓨터공학과의 친목 기능도 겸하고 있다. 이에 콕의 학회원으로서 곧 들어올 24학번 컴퓨터공학과 후배들에게 콕 학회를 홍보하고자, 홍보 웹사이트를 개발하고자 했다.

어떤 종류의 웹사이트를 만들어야할지 아무리 오래 생각해도 번뜩이는 아이디가 없자, 우리의 목적을 바로새우고 거기서부터 다시 시작해보기로 했다. 우리의 목적은 학회 홍보이며, 타겟은 대부분 20대 초반일 24학번이였다. 이에 대한 맞춤 전략으로, "소셜 미디어를 활용할수 있는", "귀여움이 강조된", "본인이 직접 체험할수 있는"등의 키워드에 초점을 맞췄고, 그 결과 2022년도 겨울에 큰 인기를 끌었던 "트리 꾸미기" 웹사이트의 롤링페이퍼 형식을 벤치마킹하기로 결정했다.

트리 꾸미기 웹사이트는 본인이 직접 꾸민 트리 이미지 위에 친구가 편지를 써주는 롤링페이퍼 방식의  웹사이트다. 이런 형태의 구성요소는 앞서 언급한 세개의 키워드에 적합했다. 인스타그램 등 SNS에 자신의 귀여운 트리를 공유하며 학회를 간접적으로 노출시킬수 있으며, 신입생끼리 서로 편지를 써주며 친목도 다지고 어색한 분위기도 쉽게 풀 수 있을것이라 생각했다. 



### 1. 개요

"크리스마스 대작전!" 프로젝트는 2023년 9월부터 진행된 웹사이트 개발 프로젝트이다.

프로젝트는 크게 프론트엔드팀 2명, 백앤드팀 2명과 멘토팀3명으로으로 구성되었다. 프론트와 백앤드팀은 말 그대로 웹사이트 개발에 중추적인 역할을 맡았고, 멘토팀은 프로젝트 경험이 미미한 우리를 위해 기술적 조언뿐만 아니라 어떤식으로 프로젝트를 관리하고 기록해야하는지 등 비 기술적조언도 함께해주셨다.

이 중 나는 22학번 선배 한 명과 함께 백앤드팀으로 활동하게된다. 백앤드는 플라스크와 장고 중 어떤 프레임워크를 사용할지 고민했는데, 백엔드 개발경험이 적던 백앤드팀 상황을 고려해 처음 배우기 더 용이한 장고를 사용하기로 했다.

프로젝트 총 정리는 노션을 사용했고, 매주 주 2회(화/목) 2시간 오프라인 미팅을 가지는것으로 합의하며, kiwicoke 레포지토리를 만들면서 프로젝트를 시작했다.



### 2. 프로젝트 초기

1주차: 개발환경 구축에 집중했다. Github, Notion, Figma등 협업에 필요한 플랫폼을 정리했고, 웹사이트에는 어떤 기능이 필요할지 정리했다

2주차: 기획, 디자인, 개발을 총괄하는 이 혁 선배의 주도 하에 모두가 동의하는 디자인 초안을 잡았다. 또, Github에 대해 공부하기 시작했다.

3주차: Github 사용법과 더불어 각자 맡은 영역 공부를 시작했다. 백앤드인 나는 Django의 기초부터 공부를 시작했다.

4주차: 계속 Django 공부를 했다



### 3. 프로젝트 중기

5/6/7주차: 한 차례의 멘토분들의 점검이 있었다. 이 과정에서 프로젝트의 목적성, 플로우차트, ERD 및 API명세서의 부재를 깨달았고, 회의를 거쳐가며 이런 부분들을 채워나갔다.

<img src="{{ site.baseurl }}/assets/c1.png" alt="설명" style="width:50%; height:auto;">

**ERD**

> ERD는 Entity Relationship Diagram의 약자이며, 엔티티간의 관계를 한눈에 보기위해 사용하는 시각화 도구이다. 이번 프로젝트에서는 데이터베이스를 구축하기 전, 상호 관계를 확인하기위해 사용했다.

<img src="{{ site.baseurl }}/assets/c2.png" alt="설명" style="width:50%; height:auto;">

**API 명세서**

>  API 명세서는 API의 동작방식과 구조를 문서화한것이다. 백앤드와 프론트앤드의 원활한 소통과 더불어 유지보수를 용이하기위해 사용된다. 세부적인 기능과 HTTP Method, URI, request, response등을 적는것이 일반적이다.

<img src="{{ site.baseurl }}/assets/c3.png" alt="설명" style="width:50%; height:auto;">

**플로우 차트**

> 플로우 차트는 프로젝트의 논리적 구조를 시각적으로 표현한 다이어그램이다. 역시 의사소통, 유지보수, 문서화등의 용도로 사용된다.



### 4. 프로젝트 말기

8주차 이후~

어쩌다보니 프로젝트 시작 8주차가 되어서야 본격적인 개발을 시작했다. 100% 오프라인 미팅을 가졌던 프로젝트 초중반과는 다르게 이제 본인이 맡은 업무만 끝내면 된다 판단하여 필요할때만 디스코드/Webex 등으로 비대면 만남을 가지기로 했다. 

배포까지 로드맵을 그려보니 서버부분을 담당하는 개발자가 필요함을 알게됐고, 과거 MySQL을 독학해본 내가 웹서버 관리까지 맡게 됐다.

첫번째로 기여한 부분은 "구글 로그인" 코드이다. "회원가입 과정이 길고 복잡하면 사용자 이탈이 잦을것같다" 라는 주장에 모두 동의하여 "크리스마스 대작전!" 웹사이트는 자체 회원가입이 없고, 모두 구글 로그인에 의존한다. 따라서, 플로우차트에서도 찾아볼 수 있 듯 첫 화면에서 사용자의 구글계정 정보를 받고, 데이터베이스에 일치하는정보가 있으면 로그인, 없으면 회원가입을 시키는 구조이다.

코드설명은 여기

두번째 기여는 AWS 웹서버 구축이다.

1. 웹서버 Github 레포지토리 연결
2. Route 53을 통한 도메인 연결 및 관리
3. 리버스프록시를 활용한 프론트/백 연결

등의 작업을 했다. 자세한 내용은 추후 블로그 업로드 예정.

세번째 기여는 Github Actions을 이용한 CI/CD 구축이다. 

> CI/CD는 Continious Integration/Continuous Deployment의 약자로, 빠르고 자동화된 배포를 이르는 말이다. 

 Github Actions를 활용해 kiwimail 레포지토리 마스터 브랜치가 merge되면 자동으로 AWS서버에 반영되도록 자동화를 했다.

지금와서 돌아보면 백엔드보다는 웹서버쪽에 더 많은 기여를 한 것 같다. 아무래도 계획한 프로젝트가 백엔드에 비중이 크지 않은편이라 그런듯하다.

아래는 프로젝트 최종 스냅샷들이다.

<div style="display: flex; justify-content: space-around; align-items: center;"> <img src="{{ site.baseurl }}/assets/c4.png" alt="Image C4" style="width: 30%; height: auto; margin: 10px;"> <img src="{{ site.baseurl }}/assets/c5.png" alt="Image C5" style="width: 30%; height: auto; margin: 10px;"> <img src="{{ site.baseurl }}/assets/c6.png" alt="Image C6" style="width: 30%; height: auto; margin: 10px;"> </div>

### 5. 후기

여러모로 배워가는게 많은 굉장히 성공적인 프로젝트라고 생각한다. 단순히 백엔드/웹서버에 대한 지식을 습득한것을 넘어, 어떻게 보면 협업이라는걸 처음 해보면서 많은걸 느끼고 배웠다. 배우고 느낌점을 가볍게 정리해보았다.

1. **Git 프로그램 사용법 습득**

   앞으로 프로그래머의 길을 걷는데에 있어 필수적인 Git & Github의 작동방식을 자세히 알게되었다. 

   - Issue를 통한 업무 분담 및 task 관리

   Github의 Issue 기능은 앞으로 해나가야하는 업무, 발생한 오류 등 프로젝트에 관한 내용을 기록할 수 있게 도와준다. 또, 어떤식으로 처리를 했는지 기록이 남아 추후에 다시 확인 할 수 있도록 해준다. Bug, Feature, Refactor, Etc 4개의 label을 가지고 분류한다.

   - Clone과 Branch

   Clone기능은 현 Repository(앞으로 A라 칭한다)속 전체 내용물을 내 이름 아래의 Repository로 복사한다. 이후 작업하는 내용은 A Repository에 반영되지않는다.

   Branch 기능은 A Repository의 현 상태에서 브랜치를 내어 작업하는 것이다. 이때 Branch의 이름은 Issue번호/해야하는작업으로 정리하는것이 용이하다

   - Pull Request & Merge

   보통 프로젝트 보호를 위해 바로 Repository에 작업을 적용하는것은 금기시된다. 그래서 자신의 브랜치 속 수정한 내용을 Push하여 Pull request를 보내 main repository에 적용시키는 절차를 밟는다. 이번 프로젝트의 경우, 공동 작업자 한명의 Review confirm이 있어야 Branch Merge가 가능했다. 정돈을 위해 작업이 끝난 Branch는 삭제한다.

   - Actions

   Repository에 특정한 변화가 발생했을때 실행하는 매크로 느낌의 기능이다. 이번 프로젝트 같은경우에는 새로운 Merge가 발생했을때마다 AWS에 git pull 명령어를 실행하게 하여 실시간 배포 기능을 구현했다.

2. **협업 프로젝트 경험**

   내가 여태껏 진행했던 코딩 프로젝트는 대부분 개인 프로젝트였고, 공동 프로젝트를 하더라도 명확한 분업 없이 한 파일에 여러명이 코딩을 하는 굉장히 비효율적인 방식으로 진행됐다. 그래서 개발자에게는 필수로 요구되는 분업, 소통에 관한 내용을 익혔다는게 긍정적이다.

   1. 분업&소통하는 법
      - 이번 프로젝트의 분업은 크게 프론트앤드 개발팀/백앤드 개발팀으로 나뉘었다. 또, 회의를 통해 각 팀이 개발해야하는 업무 리스트를 짰고, 팀 속에서도 각자 개발해야하는 세부 업무가 달랐다.
      
      - 일하는 사람은 여럿이지만 만들어야하는 결과물은 하나였기에 정해야할 규칙, 방식등이 생겼다. 예를 들어, Serializer를 naming하는 방식, SQL 테이블 변수 이름등 일관성있게 가져가야할 부분이 생겼고, 내가 짠 코드를 이해할 수 있도록 주석도 달아야했다. 그냥 남의 코드를 가져와 작동만 되면 건드리지 않았던 과거의 작업 방식과 달리, 내 코드에 대한 이해도를 가져야 공동작업자한테 코드를 설명해 줄 수 있기에 이해 안되는 부분 없이 작성하도록 노력했다. 또, 다 같이 회의하는 자리에서 모든 인원이 잘 이해했는지 확인하는 단계도 필요할 것 같다.
      
      - 개인 프로젝트에서는 내가 하고싶은 모든 요소를 넣을 수 있다. 프로젝트의 모든 요소를 내가 컨트롤하기때문에 남의 시선, 의견 충돌등을 고려하지 않아도 된다. 하지만, 단체 프로젝트에서는 모두의 의견이 반영되어야하고, 이 과정에서 감정싸움등이 발생하기도 한다. 위키 디자인, 위키 구성을 상의할때 내가 원하는 방향으로 흘러가지 않을때는 속상하고, 마음한켠에 그만두고싶다는 생각이 들때도 있었다. 이부분에 대한 개선점은 아직 도달하지 못했는데, 아무래도 코딩을 해야하는사람들에게 기획을 맡겼기때문에 분쟁이 난게 아닐까 라는 생각을한다. 디자인은 전문 디자이너에게, 기획은 전문 기획팀에게 코딩은 우리에게 맡기는것이 분쟁과 감정싸움이 제일 덜 일어날것같고, 코딩하다가 발생하는 다툼은 합리적 대화로 풀어가는것이 중요한것같다. 
   2. 시간 엄수의 중요성
      - 4명의 작업자 모두 스케줄에 쫓기는 학생이였고, 이 프로젝트에 많은 시간을 투자할 수 는 없었다. 하지만 프로젝트는 계속 진행되어야했고 주 2회밖에 못만나는 상황속에서 한번의 회의 불참, 한번의 데드라인 미스는 프로젝트 진행에 큰 차질을 발생시켰다. 시간날때마다 생각하고 작업하면되는 개인 프로젝트와는 다르게, 나의 실수가 다른 작업자들에게 큰 민폐가 될 수 있었기 때문에 더 책임감과 압박감을 가졌다.  
   3. 동기부여의 중요성
      - 열정이 넘치던 초반과는 달리, 한두달이 지난 이후부터는 다들 생기가 없어지고, 흥미가 떨어진 표정을 지었다. 이로 인해 프로젝트가 정체기에 도달한게 아닌가 싶다. 나 역시도 중간부터는 계속되는 압박감과 흥미 감소로 인해 프로젝트가 재미없게 느껴졌다. 그런 이유때문에 초반 목표를 달성하지 못한 것 같다. 직장이라면 이야기가 달라지겠지만, 학생떄 진행하는 소규모 프로젝트의 경우에는 계속되는 동기부여와 목표 성취가 프로젝트 유지의 핵심이라는 생각을 했다.

3. **서버 관련 지식**

   1. 유분투 관련 지식&DOS코딩
      - 웹서버 개발자의 역할을 맡으며 AWS에서 제공하는 리눅스 환경을 다루게 되었는데 GUI 없이 운영체제를 사용하자니 굉장히 어색했다. 명령어를 익히고, 차근차근 리눅스라는 운영체제에 대해 알아가며 안정성, 성능, 확장성 및 비용 효율성 등 리눅스가 가진 강점을 배웠고, 컴퓨터공학 근본에 가깝다는 생각이 들어 추후 관련 스터디를 들고싶다는 마음을 가졌다.
   2. 포트개념&인바운드/아웃바운드
   3. PuTTY사용법
