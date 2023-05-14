#include<stdio.h>
#include<time.h>
int ar[10000000],temp;
void sort( int n )
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
}
int main()
{
    int n; // declaration of array and number of elements
    FILE *fileptr1,*fileptr2,*fileptr3;// declaration of file pointer

    fileptr1=fopen("input.txt","r"); // reading from the file 

    

    fscanf(fileptr1,"%d",&n); // reading number of elements

    for(int i=0;i<n;i++)
    {
        fscanf(fileptr1,"%d",&ar[i]); // scaning elements
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
        
    }
    printf("\n");
    fclose(fileptr1);

    clock_t t;
    t=clock();
    sort(n);
    t=clock()-t;
    double time_taken= ((double)t*1000)/ CLOCKS_PER_SEC;
    printf("%f",time_taken);
    
    fileptr2=fopen("output.txt","w");

    for(int i=0;i<n;i++)
    {
        printf("%d",ar[i]);
        printf(" ");
    }

    for(int i=0;i<n;i++)
    {
        fprintf(fileptr2,"%d ",ar[i]);
    
    }

    fclose(fileptr2);

    fileptr3=fopen("log.txt","a");

    fprintf(fileptr3,"\n%d  %f",n,time_taken);

    fclose(fileptr3);

    

    

    
    


}