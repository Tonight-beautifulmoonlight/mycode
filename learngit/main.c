#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include "ff.h"
#define PI 3.14
#include <math.h>
const double PI2=3.14;


//int main()//菜数游戏test1
//{
//    srand(time(0));
//    int number=rand()%100+1;
//    int count=0;
//    int a=0;
//    printf("xiang haole yigeshu.laicaiya\n");
//    do{
//        printf("猜猜是多少，你来呀\n");
//        scanf("%d",&a);
//        count++;
//        if(a<number)
//        {
//            printf("xiao le\n");
//        }
//        else if(a>number)
//        {
//            printf("da le\n");
//        }
//    }while(a!=number);
//    printf("你用%d次猜中了，真厉害啊。佩服！\n",count);
//	return 0;
//}

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int sum=1;
//    for(int i=1;i<=n;i++)
//    {
//        sum*=i;
//    }
//    printf("%d",sum);
//    return 0;
//}
//int main()  //打印素数
//{
//    int x;
//    int cnt=0;
//    //for(x=1;cnt<50;x++) //方法1
//    x=1;//方法2
//    while(cnt<50)
//    {
//        int flag=1;
//        for(int i=2;i<x;i++)
//        {
//            if(x%i==0)
//            {
//                flag=0;
//                break;
//            }
//        }
//        if(flag==1)
//        {
//            cnt++;
//            printf("%d\t",x);
//            if(cnt%5==0)
//            {
//                printf("\n");
//            }
//        }
//        x++;//方法2
//    }
//
//    return 0;
//}
//int main()  //求n项之和
//{
//    int n;
//    double all=0;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)
//    {
//        all+=(1.0/i);
//    }
//    printf("%.2f",all); //保留两点小数
//}

//int main()  //辗转相除法
//{
//    int a,b,t;
//    printf("输入a和b：");
//    scanf("%d %d",&a,&b);
//    while(t!=0)
//    {
//        t=a%b;
//        a=b;
//        b=t;
//        printf("步骤：a是%d，b是%d，t是%d。",a,b,t);
//    }
//    printf("最大公约数是：%d",a);
//
//    return 0;
//}
//int main()
//{
//    //int a=6;
//    //printf("double的大小为%ld",sizeof(double));
//    printf("大小为%ld",sizeof(long)); //sizeof是静态的，不会执行里面的a++
//    return 0;
//}
//void sum(int begin,int end);
//void fun()
//{
//    printf("hahahaha");
//}
//int main()
//{
//    sum(1,10);
//    fun();
//    return 0;
//}

//void sum(int begin,int end)
//{
//    int i;
//    int sum=0;
//    for(i=begin;i<=end;i++)
//    {
//        sum+=i;
//    }
//    printf("%d to %d all is: %d\n",begin,end,sum);
//
//}

