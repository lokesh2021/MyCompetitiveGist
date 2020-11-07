t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort(reverse=True)
    if n == 1:
        print(a[0])
    else:        
        num1 = a[0]
        num2 = a[1]
        for i in range(2,n):
            if num1<=num2:
                num1+=a[i]
            else:
                num2+=a[i]
        if num1>=num2:
            print(num1)
        else:
            print(num2)