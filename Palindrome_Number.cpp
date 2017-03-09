bool isPalindrome(int x) 
{
	long long y = 0;
	int x_copy = x;
	while (x)
	{
		y *= 10;
		y+=(x % 10);
		x /= 10;
	}
	if (x_copy == y&&x_copy>=0)
		return true;
	else
		return false;
}
bool isPalindrome_LEET(int x) 
{
	if (x < 0 || x != 0 && x % 10 == 0) return false;
	int sum = 0;
	while (sum < x)
	{
		sum = sum * 10 + x % 10;
		x /= 10;
	}
	if (sum == x || x== sum / 10)
		return true;
	else return false;
}