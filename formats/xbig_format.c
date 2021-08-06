#include "../ft_printf.h"

static void less_with_width_pad(t_flag_count fc, char **r, char *str_pad)
{
	char	*tmp;

	if (**r == '-' && !(fc.less > 0))
	{
		**r = *str_pad;
		*str_pad = '-';
	}
	if (fc.less > 0)
		tmp = ft_strjoin(*r, str_pad);
	else
		tmp = ft_strjoin(str_pad, *r);
	free(str_pad);
	free(*r);
	*r = ft_strdup(tmp);
	free(tmp);
}

static void	width_padding(t_flag_count fc, int str_len, char **r)
{
	char	*str_pad;

	if ((fc.plus || fc.space) && **r != '-')
		fc.width--;
	if (fc.width > str_len && fc.width > 0)
	{
		str_pad = str_padding(str_len, fc);
		less_with_width_pad(fc, r, str_pad);
	}
}

char	*format_X(unsigned long num, t_flag_count fc)
{
	char	*r;
	char	*tmp;
	int		str_len;

	r = dec_to_hexa_X(num);
	str_len = ft_strlen(r);
	if (fc.cardinal > 0 && *r != '0')
		tmp = ft_strjoin("0X", r);
	else
		tmp = ft_strdup(r);
	free(r);
	r = tmp;
	width_padding(fc, str_len, &r);
	tmp = r;
	r = ft_strjoin(tmp, "\n\0");
	free(tmp);
	return (r);
}
