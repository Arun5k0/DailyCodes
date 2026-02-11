l = list(map(int,input().split()))
search = int(input())
low =  0
high = len(l)-1
flag = 0
while (low <= high):
    mid=(low+high)//2
    if(l[mid] == search):
        flag=1
        print("I found my element at",mid,"index")
        break
    elif(search > l[mid]):
        low =  mid + 1
    elif(search < l[mid]):
        high = mid-1
if (flag == 0):
    print("elment is not found")
