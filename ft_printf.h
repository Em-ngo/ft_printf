#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

typedef struct s_struct
{
	int	g_return;

}		t_struct;

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, t_struct *j);
void	ft_putnbr_fd(int n, t_struct *j);
void	ft_putnbr_unsigned(unsigned int n, t_struct *j);
void	ft_putnbr_base(unsigned int nbr, char *base, t_struct *j);
void	ft_d_i(va_list convert, t_struct *j);
void	ft_c(va_list convert, t_struct *j);
void	ft_s(va_list convert, t_struct *j);
void	ft_u(va_list convert, t_struct *j);
void	ft_upper_x(va_list convert, t_struct *j);
void	ft_low_x(va_list convert, t_struct *j);
void	ft_putp(unsigned long nb, char *base, t_struct *j);
void	ft_p(va_list convert, t_struct *j);

#endif
