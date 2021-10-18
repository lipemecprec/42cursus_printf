/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:26:12 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/18 00:40:21 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FTPRINTF
# define LIB_FTPRINTF
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

/* \brief Prints to standard output a string formated with provided parameters
  \param char* String to be formatted
  \param ... parameters to be included on the string
*/
int		ft_printf(const char *str, ...);
char	*ft_charsjoin(char *s1, char *s2, char flag, int *s1len);
char	*ft_ctoa(char c); 
char	*ft_itoa_base(int n, int base, char flag);
char	*ft_ulitoa_base(long int nbr, int base, char flag);
char	*ft_stoa(char* s);
char  *ft_ptoa(long long p);
void	ft_putchars(char *str, int len);


#endif