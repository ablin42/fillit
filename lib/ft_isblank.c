/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 01:10:23 by ablin             #+#    #+#             */
/*   Updated: 2017/12/05 01:12:44 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isblank(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}