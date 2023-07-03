
int is_prime_naive(long p){
    for (int i = 3 ; i <= p-1 ; i ++){
        if (p % i == 0){
            return 1;
        }
    }
    return 0;
}