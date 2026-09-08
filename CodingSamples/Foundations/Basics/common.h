#ifndef _CONSOLE_H
#define _CONSOLE_H

#ifdef __cplusplus
extern "C"{
#endif

int main(void);

void __startexec(int(*)());
void __writestr(const char*, long);
void __writeint(long);
long __readint(void);
void __writedec(double);
double __readdec(void);

void _start(void)
{
	__startexec(main);	
}

long GetInt(const char* prompt)
{	
	__writestr(prompt, 0);
	return __readint();
}

double GetDec(const char* prompt)
{	
	__writestr(prompt, 0);
	return __readdec();
}


#define PutStr(txt) __writestr(txt, 0)
#define PutInt(pmt, val) __writestr(pmt, 0);__writeint(val);__writestr((const char*)'\n', 1)
#define PutDec(pmt, val) __writestr(pmt, 0);__writedec(val);__writestr((const char*)'\n', 1)

#ifdef __cplusplus
}
#endif

#endif
