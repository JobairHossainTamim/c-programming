#include <stdio.h>

int main()
{

    int ft_mark, st_mark, final_mark;
    double total_marks;
    ft_mark = 80;
    st_mark = 74;
    final_mark = 97;
    total_marks = ft_mark / 4.0 + st_mark / 4.0 + final_mark / 2.0;
    printf("%0.0lf \n ", total_marks);
}