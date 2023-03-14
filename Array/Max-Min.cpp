class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min , max ;
    	int  i ;
    	if(N % 2 == 0)
    	{
    	    if(A[0] < A[1])
    	    {
    	         min = A[0];
    	          max = A[1];
         	}
         	else{
    	          min = A[1];
    	          max = A[0];
    	         }
    	         i = 2;
    	}
    	else{
    	    min  = A[0];
    	    max = A[0];
    	    i = 1;
    	}
    	
    	while(i < N-1)
    	{
    	       if(A[i] > A[i+1])
    	       {
    	           if(A[i] > max)
    	           {
    	               max = A[i];
    	           }
    	           if(A[i+1] < min) min = A[i+1];
    	       }else{
    	           if(A[i+1] > max)
    	           {
    	               max = A[i+1];
    	           }
    	           if(A[i] < min) min = A[i];
    	       }
    	       i += 2;
    	       
    	}
    	return min + max;
    	
    	
    }

};
