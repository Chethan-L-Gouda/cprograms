#include<stdio.h>
void main(){
    struct std
    {
        char name[20];
        int reg_no ;
        int mark[4];
        int total;
        float avg;
    };
    struct std student[100];
    int n;
    printf("Enter the number of students in the class : ");
    scanf("%d",&n);
    printf("Enter the student details(Name,reg_no,marks) :\n");
    for(int i =0;i<n;i++){
        scanf("%s%d",&student[i].name,&student[i].reg_no);
        printf("Enter the marks scored by the student : ");
        student[i].total=0;
        for(int j=0;j<5;j++){
            scanf("%d",&student[i].mark[j]);
            student[i].total  = student[i].total + student[i].mark[j];
        }
        student[i].avg = (float)student[i].total/5.0;
    }

    printf("---------------------------------------------------------\n");
    float classAvg=0;
    printf("Name\t\treg\tmark\t\t\t\t\ttotal\tavg\n");
    for(int i =0;i<n;i++){
        printf("%s\t\t%d\t",student[i].name,student[i].reg_no);
        for(int j=0;j<5;j++)
            printf("%d\t",student[i].mark[i]);
        printf("%d\t%f\n",student[i].total,student[i].avg);
        classAvg += student[i].avg;
    }
    classAvg /=n;
    printf("\n\n");
    printf("The average percentage of the class is %f\n\n",classAvg);
    printf("The studends who scored below average are : \n");
    for(int i =0;i<n;i++)
        if(student[i].avg < classAvg)
            printf("%s\t%d\n",student[i].name,student[i].reg_no);
}