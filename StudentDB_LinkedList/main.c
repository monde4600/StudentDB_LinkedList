#include <stdio.h>
#include <stdlib.h>
#include "app_config.h"
#include "fun.h"

int main()
{
    LinkHead * headadd= (void*)0;
    LinkBody * CurrNodeadd= (void*)0 ;
    Link_init(&headadd);
    int selection;
    while(1)
    {
        printf("\n1_for add student data :\n");
        printf("\n2_for display student data :\n");
        printf("\n3_for delet student data :\n");
        printf("\n4_for edit student data :\n");

        scanf("%d",&selection);
        int sID;
        switch(selection)
        {
        case 1:
            LinkCreatNode(headadd,&CurrNodeadd);
            printf("enter student ID: ");
            scanf("%d",&CurrNodeadd->ID);
            for(int i=0;i<CourseNumbers;i++)
            {
                printf("enter student grade for course %d: ",i+1);
                //CurrNodeadd->courses[i];
                scanf("%d",&CurrNodeadd->courses[i]);
            }
            break;
        case 2:

            printf("enter student ID: ");
            scanf("%d",&sID);
            if(Link_POP(headadd,sID,&CurrNodeadd))
                for(int i=0;i<CourseNumbers;i++)
                {
                    printf("student grade for course %d: ",i+1);
                    printf("%d\n",CurrNodeadd->courses[i]);
                }
            break;
        case 3:
            printf("enter student ID: ");
            scanf("%d",&sID);
            NodeDelet(headadd,sID);
            break;
        case 4:
            printf("enter student ID: ");
            scanf("%d",&sID);
            if(Link_POP(headadd,sID,&CurrNodeadd))
            {
                printf("enter new student ID: ");
                scanf("%d",&CurrNodeadd->ID);
                for(int i=0;i<CourseNumbers;i++)
                {
                    printf("enter student grade for course %d: ",i+1);
                //CurrNodeadd->courses[i];
                    scanf("%d",&CurrNodeadd->courses[i]);
                }
                break;
            }

        }
    }
    return 0;
}
