#include <stdio.h>

int main() {
    float radius, circumference, area;
    const float PI = 3.14;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}
