class Solution{
	public:
		bool searchMatrix(vector <vector<int>>&v, int t){
			for(int i=0;i<(int)v.size();i++)
			{
				if(binary_search(v[i].begin(),v[i].end(),t))
				return 1;
			}
			return 0;
		}
};
