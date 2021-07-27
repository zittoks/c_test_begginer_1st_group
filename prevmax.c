int prevmax(int a, int b, int c, int d)
{
int max1, nomax1, max2, nomax2;
    if (a>b){
        max1 = a;
        nomax1 = b;
    }
    else{
        max1 = b;
        nomax1 = a;
    }
    if (c>d)
    {
        max2 = c;
        nomax2 = d;
    }
    else{
        max2 = d;
        nomax2 = c;
    }
    if (max1 > max2){
        if(max2 > nomax1){
            return max2;
        }
        else
        {
            return nomax1;
        }
    }
    else 
    {
        if(max1 > nomax2)
        {
            return max1; 
        }
        else
        {
return nomax2;
        }   
    }
}