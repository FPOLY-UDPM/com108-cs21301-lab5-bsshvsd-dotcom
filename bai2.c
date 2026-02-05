/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [21301024]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

//Tạo hàm 

int main() {
    //Khai báo biến
    int nam;
    //Nhập dữ liệu

    printf("Nhap vao nam: ");
    scanf("%d", &nam);
    //Xử lý và xuất kết quả
    if ((nam % 400 == 0) || (nam % 4 ==
            0 && nam % 100 != 0)) {
            printf("%d la nam nhuan.\n", nam);
        } else {
            printf("%d khong phai la nam nhuan.\n", nam);
        }


    // //Gọi hàm trong hàm main 
        
    
    return 0;
}

