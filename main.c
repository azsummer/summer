#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
typedef struct MarketGoods
{
	int goods_id;//商品条码
	char goods_name[40];//商品名
	double goods_price;//商品单价
	int goos_amount;//商品库存(数量)
}MG;
void splash()//欢迎界面
{
	int i;
	system("color 3f");
	system("title 收银计费系统");
	printf("=====================================================\n");
	printf("-----------------------------------------------------\n\n");
	printf("\t\t欢迎使用超市收银计费系统\n\n");
	printf("-----------------------------------------------------\n");
	printf("=====================================================\n\n");
	Sleep(500);
	printf("\t\t加载中.");
	for(i=0;i<30;i++)
	{
		printf(".");
		Sleep(100);
	}
	system("cls");
}
void login()//登录
{
	char admin[]={"root"},adminw[10];
	char pass[]={"admin"},passw[10];
	printf("请输入你的账号:");
	scanf("%s",adminw);
	printf("请输入你的密码:");
	scanf("%s",passw);
	while(!(strcmp(admin,adminw)==0&&strcmp(pass,passw)==0))
	{
		printf("账号或密码输入错误，请重新输入.\n");
		Sleep(1800);
		system("cls");
		printf("账号:");
		scanf("%s",adminw);
		printf("密码:");
		scanf("%s",passw);
	}
	printf("登录成功\n");
	system("pause");
	system("cls");

}
void input()//录入商品信息
{
	system("pause");
	system("cls");
}
void look()//查看商品信息
{
	char file[] = "data.ini";
	FILE *fp;
	fp = fopen(file, "w");
	if(fp==NULL)
	{
		printf("没有数据");
	}
	else
	{
		fscanf(fp,"%s",*file);
	}
	system("pause");
	system("cls");
}
void buy()//结账收银
{

}
void print()//打印小票
{

}
void main()
{
	int s;
	splash();
	login();
	do{
		printf("\n\n\t\t请选择一项作为你的操作:\n\n");
		printf("\t\t1.录入商品信息\n\n");
		printf("\t\t2.查看商品信息\n\n");
		printf("\t\t3.结账\n\n");
		printf("\t\t0.退出系统\n\n\t\t你的选择:");
		scanf("%d",&s);
		switch(s)
		{
		case 1:system("cls");input();break;
		case 2:system("cls");look();break;
		case 3:system("cls");buy();break;
		}
	}while(s!=0);
}