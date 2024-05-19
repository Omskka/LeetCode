int strStr(char * haystack, char * needle){
    size_t	i;
	size_t	j;
    int len = strlen(haystack);

	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(i));
		i++;
	}
	return (-1);
}