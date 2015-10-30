#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


enum week{ sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main(){
    enum week today;
    today=wednesday;
    printf("%s day",today+1);
    return 0;
}
