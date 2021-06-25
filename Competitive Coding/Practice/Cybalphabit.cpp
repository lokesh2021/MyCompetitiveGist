def f(num):
    final = 1
    for i in range(2, num+1):
        final = final * i  
    return final

def nPr(num, r):
    return (f(num) / (f(num - r)))
            
def countingPathsHire2020(num, x):
    return int(nPr(num-1,x-1)%(10**9+7))
    
