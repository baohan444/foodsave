#include<stdio.h>
#include<stdlib.h>
#include<mysql/mysql.h>
#include<string.h>
int main(){
    MYSQL my_connection;
    int res;
    char food[1000];
    char name[1000];
    char phone[1000];
    char location[1000];
    char model[1];
    char date[1000]={0};
    char food2[1000];
    char a[1000];
    char b[1000];
    char c[1000];
    mysql_init(&my_connection);
    printf("请确认您是骑手还是顾客(A/B)\n");
       scanf("%c",&model[0]);
       if(model[0]=='A')
       {
           for(int i=0;i<3;i++)
           {
               switch(i)
               {
                   case 0:printf("输入餐单号:\n");
                   FILE *fp;
                   fp=popen("./getfood.sh","r");
                   if(fp==NULL)
                   {
                       perror("popen error\n");
                       return -1;
                   }
                   fgets(food,1000,fp);
                   pclose(fp);
                   a==system("./getfood.sh");
                   break;
                   case 1:printf("请输入顾客的姓名:\n");
                   FILE *fp1;
                   fp1=popen("./getfood.sh","r");
                   if(fp1==NULL)
                   {
                       perror("popen error\n");
                       return -1;
                   }
                   fgets(name,1000,fp1);
                   pclose(fp1);
                   b==system("./getname.sh");
                   break;
                   case 2:printf("请输入顾客的电话:\n");
                   FILE *fp2;
                   fp2=popen("./getfood.sh","r");
                   if(fp2==NULL)
                   {
                       perror("popen error\n");
                       return -1;
                   }
                   fgets(phone,1000,fp2);
                   pclose(fp2);
                  for(int j=0;phone[j];j++)
                  {
                      if(phone[j]<'0'||phone[j]>'9')
                      {
                          printf("请输入正确的手机号\n");
                          i=0;
                   break;
                      }
                  }
                  break;
               }
           }
           printf("电话号码:%s",phone);
           printf("姓名:%s",name);
           printf("单号:%s",food);
           FILE *fp3;
           fp3=popen("./getlocation.sh","r");
           if(fp3==NULL)
           {
               perror("popen error!\n");
               return -1;
           }
           fgets(location,1000,fp3);
           pclose(fp3);
           c.==system("./getlocation.sh");
           printf("储存位置:%s",location);
           if(mysql_real_connect(&my_connection,"localhost","root","123",
           "cage",0,NULL,CLIENT_FOUND_ROWS))
           {
               printf("connection success\n");
            res =mysql_query(&my_connection,"Insert into cage1 values(a,b,c,)");
if(!res)
{
 printf("inserted by %lu rows\n",(unsigned long)mysql_affected_rows(&my_connection));
}
mysql_close(&my_connection);
           }
else{
fprintf(stderr,"Insert error %d:%s\n",mysql_errno(&my_connection),mysql_error(&my_connection));
}
mysql_close(&my_connection);
       }
else
{
 fprintf(stderr,"connection failed\n");
if(mysql_errno(&my_connection ))
{
    fprintf(stderr,"connection error %d: %s\n",mysql_errno(&my_connection),mysql_error(&my_connection));
}
}
return 1;
}else if(model[0]=='B'){
      printf("输入餐单号:\n");
                   FILE *fp4;
                   fp4=popen("./getfood.sh","r");
                   if(fp4==NULL)
                   {
                       perror("popen error\n");
                       return -1;
                   }
                   fgets(food2,1000,fp4);
                   pclose(fp4);
                   FILE *fp5;
                   fp5=popen("./getdate.sh","r");
                   if(fp5==NULL)
                   {
                       perror("popen error\n");
                       return -1;
                   }
                   fgets(date,1000,fp5);
                   pclose(fp5);
                   printf("单号:%s",food2);
                   printf("时间:%s",date);
}
if(mysql_real_connect(&my_connection,"localhost","root","123",
           "cage",0,NULL,CLIENT_FOUND_ROWS))
           {
               printf("connection success\n");
               res=mysql_query(&my_connection,"select * from cage1 where cage1.food='a'");
               if(!res)
               {
                   printf("地址为:mysql_store_row",(unsigned long)mysql_affected_rows(&my_connection));
               }
               else
                fprintf(stderr,"select error %d:%s\n",mysql_errno(&my_connection),mysql_error(&my_connection));
}
mysql_close(&my_connection);
       }
else
{
 fprintf(stderr,"connection failed\n");
if(mysql_errno(&my_connection ))
{
    fprintf(stderr,"connection error %d: %s\n",mysql_errno(&my_connection),mysql_error(&my_connection));
}
}
return 1;   
}
    
                   