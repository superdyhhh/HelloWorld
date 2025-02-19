//#include<stdio.h>
//#include<string.h>
//struct flight
//{
//	int flight_number;
//	char departure[100];
//	char destination[100];
//	int seatsleft;
//	int price;
//};
//
//int main()
//{
//	printf("------------welcome to Airline Management System------------\n");
//	printf("                         @log in                         \n");
//	char* rightUsername = "dang";
//	char* rightPassword = "1015";
//	for (int i = 1; i <= 3; i++)
//	{
//		printf("请输入用户名：\n");
//		char username[100];
//		scanf("%s", &username);
//		printf("请输入密码：\n");
//		char password[100];
//		scanf("%s", password);
//		if (!strcmp(rightUsername, username) && !strcmp(rightPassword, password))
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			if (i == 3)
//			{
//				printf("你的账户%s被锁定，请联系管理员dyh同学",username);
//				return 0;
//			}
//			else
//			{
//				printf("用户名或密码错误，请重新输入！(剩余尝试%d次）\n", 3 - i);
//			}
//		}
//	}
//	printf("------------welcome to Airline Management System------------\n");
//	printf("                    @flight reservation                         \n");
//	struct flight f1 = { 1015,"Beijing","Shanghai",32,1000 };
//	struct flight f2 = { 3000,"NewYork","London",46,1500 };
//	struct flight f3 = { 1152,"Tokyo","Nice",23,2000 };
//	
//	struct flight arr[3] = { f1,f2,f3 };
//	for (int i = 0; i < 3; i++)
//	{
//		struct flight temp = arr[i];
//		printf("航班编号：%d\n", temp.flight_number);
//		printf("出发地：%s\n", temp.departure);
//		printf("目的地：%s\n", temp.destination);
//		printf("剩余座位数：%d\n", temp.seatsleft);
//		printf("机票价格：$%d\n", temp.price);
//		printf(" \n");
//	}
//	printf("请选择你需要的航班编号：\n");
//	int n;
//	scanf("%d", &n);
//	if (n == 1015 || n==3000 || n==1152)
//	{
//		printf("请输入你的真实姓名：\n");
//		char name[100];
//		scanf("%s", &name);
//		printf("请输入你的身份证号：\n");
//		char id[100];
//		scanf("%s", &id);
//		printf("请输入你的联系电话：\n");
//		char tel[100];
//		scanf("%s", &tel);
//	}
//	else
//	{
//		printf("缺少诚意，你已被踢出订票系统！");
//		return 0;
//	}
//	printf("------------welcome to Airline Management System------------\n");
//	printf("                           @pay                         \n");
//	int x;
//	if (n == 1015)
//	{
//		x = 1000;
//	}
//	else if (n == 3000)
//	{
//		x = 1500;
//	}
//	else if (n == 1152)
//	{
//		x = 2000;
//	}
//	printf("待支付：$%d\n",x);
//	printf("请输入支付方式（仅支持支付宝及微信支付）\n");
//	char pay[100];
//	scanf("%d\n", &pay);
//	printf("支付成功！祝你旅途愉快！(*^▽^*)\n");
//	return 0;
//
//}
//
