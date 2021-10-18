#include <stdio.h>

int words(char string[]) {
	int n = 0;
	int s = 1;
	int i = 0;
	int sym = 0;
	while (string[i] == ' ' && string[i] != '\0') {
		i += 1;
		}

	while (string[i] != '\0') {
		sym = int(string[i]);
		if (((int(sym) < 65) || (int(sym) > 90 && int(sym) < 97) || (int(sym) > 122)) && int(sym) != 32 && int(sym) != 10) {
			
			if (int(sym) == 33 || int(sym) == 44 || int(sym) == 58 || int(sym) == 59) {
				
				if (string[i + 1] != ' ' && string[i + 1] != '\0') {
				
					while (string[i] != ' ') {
						i += 1;
					}
					s = 0;
				}
			}

			else {
				while (string[i] != ' ') {
					i += 1;
				}
				s = 0;
			}
		}
		if (string[i] != ' ') {
			s = 1;
		}
		if (string[i] == ' ' && s == 1) {
			n += 1;
			s = 0;
		}
		if (string[i] == ' ') {
			s = 0;
		}
		i += 1;
		}
	if (s != 0) {
		n += 1;
	}
	if (string[i - 2] == ' ') {
		n -= 1;
	}

	return n;
}
