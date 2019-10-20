# include  <stdio.h>


//小玉的电费
/*
#define LINE 150
#define LINE2 400
#define RATE 0.4463
#define RATE2 0.4663
#define RATE3 0.5633
int main() {
	int value;
	float money;
	int b = 0;
	scanf("%d",&value);
	if (value < LINE) {
		money = value * RATE;
	}
	else if (value<LINE2)
	{
		money = LINE * RATE + (value - LINE) * RATE2;
	}
	else 
	{
		money = LINE * RATE + LINE2 * RATE2 + (value-LINE-LINE2)*RATE3;
	}
	money = int((money * 10) + 0.5) / 10.0;
	printf("%.1f",money);
}

*/
//补课不高兴
/*
int main() {
	int t[7];
	int ext[7];
	int sum[7];
	int i = 0;
	int unhappyday = 0;
	int unhappydays[7];
	int date;
	int temp;
	int worst;
	scanf("%d %d", &t[0], &ext[0]);
	scanf("%d %d", &t[1],&ext[1] );
	scanf("%d %d", &t[2], &ext[2]);
	scanf("%d %d", &t[3], &ext[3]);
	scanf("%d %d", &t[4], &ext[4]);
	scanf("%d %d", &t[5], &ext[5]);
	scanf("%d %d", &t[6], &ext[6]);
	for (i = 0;i < 7;i++) {
		sum[i] = t[i] + ext[i];
		if (sum[i]>8) {
			temp = sum[i];
			if (unhappyday < temp) { 
				unhappyday = temp;
				date = i + 1;
				temp = 0;
			}

		}
	}

	
	printf("%d", date);
	
}

*/
//预算与储蓄代码
/*
#include <math.h>
#define ceremony 300
#define RATE 1.2
int main() {
	float bank[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
	int pre[12];
	int i;
	int temp=0;
	int money = 0;
	float sum = 0;
	int deadtime = 0;
	int b = 0;
	float rate(float a[12],int money);
	for (i = 0; i < 12; i++) {
		scanf("%d", &pre[i]);
	}

	for (i = 0;i < 12;i++) {
		money += ceremony;
		temp = money;
		if (temp<100) {
			continue;
		}
		
		
		do {
			if (b == 0) { temp -= pre[i]; }
		if (temp >= 100) {
			if (b == 0) {
				money = money - pre[i] - 100;
			}
			if (b != 0) { money -= 100; }
			temp -= 100;
			bank[i] += 100;
			b++;
		}
		} 
		while (temp >= 100);
		if (temp < 0) { deadtime = i + 1; break; }//直接输出金额不足！
		if (b == 0) { money -= pre[i]; }
		b = 0;
	}
	if (deadtime > 0) { printf("-%d", deadtime); }
	else {
		sum = rate(bank,money);
		printf("%.f", sum);
	}//传递数组参数这一行不知道对不对
}

float rate(float a[12],int money) {
	float sum = 0;
	for (int i = 0; i < 12;i++) {
		//[i] *= pow(RATE,12-i);
		sum += a[i];
		//这是算月利率的情况
		sum += a[i];
		
		
	}
	sum *= RATE;
	sum += money;
	return sum;
}

*/

//买铅笔
/*
int compare(int num[3], int val[3], int n);
int main() {
	int n = 0;
	int num[3];
	int val[3];
	int money = 0;
	scanf("%d",&n);
	for (int i = 0;i < 3;i++) {
		scanf("%d", &num[i]);
		scanf("%d", &val[i]);
	}
	money = compare(num,val,n);
	printf("%d", money);


}

int compare(int num[3],int val[3],int n) {

	int temp  =0 ;
	int i = 0;
	int mul[3];
	int kind = 0;
	for ( i;i < 3;i++) {
		
		mul[i] = n / num[i];
		if (n % num[i] > 0) { mul[i] += 1; }
	}
	temp = mul[0] *val[0];
	i = 0;
	while (i < 3) {
		if (temp > mul[i]*val[i]) {
			temp = mul[i]*val[i];
			kind = i;
		}
		
		i++;
	}
	return temp;
}

*/

