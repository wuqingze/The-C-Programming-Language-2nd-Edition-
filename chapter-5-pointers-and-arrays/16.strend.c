#include <stdio.h>

void test00();
void test01();
int _strend(char *s, char *t);

int main()
{
    test01();
	return 0;
}

void test00(){
	int strend(char*, char*);

	char *s = "qweasdzxc123Hello";
	char *t = "Hello";
	int end = strend(s, t);
	printf("%d\n", end);
}

void test01(){
	int strend(char*, char*);

	char *s = "qweasdzxc123Hello";
	char *t = "Hello";
	int end = _strend(s, t);
	printf("%d\n", end);
}

int _strend(char *s, char *t){
    if(NULL == s || NULL == t)
        return 0;

    int n =0;
    int m =0;

    while(*(s+n))
        n++;
    while(*(t+m))
        m++;
    printf("n=%d, m=%d\n", n, m);
    if(n<m)
        return 0;

    for(int i=0;i<m;i++){
        printf("t+i=%c, s+m-n+i=%c, i=%d\n", *(t+i), *(s+n-m+i), i);
        if(*(t+i) != *(s+n-m+i))
                return 0;
    }
    return 1;
}

int strend(char *s, char *t)
{
	char *sStart = s;
	char *tStart = t;

	while (*s)
		s++;

	while (*t)
		t++;

	while ((*s-- == *t--) && (t != tStart) & (s != sStart))
		;

	if (t == tStart)
		return 1;
	else
		return 0;
}

