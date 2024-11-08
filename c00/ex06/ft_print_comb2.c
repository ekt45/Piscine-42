/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectomar <hectomar@student.42madrid.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:53:03 by hectomar          #+#    #+#             */
/*   Updated: 2024/07/04 11:36:48 by hectomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
    for(int i = 0;i<=98;i++){
        for(int j = i+1 ; j<=99;j++){
            char to_print [7] = {
                i/10+ '0',i%10 + '0',' ',j/10 + '0',j%10 + '0',',',' '
            };
            if(i == 98 && j == 99){
                write(1,to_print,5);
            }
            else{
                write(1,to_print,7);
            }
        }
    }
}