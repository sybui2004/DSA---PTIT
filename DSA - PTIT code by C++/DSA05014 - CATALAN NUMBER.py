# Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
# DSA05014 - CATALAN NUMBER
MOD = 10**9 + 7

def init():
    global f
    f = [0] * 105
    f[0] = 1
    for i in range(1, 101):
        for j in range(i):
            f[i] += f[j] * f[i - j - 1]

def solve():
    n = int(input())
    print(f[n])

def main():
    global f
    init()
    t = int(input())
    
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
