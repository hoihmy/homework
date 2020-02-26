//In 1 tam giác vuông cân rỗng
/* 
    Theo phân tích thì cái tam giác vuông rỗng này chỉ là một nửa hình vuông.
    Như vậy chỉ cần vẽ đường chéo, cạnh bên phải và đáy hình vuông.
    Thực hiện bằng 2 vòng lặp i và j (1 tới h)
    Khi j==1, in * ở bên cạnh phải của tam giác, j==i hoặc j==h hoặc i==h thì in '*' không thì in dấu trống.

    *                                                                                                                                                                                           
    **                                                                                                                                                                                          
    * *                                                                                                                                                                                         
    *  *                                                                                                                                                                                        
    ***** 
*/
#include<stdio.h>

void inTamGiacRong(int h) {
    int j, i =1;
    while(i <= h)
    {
        j = 1;
        while(j <= i)
        {
            if(j==1 || j==h || i==j || i==h) {
                printf("*");  
            }
            else {
  	            printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

void main()
{
    int h;
    printf("Nhap vao chieu cao : ");
    scanf("%d",&h);
    inTamGiacRong(h);
}