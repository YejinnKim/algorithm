T = int(input())

for i in range(T):
  H, W, N = map(int, input().split())
  A = N % H
  B = N // H + 1

  if A == 0:
    A = H
    B -= 1

  print(A * 100 + B)