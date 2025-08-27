#include <stdio.h>

int main() {
    float score = 78;   // กำหนดคะแนนสอบ midterm
    float final_score; // ตัวแปรเก็บคะแนนสุดท้าย

    if (score >= 50) { // ตรวจสอบว่าคะแนนสอบผ่านหรือไม่
        final_score = score * 1.05;   // คิดคะเเนนเพิ่มอีก 5% จากคะเเนนที่ได้
    } else { 
        final_score = score; // ไม่ได้คะแนนเพิ่ม
    }

    printf("Final score: %.2f\n", final_score); // แสดงผลคะแนนสุดท้ายเป็นทศนิยม 2 ตำแหน่ง
    printf("End of evaluation\n"); // แสดงข้อความจบการทำงาน

    return 0;
}