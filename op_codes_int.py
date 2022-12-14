#!/usr/bin/python3


# with open("op_codes.txt") as file:
# 	data = file.readlines()
# data = " ".join(data)
# # print(data)
# data = data.split(" ")
# print(data)
# # data = " ".join(data).split("\n")
# # print(data)
# answer = []
# for word in data:
# 	if word[0] == 'o' and word[1] == 'p':
# 		answer.append(word)
# with open("op_codes_output.txt", mode='a') as file:
# 	for word in answer:
# 		file.write(word + "\n")


with open("op_codes_output.txt") as file:
	data = file.read()
data = data.split("\n")

for file in data:
	with open(file, mode='w') as sub_file:
		sub_file.write('#include "monty.h"')