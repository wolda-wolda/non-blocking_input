#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    char ch2[100] = {0};

    while (1) {

        if (kbhit()) {

            // Stores the pressed key in ch
            ch = getch();
            fgets(ch2,100,stdin);
            fflush(stdin);
            for (int i = 99; i >= 0; i--) {
                if(ch2[i]!='\000'){
                    ch2[i+1]=ch2[i];
                }
            }
            ch2[0]=ch;
            break;
        }
    }
    printf("%s", ch2);
    return 0;
}