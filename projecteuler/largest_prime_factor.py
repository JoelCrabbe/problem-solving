def largest_prime_factor(n):
    prime_factors = set()
    divisor = 2
    while divisor <= n:
        if n % divisor == 0:
            prime_factors.add(divisor)
            n /= divisor
        else:
            divisor += 1
    
    return max(prime_factors)


print(largest_prime_factor(13195))




