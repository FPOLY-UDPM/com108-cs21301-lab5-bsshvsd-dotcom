/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [Ps48006]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm 

int main() {
    //Khai báo biến
    int a, b, temp;
    //Nhập dữ liệu
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);
    //Xử lý và xuất kết quả
    printf("Truoc hoan vi: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;

    // //Gọi hàm trong hàm main 
    printf("Sau hoan vi: a = %d, b = %d\n", a, b);

    
    return 0;
}

