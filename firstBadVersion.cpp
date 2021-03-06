// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 1, r = n, mid;
        while (1)
        {
            mid = l + (r - l) / 2;
            if (isBadVersion(mid))
            {
                if (mid == 1 || !isBadVersion(mid - 1))
                    return mid;
                else
                    r = mid - 1;
            }
            else
                l = mid + 1;
        }
    }
};