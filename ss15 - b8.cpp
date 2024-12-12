#include <stdio.h> 
#include <string.h>
void vietHoaChuCaiDau(char a[]){
    for(int i = 0; i < strlen(a); i++){
        if(i == 0 || (i > 0 && a[i-1] == ' ')){ 
            if(a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] - 32;    
        }
		else {
            if(a[i] >= 'A' && a[i] <= 'Z'){
                a[i] = a[i] + 32;    
            }    
        }
    }
}
int main(){ 
    char a[100];
    printf("Nhap vao chuoi ky tu: "); 
    gets(a);
    printf("\nChuoi vua nhap la: %s", a);
    vietHoaChuCaiDau(a);
    printf("\nChuoi la: %s", a);
}
