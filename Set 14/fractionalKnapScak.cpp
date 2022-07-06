class Solution
{
    public:
    bool static comp(Item a , Item b)
    {
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n )
    {
    //   sort on the basis on value per weight in kg
    double ans=0;
    sort(arr, arr+n,comp);
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<W)
        {
            ans+=(double)arr[i].value;
            W=W-arr[i].weight;
        }
        else
        {
            // we need to take fraction of weight
            ans+=(double)(W*arr[i].value)/(double)(arr[i].weight);
            break;
        }
    }
    return ans;
    }
        
};