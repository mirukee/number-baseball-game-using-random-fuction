#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define M 30

int pow(int b){
	int c=1;
	while(b){
		c*=10;
		b--;
	}
	return c;}


int main(void) {
	int times=30,A,a,strike,w,x,y,z,number,q,e,r,t,ball=0,out=0,i=1,j;
	printf("���ڸ� ���ڸ� �Է��ϼ���.(���� �ƴմϴ�.)\n");
	int k[M+1]={0};
	int d,f,g,h=0;
	f=4;
	scanf("%d",&d);
	if(d%10==0)
	d=d+111;
	d*=d;
	g=d;
	while(g){
		g/=10;
		h++;
	}
	a=d%(int)pow(h/2+f/2+1)/(int)pow(h/2-f/2+1);
	
	
	
    restart: 
    
    printf("====>>>>**���ھ߱�**<<<<====\n-�赵�� ������ ������-\n(�ִ� 30��)4�ڸ� ���ڸ� �Է��ϼ���: ");
	w=a/1000;
	x=a%1000/100;
	y=a%1000%100/10;
	z=a%1000%100%10;
	//printf("%d %d %d %d %d \n",a,w,x,y,z);
	
	back:
	scanf("%d",&number);
	times--;
	if(times==0)
	goto end;
	printf("���� Ƚ�� : %d\n",times);
	k[i]=number;
	
	
	i++;
	q=number/1000;
	e=number%1000/100;
	r=number%1000%100/10;
	t=number%1000%100%10;
	
	strike=0;
	
	if(w==q)
	strike+=1;
	if(x==e)
	strike+=1;
	if(y==r)
	strike+=1;
	if(z==t)
	strike+=1;
	
	if(strike==4)
	{
		printf("�����Դϴ�.");
		goto end;
	}
	else if(strike==0)
	printf(" ");
	else
	printf("%d ��Ʈ����ũ",strike);	
	
	ball=0;
	if(q==x||q==y||q==z)
		if(w!=q)
	    ball++;
	
	if(e==w||e==y||e==z)
	    if(x!=e)
	    ball++;

	if(r==w||r==x||r==z)
	    if(y!=r)
	    ball++;
	
	if(t==w||t==x||t==y)
	    if(z!=t)
        ball++;
        
    if(ball==0)
	printf(" ");
	else
	printf("%d ��",ball);

	out=0;
	
	if(q!=w&&q!=x&&q!=y&&q!=z)
	out++;
	if(e!=w&&e!=x&&e!=y&&e!=z)
	out++;
	if(r!=w&&r!=x&&r!=y&&r!=z)
	out++;
	if(t!=w&&t!=x&&t!=y&&t!=z)
	out++;
	
    if(out==0)
	printf("\n");
	else
	printf("%d �ƿ�\n",out);
	
	goto back;
	end:
	printf("�� : %d �ٽ��ϱ�:1 ������:2 �ٽú���:3\n",a);
	scanf("%d",&A);
	
	if(A==1)
	goto restart;
	else if(A==2)
	goto theend;
	else if(A==3)
	{
		for(j=1; j<=i-1 ; j++)
		printf("%d\n",k[j]);
	}
	theend:
	return 0;
}

int randomRange(int n1, int n2) {
  return (int) (rand() % (n2 - n1 + 1)) + n1;
}
