#include <stdio.h>
#include <math.h>
int checkPrime(int n);

int main() {
    //Kiểm tra số nguyên tố
    //I: số nguyên n
    //P:
    //O: Yes if n is prime / else no
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    if (checkPrime(n))
        printf("Yes");
    else
        printf("No");
    return 0;
}

//Hàm kiểm tra SNT với độ phức tạp O(n) dựa vào định nghĩa 2 UC
//int checkPrime(int n) {
//    int count = 0; // dùng để kiểm tra số ước; =2 => snt
//    for (int i = 1; i <= n; i++)
//        if(n % i == 0)
//            count++;
//    if (count == 2)
//        return 1;
//    else
//        return 0;
//}

//O(logn)
int checkPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}
