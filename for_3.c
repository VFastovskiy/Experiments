/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:07:20 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/14 19:07:23 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Демонстрация использования 2-х параметров цикла. */
#include <stdio.h>
#include <string.h>

void converge(char *targ, char *src);

int main(void)
{
  char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

  converge(target, "Это проверка функции converge().");
  printf("Строка-результат: %s\n", target);

  return 0;
} 

/* Эта функция копирует содержимое одной строки в
   другую, начиная с обоих концов и сходясь посередине. */
void converge(char *targ, char *src)
{
  int i, j; 

  printf("%s\n", targ);
  for(i=0, j=strlen(src); i<=j; i++, j--) {
    targ[i] = src[i];
    targ[j] = src[j];
    printf("%s\n", targ);
  }
}
