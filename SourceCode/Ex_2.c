// Demo:
// n = 3
//   *                                                                                                                                                                                         
//  ***                                                                                                                                                                                        
// *****
// n = 5
//     *                                                                                                                                                                                       
//    ***                                                                                                                                                                                      
//   *****                                                                                                                                                                                     
//  *******                                                                                                                                                                                    
// *********

// Giải thích: Kí tự được in ra: * và " "
// Hàng trên có số lượng * luôn bé hơn hàng dưới 2 sao. => tính được số * từng bậc.
// Nhìn vào nửa bên trái từ trên xuống thì kí tự " " giảm đi 1 đến hàng cuối thì không còn. => tính được số " " từng bậc.

#include <stdio.h>

void inTamGiacDeu(int n) {
    int q = 0;
    while (n > 0) {
        for (int i=1; i < n; i++) {
            printf("%c", ' ');
        }
        for (int k=0; k <= q; k++) {
            printf("%c", '*');
        }
        n--;
        q += 2;
        printf("\n");
    }
}

void main() {
    int n;
    printf("Chuong trinh nay se in ra tam giac deu :)\n");
    printf("Nhap chieu cao tam giac cua ban: ");
    scanf("%d",&n);
    inTamGiacDeu(n);
}
