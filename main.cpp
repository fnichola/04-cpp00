/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:51:37 by fnichola          #+#    #+#             */
/*   Updated: 2022/08/24 12:59:23 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
	(void)argc;

	std::string str(argv[1]);
	std::transform(str.begin(), str.end(), str.begin(), [] (unsigned char c) { return std::toupper(c); });
	std::cout << str << std::endl;
}
