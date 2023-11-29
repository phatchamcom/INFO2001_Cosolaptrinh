#include <stdio.h>


struct HocSinh {
    int maSinhVien;
    char hoVaTen[50];
    char ngayThangNamSinh[20];
    char queQuan[50];
    char gioiTinh[5];
    float diemTongKet;
};

int main() {
	

    struct HocSinh danhSachHocSinh[5];
    printf("CHUONG TRINH QUAN LY DANH SACH SINH VIEN\n");
    printf("MOI BAN NHAP SO LUONG SINH VIEN TRONG LOP HOC:");

	int i;
	int n;
	scanf("%d",&n);
    for ( i = 0; i < n; i++) {
        printf("Nhap thong tin cho hoc sinh %d:\n", i + 1);

        printf("Ma sinh vien: ");
        scanf("%d", &danhSachHocSinh[i].maSinhVien);

        printf("Ho va ten: ");
        scanf(" %[^\n]s", danhSachHocSinh[i].hoVaTen);

        printf("Ngay thang nam sinh: ");
        scanf(" %[^\n]s", danhSachHocSinh[i].ngayThangNamSinh);

        printf("Que quan: ");
        scanf(" %[^\n]s", danhSachHocSinh[i].queQuan);

        printf("Gioi tinh: ");
        scanf(" %[^\n]s", danhSachHocSinh[i].gioiTinh);

        printf("Diem tong ket: ");
        scanf("%f", &danhSachHocSinh[i].diemTongKet);

        printf("\n");
    }

    // In thông tin c?a các h?c sinh
    printf("Thong tin cua cac hoc sinh:\n");

    for ( i = 0; i < n; i++) {
        printf("Hoc sinh %d:\n", i + 1);
        printf("Ma sinh vien: %d\n", danhSachHocSinh[i].maSinhVien);
        printf("Ho va ten: %s\n", danhSachHocSinh[i].hoVaTen);
        printf("Ngay thang nam sinh: %s\n", danhSachHocSinh[i].ngayThangNamSinh);
        printf("Que quan: %s\n", danhSachHocSinh[i].queQuan);
        printf("Gioi tinh: %s\n", danhSachHocSinh[i].gioiTinh);
        printf("Diem tong ket: %.2f\n", danhSachHocSinh[i].diemTongKet);
        printf("\n");
    }
    // tim kiem sinh vien
    int Masinhviencantim;
    printf("Nhap Ma Sinh Vien Can Tim:");
    scanf("%d",&Masinhviencantim);
    
    for(i=0;i<n;i++){
    	if(Masinhviencantim==danhSachHocSinh[i].maSinhVien){
    		
	    	printf("Hoc sinh %d:\n", i + 1);
	        printf("Ma sinh vien: %d\n", danhSachHocSinh[i].maSinhVien);
	        printf("Ho va ten: %s\n", danhSachHocSinh[i].hoVaTen);
	        printf("Ngay thang nam sinh: %s\n", danhSachHocSinh[i].ngayThangNamSinh);
	        printf("Que quan: %s\n", danhSachHocSinh[i].queQuan);
	        printf("Gioi tinh: %s\n", danhSachHocSinh[i].gioiTinh);
	        printf("Diem tong ket: %.2f\n", danhSachHocSinh[i].diemTongKet);
			int found = 1;
	    	break; 
    		
    
		}else{
		
		 printf("Khong tim thay sinh vien co ma sinh viend\n");
		
		
	}
        
}
    	
    	
	
        
        
        
        
    
    
	
    



    return 0;
}

