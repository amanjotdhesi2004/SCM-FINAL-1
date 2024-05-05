// QUESTIONS ON 2D ARRAY //
#include <stdio.h>
/** OUTPUT IN 2D ARRAY **/
/*
int main(){
    int arr[3][3]={{1,2,3},{3,4,5},{4,5,6}};
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
    }
    return 0;
}
*/
/** INPUT IN 2D ARRAY **/
/*
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&arr[i][j]);
            }
    }
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
    }
    return 0;
}
*/
/** By taking no of rows and Columns **/
/*
int main(){
    int r;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            }
    }
    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
    }
    return 0;
}
*/
/** Row Column in ARRAY 2D **/
/*
int main()
{
    int arr[][3]={{1,2,3},{4,5,6}};
    return 0;
}
*/
/** WAP to store roll no and marks obtained by 4 students side by side in a matrix **/
/*
int main()
{
    int arr[4][2]={1,80,2,76,3,78,4,79};
    printf("%d",arr[1][5]);
    return 0;
}
*/
/** WAP to add two matrices **/
/*
int main(){
    int r;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns :");
    scanf("%d",&c);
    int n[r][c];
    int arr[r][c],brr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                n[i][j]=arr[i][j]+ brr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/** Sum of Matrix **/
/*
int main(){
    int r;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns :");
    scanf("%d",&c);
    int arr[r][c],sum=0;
    printf("Enter elements of Matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of Matrix is %d.",sum);

}
*/
/** Transpose of a Matrix **/
/*
int main(){
    int r;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns :");
    scanf("%d",&c);
    int arr[r][c];
    //Entering Elements.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //Printing Array.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // Transpose of given Matrix:
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    // Printing Transpose:
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

void main(){
    int r;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns :");
    scanf("%d",&c);
    int arr[r][c];
    //Entering Elements.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //Printing Array.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //Transpose
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
// THANK YOU ALL//
// I hope you guys solved the questions //
