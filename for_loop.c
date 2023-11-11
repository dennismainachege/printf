#ifndef FOR_LOOP
#define FOR_LOOP

for (int i = 0; format[i] != '\0'; i++)
{
	switch (format[i])
	{
		case '%':
			i++; /* Move to the next character after '%' */
			switch (format[i])
			{
				case 'c':
				{
					int character = va_arg(extras, int);

					printf("%c", character);
					break;
				}
				case 's':
				{
				char *character_string = va_arg(extras, char *);

					if (character_string != NULL)
					{
						printf("%s", character_string);
					}
					else
					{
						printf("(null)");
					}
					break;
				}
					default:
						printf("%%");
						break;
			}
				break;
			default:
				printf("%c", format[i]);
				break;
	}
}
#endif
