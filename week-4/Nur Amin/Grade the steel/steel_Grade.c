#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int hardness, tensile_strength, grade;
        float carbon_content;
        scanf("%d %f %d", &hardness, &carbon_content, &tensile_strength);

        if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600) {
            grade = 10;
        }
        else if (hardness > 50 && carbon_content < 0.7) {
            grade = 9;
        }
        else if (carbon_content < 0.7 && tensile_strength > 5600) {
            grade = 8;
        }
        else if (hardness > 50 && tensile_strength > 5600) {
            grade = 7;
        }
        else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600) {
            grade = 6;
        }
        else {
            grade = 5;
        }
        printf("%d\n", grade);
    }

    return 0;
}

