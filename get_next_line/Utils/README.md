# GET_NEXT_LINE 에서 사용된 함수 정리

## size_t ft_strlen(const char *s)

문자열의 길이를 구한다.

c 문자열의 길이는 마지막 널 문자에 의해 결정된다.

따라서 strlen은 문자열의 시작부터, 널 문자 직전까지 문자의 개수를 센다.

### **인자**

`const char *s`

C 형식 문자열

### **리턴값**

문자열의 길이.

### **참고)**

size_t 형으로 선언되어 있는데 대부분의 string.h에서는 부호 없는 정수형으로 선언되어 있다.

---

## char *ft_strchr (const char *s, int c)

문자열에서 특정한 문자가 가장 먼저 나타나는 곳의 위치를 찾는다.

이 때, 그 위치를 가리키는 포인터를 리턴한다.

이 때 마지막 `NULL` 문자도 C 문자열의 일부로 간주하기 때문에 이 함수는 문자열의 맨 끝 부분을 가리키는 포인터를 얻기 위해 사용할 수 도 있다.

이 때, C 의 경우 함수 오버로딩을 할 수 없으므로 아래와 같은 하나의 원형만 존재한다.

### **인자**

`*s`

C 형식 문자열

`character`

검색할 문자로, `int` 형태로 형변환 되어서 전달되지만 함수 내부적으로는 다시 `char` 형태로 처리된다.

### **리턴값**

`str` 에서 검색한 문자가 가장 먼저 나타나는 곳을 가리키는 포인터를 리턴한다. 만일 문자가 없다면 `NULL` 포인터를 리턴하게 된다.

---

## size_t ft_strlcpy(cahr *dst, const char *src, size_t dstsize)

이 함수는 strcpy랑 똑같이 데이터를 복사하는 건데 보안 목적으로 strcpy를 대신할 함수로 만들어졌다.

src에서 dst로 값을 복사하는데 size길이 만큼 한다.

여기서 size는 문자열 끝의 NULL 까지 포함한 길이를 넣어줘야한다.

만약 size에 1을 넣으면 dst에 NULL만 들어가있다.

size에 2를 넣을 때부터 src 1바이트와 NULL이 dst에 들어가있다.

### **인자**

`char *dest`

: 값을 담을 배열의 첫 주소

`const char *src`

: 넣을 값을 담은 배열의 첫 주소

`size_t destsize`

: 값을 넣을 크기

### **반환 값**

이 값은 dst의 길이 값이다.

복사되어진 데이터의 길이이므로 NULL은 빠진다.

size - 1 값이라고 생각하면 이해하기 편할 것이다.

---

## char *ft_strdup(const char *s1)

문자열 (s의 길이 +1) 크기 malloc()으로 할당후 문자열 s를 복사한 후 문자열을 가리키는 포인터를 반환한다

- 문자를 복사할 공간을 확보하기 위해서 내부적으로 동적할당 한다

malloc()한 데이터를 반환하므로, 공간이 필요없게 되었을때 반환받은 메모리는 반드시 free()를 통하여 메모리를 해제해야 한다.

strdup 은 malloc + strcpy 와 같다.

### **인자**

`const char *s`

: 복제할 문자열

### **리턴값**

`null 아니면` 정상적으로 복제한 값

`null이면` 문자열 복제 실패,

---

## char *ft_strjoin(char const *s1, char const *s2)

주어진 문자열 두개의 문자열 합친 문자열을 반환한다.


### **인자**

`char const *s1`

`char const *s2`

- s1, s2 : 합칠 두개의 문자열

### **리턴값**

- s1과 s2를 합친 새로운 문자열을 반환한다.
