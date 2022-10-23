class Solution {
    public boolean isAnagram(String s, String t) 
    {
        char arr[] = s.toCharArray();
        char brr[] = t.toCharArray();

        Arrays.sort(arr);
        Arrays.sort(brr);

        if(Arrays.equals(arr,brr))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}