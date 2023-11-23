char a[10], b[1000];
int i, j = 0, k = 0, num = 0, w = 0;
gets(a);
gets(b);
strlwr(a);
strlwr(b);
for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] == ' ' || b[i] == a[0])
	{
		if (b[i] == ' ')i++;
		w = 0;
		for (k = 0; k < strlen(a); k++)
		{
			if (a[k] == b[i + k])
			{
				int c = i + strlen(a);
				if (b[c] == ' ' || b[c] == '\0')
				{
					if (i != 0 && b[i - 1] == ' ')w = 0;
					else if (i == 0)w = 0;
					else
						w++;
				}
				else
					w++;
			}
			else
				w++;
		}
		if (w == 0)
			num++;
	}
}
printf("%d", num);
return 0;
}