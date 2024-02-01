class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
      long long int ans = 0;
      for (int i = 0; i < n; i++){
          if(date%2 && !(car[i]%2)) ans += fine[i];
          else if (!(date%2) && car[i]%2) ans += fine[i];
      }
      return ans;
    }
};
