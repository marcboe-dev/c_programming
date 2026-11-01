#include <stdio.h>
  // void fortune_cookie(char msg[]) {
  //   printf("Message reads: %s\n", msg);
  //   printf("msg occupies: [%i] bytes\n", sizeof(msg));
  // }

    void skip(char *msg) {
        puts(msg + 6);
    }
int main() {
  // char quote[] = "Cookies make you fat!";

  // fortune_cookie(quote);

    // char s [] = "Hallo";
    // char *t = s;
    //
    // printf("%s\n", s);

    
    char *msg_from_amy = "Don't call me!";

    skip(msg_from_amy);


    return 0;
}
