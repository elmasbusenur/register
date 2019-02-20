#include <stdio.h>
#include <time.h>
int a =1;
#define N 10000
int main(void) 
{
clock_t start, end;
double cpu_time_used;
register double i;
start = clock();
for(i=0;i<N;i=i+0.0001);
end = clock();
cpu_time_used = ((double) (end -start)) / CLOCKS_PER_SEC;
printf("Running time is %f",cpu_time_used);
return 0;
}
