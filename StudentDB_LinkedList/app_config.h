#ifndef APP_CONFIG_H_INCLUDED
#define APP_CONFIG_H_INCLUDED

#define CourseNumbers       5


typedef struct body
{
    int ID;
    int courses[CourseNumbers];
    struct body * Next;
}LinkBody;

typedef struct
{
   LinkBody * Next ;
}LinkHead;

#endif // APP_CONFIG_H_INCLUDED
