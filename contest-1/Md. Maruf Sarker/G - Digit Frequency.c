// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/G
// Language: c
// Date: 2023-03-15
// Difficulty Rating: 

#include <stdio.h>

int main(){
    char str[1000];
    scanf("%s", str);

    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '0') zero++;
        if(str[i] == '1') one++;
        if(str[i] == '2') two++;
        if(str[i] == '3') three++;
        if(str[i] == '4') four++;
        if(str[i] == '5') five++;
        if(str[i] == '6') six++;
        if(str[i] == '7') seven++;
        if(str[i] == '8') eight++;
        if(str[i] == '9') nine++;
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
}
