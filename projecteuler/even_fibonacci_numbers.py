def generate_fibonacci_numbers():
    list = [1,2]
    i = 0
    j = 1
    while max(list) <= 4000000:
        list.append(list[i] + list[j])
        i += 1
        j += 1

    list.pop()

    sum = 0
    for num in list:
        if num % 2 == 0:
            sum += num
    return sum


print(generate_fibonacci_numbers())
