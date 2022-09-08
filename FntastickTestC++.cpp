#include <iostream>
#include <string>

void сase_alignment(std::string& text);
void сharacter_substitution(std::string& text);

int main()
{
	std::cout << "Hello World!\n";
	std::string text{};

	getline(std::cin, text);
	сase_alignment(text);
	сharacter_substitution(text);

	std::cout << text;
}

void сase_alignment(std::string& text)
{
	for (char& i : text)
	{
		if (i >= 'A' && i <= 'Z') { i += 32; }
	}
}

void  сharacter_substitution(std::string& text)
{
	const int length = static_cast<int>(text.length());

	for (int i = 0; i < length; i++)
	{
		bool flag_repeat = false;
		const char replacement_character = text[i];

		for (int j = i + 1; j < length; j++)
		{
			if (replacement_character == text[j])
			{
				text[j] = ')';
				text[i] = ')';
				flag_repeat = true;
			}
		}

		if (text[i] != ')' && text[i] != '(') { flag_repeat ? text[i] = ')' : text[i] = '('; }
	}
}