//
//void fun();
//
//int main()
//{
//    fun();
//    return 0;
//}
//
//void fun()
//{
//        int a[10]={[1]=1,[3]=3,4};
////        for(int i=0;i<10;i++)
////        {
////            printf("a[%d] is %d\n",i,a[i]);
////        }
//        printf("%d\n",sizeof(a)/sizeof(a[0]));
//
//}
//
//int isPrinme(int x)   //素数判断
//{
//    int ret=1;
//    if(x%2==0&&x!=2)
//        ret=0;
//    for(int i=0;i<x;i++)
//    {
//        if(x/i==0)
//        {
//            ret=0;
//            break;
//        }
//    }
//    return ret;
//}
//int a[][5]={
//    {1,2,3,4,5},
//    {6,7,8,9,0},
//};
//
//char a1='q';
//char b[100]="i can do it";
/*
void minmax666(int a[],int len,int* max,int* min);

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int min,max;
    minmax666(a,sizeof(a)/sizeof(a[0]),&max,&min);
    printf("min is %d,max is %d",min,max);
    //printf("运行成功\n");
    return 0;
}

void minmax666(int a[],int len,int* max,int* min) //返回两个指针
{
    int i;
    *min=*max=a[0];
    for(i=0;i<len;i++)
    {
        if(a[i]<*min)
        {
            *min=a[i];
        }
        if(a[i]>*max)
        {
            *max=a[i];
        }
    }
}
*/
int main()
{
//    int number;
//    int* a;
//    int i;
//    printf("输入数组长度:\n");
//    scanf("%d",&number);
//    a=(int*)malloc(number*sizeof(int));  //动态内存分配，分配数组内存。
//    for(i=0;i<number;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=number-1;i>=0;i--)
//    {
//        printf("%d",a[i]);
//    }
//    free(a);//释放内存
//    return 0;

//    char word1[8];
//    char word2[8];
//    scanf("%7s",word1);
//    scanf("%7s",word2);
//    printf("%s##%s##\n",word1,word2);
//    char s1[]="qw1er";
//    char s2[]="qwer";
//    printf("%d\n",strcmp(s1,s2));

//    int mycmp(const *s1,const *s2)
//    {
//        int idx=0;
//        whlie(1)
//        {
//            if(s1[idx]!=s2[idx])
//            {
//                break;
//            }else if(s1[idx]=='\0')
//            {
//                break;
//            }
//            idx++;
//        }
//        return s1[idx]-s2[idx];
//    }

//2019/2/13/test1
//    int n;
//    int count=0;
//    for(n=100;n<=200;n++)
//    {
//
//        if(n%3!=0)
//        {
//            count++;
//            printf("%d不能被3整除！",n);
//        }
//            //continue;
//        if((count%5==0)&&(n%3!=0))
//        {
//            printf("\n");
//        }
//    }
//    printf("一共运行了%d次！\n",count);

//求和
//2019/2/13/test2
//    double shu=1.0; //每一项
//    double sum=0.0;//和
//    double n=1.0;//分母
//    int fuhao=1;
//    while(fabs(shu)>=1e-6)
//    {
//        sum+=shu;
//        n=n+2;
//        fuhao=-fuhao;
//        shu=fuhao/n;
//    }
//    sum=sum*4;
//    printf("%9.7f\n",sum);

//素数
//    int n,i;
//    scanf("%d",&n);
//    for(i=2;i<n-1;i++)
//    {
//        if(n%i==0)
//        {
//        printf("bushi\n");
//        break;
//        }
//
//        if(i=n-1)
//            printf("shi\n");
//
//    }

//冒泡排序
//    int a[5];
//    printf("输入5个数：\n");
//    for(int i=0;i<5;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    printf("\n");
//    for(int j=0;j<5;j++)
//        for(int i=0;i<5-j;i++)
//        if(a[i]>a[i+1])
//        {
//            int t=a[i];
//            a[i]=a[i+1];
//            a[i+1]=t;
//        }
//    printf("排序后的：\n");
//    for(int i=0;i<5;i++)
//        printf("%d ",a[i]);
//    printf("\n");

//二维数组中最大的数和位置
//    int a[3][4]={{1,2,3,8},{9,3,2,88},{6,2,35,4}};
//    int max=a[0][0];
//    int row=0,col=0;
//    for(int i=0;i<3;i++)
//        for(int j=0;j<4;j++)
//        if(a[i][j]>max)
//           {
//            max=a[i][j];
//            row=i;
//            col=j;
//           }
//    printf("max is %d\n",max);
//    printf("hang is %d,lie is %d",row+1,col+1);

//用数组打印图像
//    char lingixing[3][3]={{' ','*',' '},{'*',' ','*'},{' ','*',' '}};
//    int i,j;
//    for(i=0;i<3;i++)
//       {
//           for(j=0;j<3;j++)
//                {
//                    printf("%c",lingixing[i][j]);
//
//                }
//                 printf("\n");
//       }


//输出字符数组   遇到\0就结束输出
//    char c[]={'c','h','i','\0','n'};
//    printf("%s",c);

//统计字符串中的单词数量
//    int word=0,all=0;
//    char c;
//    //char str[100];
//    //gets(str);
//    char str[100]="i love china";   //注意：不能写成char str="i love china";
//    for(int i=0;(c=str[i])!='\0';i++)
//    {
//        if(c==' ')
//            word=0;
//        else
//            if(word==0)
//            {
//                word=1;     //此时就发现这是一个新的单词，
//                all++;      //单词数量加一
//            }
//    }
//    printf("一共有%d个单词。\n",all);

//    int fact(int n)   //递归调用求阶乘 n！
//    {
//        int f;
//        if(n==0||n==1)
//        {
//            f=1;
//        }
//        else
//        {
//            f=n*fact(n-1);
//        }
//        return f;
//    }
//    printf("结果是：%d\n",fact(3));

//求平均数的函数
//    float average(float array[])
//    {
//        float ave;
//        float sum=array[0];
//        for(int i=1;i<3;i++)
//        {
//            sum+=array[i];
//        }
//        ave=sum/3;
//        return ave;
//    }
//    float score[3]={1,2,3};
//    float ave;
//    ave=average(score); //数组名作为参数传递进去
//    printf("%5.2f",ave);

//示例：static 只初始化一次
//    int fact(int n)
//    {
//        static int f=1;
//        f*=n;
//        return f;
//    }
//    for(int i=1;i<=3;i++)
//    {
//        printf("%d的阶乘是：%d\n",i,fact(i));
//    }

//使用extern，使用了外面的a
//    extern int a;
//    printf("%d\n",a);
//    char a='q';
//    char* point=&a;
//
//    printf("%c
//           \n",*point);
//    printf("%d\n",point);
//    printf("%d\n",(++point));
//    printf("%d\n",*(++point));
//    printf("%d\n",*((int *)6422280));

//找到一个字符串里的某个字符   有问题！
//    int find(char strings,char value)
//    {
//        char string;
//        while((string=*strings++)!=NULL)
//        {
//            if(*string++ == value)
//                return 1;
//        }
//        return 0;
//    }
//    int aa=find("nnn",'n');
//    printf("%d",aa);

//用malloc分配内存空间
//    int *a;
//    a=malloc(100);
//    if(a==NULL)
//    {
//        printf("it is null!\n");
//        exit(1);
//    }
//    else
//    {
//        printf("it is not null!the address is %d.\n",a);
//        for(int i=0;i<25;i++)
//        {
//            //a[i]=0;
//            printf("%d ",a[0]);
//            if((i+1)%5==0)
//                printf("\n");
//        }
//    }

//用动态内存分配制作字符串的复制
//    char * copy(char const * string)
//    {
//        char * new_sting;
//
//        new_sting=malloc(strlen(string)+1);
//        if(new_sting!=NULL)
//        {
//            strcpy(new_sting,string);
//        }

//        return new_sting;
//    }

//    char a[10]={"qwer"};
//    printf("%c\n",a[1]);

//*****************************************************************************
//*************************复试资料上的例题************************************
//*****************************************************************************
//例：
//    char ch[100]={"qwe{ewqe}}eqweqw"};
//    int i=0,count=0;
//    while(ch[i++]!='\0')
//    {
//        if(ch[i]=='}'&&count==0)
//           {
//            printf("NO!\n");
//            return 0;
//           }
//        else if(ch[i]=='{')
//            count++;
//        else if(ch[i]=='}'&&count!=0)
//            count--;
//    }
//    if(count==0)
//        printf("OK\n");
//    else
//        printf("NO\n");

    //1,2:
//    float a1,a2,a3,s,t,a;
//    scanf("%f %f %f",&a1,&a2,&a3);
//    s=a1+a2+a3;
//    t=a1*a2*a3;
//    a=s/3;
//    printf("%4.2f,%1.2f,%4.2f",s,t,a);

    //3:   转换为ASC||表中的单位数；（仅限0-9可以）
//    int a;   //例如：表中数字3对应的ASC||值为51，就是数字3+48后就对应表中的3了。。
//    char c;
//    printf("输入数字：\n");
//    scanf("%d",&a);
//    c=a+48;
//    putchar(c);

//4:输入半径，计算球体积
//    float r,s,v;
//    printf("输入半径：\n");
//    scanf("%f",&r);
//    s=4*PI*r*r;
//    v=(4/3)*PI*r*r*r;
//    printf("表面积：%f\n",s);
//    printf("体积：%f\n",v);

//5:输入几个变量，将其显示出来
//    char d;
//    float e;  //小数
//    char f[6]; //字符串
//    scanf("%c %f %s",&d,&e,f);
//    printf("%c,%f,%s",d,e,f);

//6。输出三个值中的最小值
//    int qiu_min(int a,int b,int c)
//    {
//        int min;
//        if(a>b)
//        {
//            min=b;
//            if(min<c)
//                return min;
//            else
//                return c;
//        }
//        else
//        {
//            min =a;
//            if(min<c)
//                return min;
//            else
//                return c;
//        }
//        return 0;
//    }
//    printf("最小值是；%d\n",qiu_min(5,5,3));

//7:大小写转化(还是ACS||那玩意转化。)
//    char c;
//    printf("输入字符：\n");
//    scanf("%c",&c);
//    if(c>='a'&&c<='z')
//        c=c-32;
//    else if(c>='A'&&c<='Z')
//        c=c+32;
//    printf("%c\n",c);

//8：计算分段函数 略

//9：加密字符串
    float x=3;

    printf("%f",x+3);

    printf("\n");
    printf("*****************************\n");
    printf("*********复试顺利************\n");
    return 0;
}
 //   int a=66;
