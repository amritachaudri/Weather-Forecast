#include<stdio.h>
main()
{

FILE *fp,*mon,*del,*d;
char c,e,m,s[100];
int i,n,month,date,range,ans,com;

fp=fopen("Places.txt","r");
while(c!=EOF)
{
    c=getc(fp);
    putchar(c);
}
fclose(fp);

printf("\nEnter a city: ");
scanf("%d",&n);

switch(n)
{
case 1:
    {
        mon=fopen("Months.txt","r");
        while(m!=EOF)
        {
            m=getc(mon);
            putchar(m);
        }
        fclose(mon);

        printf("\nEnter month: ");
        scanf("%d",&month);

        switch(month)
        {
        case 1:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelJan.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 2:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelFeb.txt","r");

                    for(i=0;i<56;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 3:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelMar.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 4:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelApr.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 5:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelMay.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 6:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelJun.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 7:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelJul.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 8:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelAug.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 9:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelSep.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 10:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelOct.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 11:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelNov.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 12:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("DelDec.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        }
        break;
    }
case 2:
    {
        mon=fopen("Months.txt","r");
        while(m!=EOF)
        {
            m=getc(mon);
            putchar(m);
        }
        fclose(mon);

        printf("\nEnter month: ");
        scanf("%d",&month);

        switch(month)
        {
        case 1:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiJan.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 2:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiFeb.txt","r");

                    for(i=0;i<56;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 3:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiMar.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 4:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiApr.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 5:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiMay.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 6:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiJun.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 7:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiJul.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 8:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiAug.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 9:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiSep.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 10:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiOct.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 11:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiNov.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 12:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JaiDec.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        }


        break;
    }
case 3:
    {
        mon=fopen("Months.txt","r");
        while(m!=EOF)
        {
            m=getc(mon);
            putchar(m);
        }
        fclose(mon);

        printf("\nEnter month: ");
        scanf("%d",&month);

        switch(month)
        {
        case 1:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamJan.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 2:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamFeb.txt","r");

                    for(i=0;i<56;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 3:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamMar.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 4:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamApr.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 5:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamMay.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 6:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamJun.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 7:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamJul.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 8:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamAug.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 9:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamSep.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 10:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamOct.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 11:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamNov.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 12:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("JamDec.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        }

        break;
    }
case 4:
    {
        mon=fopen("Months.txt","r");
        while(m!=EOF)
        {
            m=getc(mon);
            putchar(m);
        }
        fclose(mon);
        printf("\nEnter month: ");
        scanf("%d",&month);

        switch(month)
        {
        case 1:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunJan.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 2:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunFeb.txt","r");

                    for(i=0;i<56;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 3:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunMar.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 4:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunApr.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 5:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunMay.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 6:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunJun.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 7:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunJul.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 8:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunAug.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 9:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunSep.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 10:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunOct.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 11:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunNov.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 12:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("PunDec.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        }

        break;
    }
case 5:
    {
        mon=fopen("Months.txt","r");
        while(m!=EOF)
        {
            m=getc(mon);
            putchar(m);
        }
        fclose(mon);
        printf("\nEnter month: ");
        scanf("%d",&month);

        switch(month)
        {
        case 1:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamJan.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 2:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamFeb.txt","r");

                    for(i=0;i<56;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 3:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamMar.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 4:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamApr.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 5:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamMay.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 6:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamJun.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 7:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamJul.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        case 8:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamAug.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:45 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:6km/hr");
                }
                break;
            }
        case 9:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamSep.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:40 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:8km/hr");
                }
                break;
            }
        case 10:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamOct.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:35 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:4km/hr");
                }
                break;
            }
        case 11:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamNov.txt","r");

                    for(i=0;i<60;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:30 percent");
                    printf("\nprecipitation:1");
                    printf("\nwind speed:5km/hr");
                }
                break;
            }
        case 12:
            {
                printf("\nEnter date: ");
                scanf("%d",&date);
                range=(date*2);
                del=fopen("TamDec.txt","r");

                    for(i=0;i<62;i++)
                    {
                        fscanf(fp,"%c",&s[i]);
                    }
                    printf("Temperature is: ");
                    for(i=(range-2);i<range;i++)
                    {
                        printf("%c",s[i]);
                    }
                fclose(del);
                printf("\nDo you want to check further details?\n1. Yes\t2. No\n");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("\nhumidity:25 percent");
                    printf("\nprecipitation:0");
                    printf("\nwind speed:2km/hr");
                }
                break;
            }
        }

        break;
    }
}
printf("\nDo you want to compare the data of 3 years?\n1. Yes\t2. No\n");
scanf("%d",&com);
if(com==1)
{
    d=fopen("Compare.txt","r");
    while(e!=EOF)
    {
        e=getc(d);
        putchar(e);
    }
    fclose(d);
}
return 0;
}
