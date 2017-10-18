#pragma once

namespace Input
{
	class input
	{
	public:
		input() { /*...*/ }
		template<typename T>
		operator T()
		{
			T temp;
			cin >> temp;
			return temp;
		}
	};
}

namespace Print
{
	void print_tail()
	{
		// Nothing, needed to end template recursion
	}

	template<typename First, typename ...Other>
	void print_tail(First&& first, Other&& ...other)
	{
		cout << " " << first;
		print_tail(other...);
	}

	template<typename First, typename ...Other>
	void print(First&& first, Other&& ...other)
	{
		cout << first;
		print_tail(other...);
		cout << endl;
	}
}