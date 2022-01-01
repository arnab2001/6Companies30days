#Your task is to complete this function
#Function should return complete string
def encode(arr):
    # Code here
    n=len(arr)
    prev_char=arr[0]
    res=""
    count=1
    for i in range(1,n):
        if prev_char==arr[i]:
            count=count+1
        else:
            res=res+prev_char+str(count)
            prev_char=arr[i]
            count=1
    res+=prev_char+str(count)
    return res


#{ 
#  Driver Code Starts
#Your code will prepended here
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        arr=input().strip()
        print (encode(arr))
# } Driver Code Ends
