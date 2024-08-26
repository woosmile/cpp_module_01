# cpp_module_01

## 학습 내용
- 생성자와 소멸자
- 인스턴스 배열
- 레퍼런스
- 멤버 함수 포인터
- switch-case 문

## 과제 내용

### ex00
- new를 사용해서 인스턴스 생성
- delete로 인스턴스 삭제

### ex01
- new를 사용해서 다수의 인스턴스 생성
- delete[]로 다수의 인스턴스 삭제

### ex02
- &(레퍼런스) 연산자 사용

### ex03
- Weapon 객체의 레퍼런스를 전달받아서 Human 클래스의 멤버 변수(포인터) 초기화
- HumanA는 생성자 매개변수로 Weapon 객체의 레퍼런스를 전달받지만 HumanB는 그렇지 않으므로 Weapon을 불러올 때 NULL에 대한 예외처리가 있음

### ex04
- String 객체의 replace 메소드를 구현함
- 원본 파일에서 변경할 문자를 검색해서 수정할 문자로 변경함
- 클래스 2개로 구현

### ex05
- 멤버 함수 포인터의 사용

### ex06
- switch-case 문에서 break를 쓰지 않았을 때 발생하는 현상인 Fall-through 확인