//三连击
/*
int main()
{
	int d, b, c;
	for (d = 123;d <= 333;d++)
	{
		b = d * 2;
		c = d * 3;
		if ((d / 100 + d / 10 % 10 + d % 10 + b / 100 + b / 10 % 10 + b % 10 + c / 100 + c / 10 % 10 + c % 10 == 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9) && ((d / 100) * (d / 10 % 10) * (d % 10) * (b / 100) * (b / 10 % 10) * (b % 10) * (c / 100) * (c / 10 % 10) * (c % 10) == (1) * (2) * (3) * (4) * (5) * (6) * (7) * (8) * (9)))
			printf("%d %d %d\n", d, b, c);
	}
	return 0;
}

*/
//游泳问题
/*
#include <math.h>
#define FIRST 2
#define RATE 0.98
int main() {
	float current = 0;
	float metre = 0;
	int step = 0;
	float laststep = 0;
	scanf("%f",&metre);
	for (;current < metre;step++) {
	
		current += FIRST * pow(RATE, step);
	
	}
	printf("%d",step);

}
*/
//小鱼游泳
/*
int main() {

	int weekday = 0;
	int n = 0;
	int sum = 0;
	int current = 0;
	scanf("%d",&weekday);
	scanf("%d", &n);
	while (n>0) {
	
		if (weekday == 7) { weekday = 1; n--;continue; }
		if (weekday < 6) { sum += 250; }
		weekday++;
		n--;
	
	}
	printf("%d", sum);
}

*/
//摘苹果
/*
#define branch 30
int main() {

	int apple[10];
	int high = 0;
	int num = 0;
	int flag = 0;
	for (int i = 0;i < 10;i++)
	{

		scanf("%d",&apple[i]);

	}
	scanf("%d",&high);
	for (int i = 0; i < 10; i++)
	{

		if (apple[i] <= high) {

			num++;
			flag = 1;

		}
		if ((apple[i] <= high + branch) && flag == 0) {
		
			num++;
		
		}
		flag = 0;
	}
	printf("%d",num);
}

*/


int main() {

	int L = 0;
	int M = 0;
	char val = 'a';
	scanf("%d",&L);
	scanf("%d",&M);
	int tstart[100]  ;
	int tend[100]  ;
	int estart= 0;
	int eend = 0;
	estart = M-1;
	eend = M-1;
	int trees = 0;
	int compute(int tstart[], int tend[], int M, int L);
	int realstart[100];
	int realend[100];
	int flag = 0;
	int a = 0;
	int flag2 = 0;
	
	for (int i = 0;i < M;i++)
	{

		scanf("%d", &tstart[i]);
		scanf("%d", &tend[i]);
	}
	for (estart;estart >= 0;estart--, eend--) {
		flag = 0;
		
		//while (tstart[estart] > 0) { estart++; }
		//while (tend[eend] > 0) { eend++; }
		//结尾不就是M吗？ 判断啥
		for (int i = 0; i <= estart;i++)
		{
			
			if (flag2 > 0) { flag2 = 0; }
			if (tstart[i] > tstart[eend]&&tstart[i] < tend[eend]) {
				//开始坐标在内
				if (tend[i] > tend[eend]) {
					//结束坐标在外
					realstart[a] = tstart[eend];
					realend[a] = tend[i];
					M-=1;
					flag2++;
					
					
				}
				if (tend[i] < tend[eend] && tend[i] >tstart[eend]) {
				//结束坐标在内
					realend[a] = tend[eend];
					realstart[a] = tstart[eend];
					M-=1;
					flag2++;
					
				}

			}
			//mark
			if (tstart[i] < tstart[eend] || tstart[i]> tend[eend]) {
			//开始坐标在外
				if (tend[i] > tend[eend] || tend[i] < tstart[eend]) {
				//结束坐标在外
					//realend[i] = tend[i];
					//realstart[i] = tstart[i];
					//M-=1;
					//如果两个区间没有交集
					if (tend[i]-tstart[i]< tend[eend]-tstart[eend]) {
						if (flag == 0) {
							realstart[a] = tstart[eend];
							realend[a] = tend[eend];
							flag++;
							flag2++;
							M -= 1;
							
						}
					}
					if (tend[i] - tstart[i] > tend[eend] - tstart[eend]) {
					
						realstart[a] = tstart[i];
						realend[a] = tend[i];
						flag++;
						flag2++;
						M -= 1;
					
					}
				}
				
				if (tend[i] < tend[eend] && tend[i] > tstart[eend]) {
				//结束坐标在内
					realstart[a] = tstart[i];
					realend[a] = tend[eend];
					M-=1;
					flag2++;
				
				}
			}
			if (i == eend) {
			
				realstart[a] = tstart[i];
				realend[a] = tend[i];
			


			}
			if (flag2 > 0) {
				a++;
			}
		}
	}
	trees = compute(realstart, realend, M,L);
	printf("%d",trees);
}
// compute 没做好

int compute(int tstart[],int tend[],int M,int L) {

	int sum = 0;
	for (int i = 0;i < M;i++) {

		sum = sum + tend[i] - tstart[i] +1 ;

	}
	sum = L + 1- sum;
	return sum;
		
}