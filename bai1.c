/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [21301024]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// //Tạo hàm 
// int tenHam(so1, so2, so3){ 
// int max; 
// //Cách giải để tìm ra số lớn nhất 
// return max; 
// } 

int main() {
    //Khai báo biến
    int so1, so2, so3, max;
    //Nhập dữ liệu
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);
    // //Gọi hàm trong hàm main
    if (so1 >= so2 && so1 >= so3) {
        max = so1;
    } else if (so2 >= so1 && so2 >= so3) {
        max = so2;
    } else {
        max = so3;
    }
    printf("So lon nhat trong 3 so la: %d\n", max);
    // //ví dụ 
    // int soMax = temHam(3,5,10);
    printf("So lon nhat la: %d", max);
    


    
    return 0;
}