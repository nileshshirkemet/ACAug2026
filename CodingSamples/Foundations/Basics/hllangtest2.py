m = int(input('Lower Limit: '))
n = int(input('Upper Limit: '))
if m <=n:
    sum = n * (n + 1) / 2 - (m - 1) * m / 2
    print('Result =', int(sum))
print('Goodbye!')

