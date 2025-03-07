#include <stdio.h>
#include<stdlib.h>
#define Name_length 100

struct stu
{
    int ID;
    char name[Name_length];
    float*marks;
};

int main()
{
    int num_stu;
    printf("Enter the number of Students: ");
    scanf("%d",&num_stu);

    struct stu *s = (struct stu *)malloc(num_stu * sizeof(struct stu));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int *num_sub = (int *)malloc(num_stu * sizeof(int));
    if (num_sub == NULL) {
        printf("Memory allocation for number of subjects failed!\n");
        return 1;
    }

    for(int i=0;i<num_stu;i++){

     printf("Enter Info for student %d \n",i+1);
     printf("Enter ID: ");
     scanf("%d",&s[i].ID);
     printf("Enter name: ");
     scanf(" %[^\n]",&s[i].name);
    printf("Enter the number of subject for student %d: \n",i+1);
    scanf("%d",&num_sub[i]);
    s[i].marks = (float*)malloc(num_sub[i]*sizeof(float));
    if (s[i].marks == NULL){
        printf("Memory allocation for marks failed");
        return 1;
    }
    printf("Enter subject marks: \n",num_sub);
    for(int j=0;j<num_sub[i];j++){
        printf("Subject %d: ",j+1);
        scanf("%f",&s[i].marks[j]);//Use space while entering marks
        }
    }
    printf("Student imformation: \n");
    for(int i=0;i<num_stu;i++){
      float total = 0;
      float avg;

      for(int j=0;j<num_sub[i];j++){
        total=total+s[i].marks[j];
      }
      printf("Total number for student %d\n",i+1,total);
        avg=(float)total/num_sub[i];

    printf(" \nSummary:%d\n",i+1);
    printf("ID:%d\n",s[i].ID);
    printf("Name:%s\n",s[i].name);
    printf("Total Marks:%f\n",total);
    printf("Average:%.2f\n",avg);
    }


    return 0;
}
