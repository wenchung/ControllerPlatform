/*
 * CCartData.h
 *
 *  Created on: 2018年10月30日
 *      Author: jugo
 */

#pragma once
#include <vector>

typedef struct _ST_CART_NODE
{
	int nodeID;
	int clu;
	int dim;
	int size;
	int* cuiaQuestion;
} ST_CART_NODE;

//ST_CART_NODE cartDatas[] = { { 1, 0, 1, 1, {1 } }, { 2, 1, 2, 3, {1, 2, 3 } } };

std::vector<ST_CART_NODE> vcartData = { { 1, 0, 8, 3, (int[] ) { 2, 43, 4 } }, { 2, 0, 4, 2, (int[] ) { 2, 0 } }, { 4,
		0, 10, 3, (int[] ) { 14, 9, 2 } }, { 8, 0, 6, 3, (int[] ) { 1, 10, 13 } }, { 16, 0, -1, 0, (int[] ) { } }, { 17,
		0, 6, 1, (int[] ) { 16 } }, { 34, 0, -1, 0, (int[] ) { } }, { 35, 0, -1, 0, (int[] ) { } }, { 9, 0, 7, 1,
		(int[] ) { 17 } }, { 18, 0, 10, 1, (int[] ) { 29 } }, { 36, 0, -1, 0, (int[] ) { } }, { 37, 0, -1, 0,
		(int[] ) { } }, { 19, 0, -1, 0, (int[] ) { } }, { 5, 0, 13, 3, (int[] ) { 4, 7, 13 } }, { 10, 0, 7, 3,
		(int[] ) { 3, 8, 12 } }, { 20, 0, 11, 4, (int[] ) { 29, 14, 15, 11 } }, { 40, 0, 6, 3, (int[] ) { 14, 5,
				15 } }, { 80, 1, -1, 0, (int[] ) { } }, { 81, 0, -1, 0, (int[] ) { } }, { 41, 0, 6, 3, (int[] ) { 14, 5,
				17 } }, { 82, 0, -1, 0, (int[] ) { } }, { 83, 0, -1, 0, (int[] ) { } }, { 21, 0, 6, 3, (int[] ) { 1, 10,
				9 } }, { 42, 0, 7, 3, (int[] ) { 9, 17, 18 } }, { 84, 0, -1, 0, (int[] ) { } }, { 85, 0, 10, 2,
		(int[] ) { 14, 5 } }, { 170, 0, -1, 0, (int[] ) { } }, { 171, 0, -1, 0, (int[] ) { } }, { 43, 0, 9, 3,
		(int[] ) { 9, 16, 15 } }, { 86, 0, -1, 0, (int[] ) { } }, { 87, 0, 10, 3, (int[] ) { 29, 14, 8 } }, {
		174, 0, 7, 3, (int[] ) { 14, 17, 5 } }, { 348, 0, -1, 0, (int[] ) { } }, { 349, 0, 6, 3,
		(int[] ) { 16, 8, 14 } }, { 698, 0, -1, 0, (int[] ) { } }, { 699, 0, -1, 0, (int[] ) { } }, { 175, 0, 7,
		2, (int[] ) { 6, 15 } }, { 350, 0, 6, 3, (int[] ) { 8, 12, 4 } }, { 700, 0, -1, 0, (int[] ) { } }, { 701, 0,
		5, 1, (int[] ) { 19 } }, { 1402, 0, -1, 0, (int[] ) { } }, { 1403, 0, -1, 0, (int[] ) { } }, { 351, 0, -1, 0,
		(int[] ) { } }, { 11, 0, 13, 3, (int[] ) { 1, 20, 8 } }, { 22, 0, 8, 1, (int[] ) { 4 } }, { 44, 1, -1, 0,
		(int[] ) { } }, { 45, 0, 6, 3, (int[] ) { 9, 3, 1 } }, { 90, 0, -1, 0, (int[] ) { } }, { 91, 0, 9, 1,
		(int[] ) { 18 } }, { 182, 1, -1, 0, (int[] ) { } }, { 183, 0, -1, 0, (int[] ) { } }, { 23, 0, 13, 3,
		(int[] ) { 14, 29, 5 } }, { 46, 0, 6, 3, (int[] ) { 1, 5, 4 } },
		{ 92, 0, 7, 3, (int[] ) { 18, 17, 19 } }, { 184, 0, -1, 0, (int[] ) { } }, { 185, 0, 7, 4, (int[] ) { 15, 23,
						12, 22 } }, { 370, 0, -1, 0, (int[] ) { } }, { 371, 0, -1, 0, (int[] ) { } }, { 93, 0, 10, 3,
				(int[] ) { 14, 6, 19 } }, { 186, 0, 5, 2, (int[] ) { 24, 23 } }, { 372, 0, -1, 0, (int[] ) { } },
		{ 373, 0, -1, 0, (int[] ) { } }, { 187, 0, 9, 1, (int[] ) { 2 } }, { 374, 0, -1, 0, (int[] ) { } }, { 375, 0,
				-1, 0, (int[] ) { } }, { 47, 0, 11, 2, (int[] ) { 4, 14 } }, { 94, 0, 10, 2, (int[] ) { 7, 4 } }, { 188,
				0, 1, 1, (int[] ) { 1 } }, { 376, 0, -1, 0, (int[] ) { } }, { 377, 0, -1, 0, (int[] ) { } }, { 189, 0,
				-1, 0, (int[] ) { } }, { 95, 0, -1, 0, (int[] ) { } }, { 3, 1, 3, 1, (int[] ) { 1 } }, { 6, 0, 12, 3,
				(int[] ) { 19, 18, 13 } }, { 12, 0, 4, 1, (int[] ) { 1 } }, { 24, 0, 7, 3,
				(int[] ) { 13, 3, 10 } }, { 48, 0, 9, 2, (int[] ) { 18, 13 } }, { 96, 1, -1, 0, (int[] ) { } }, {
				97, 0, 10, 3, (int[] ) { 7, 11, 14 } }, { 194, 0, -1, 0, (int[] ) { } },
		{ 195, 0, -1, 0, (int[] ) { } }, { 49, 0, 6, 3, (int[] ) { 1, 11, 4 } },
		{ 98, 0, 10, 3, (int[] ) { 7, 11, 5 } }, { 196, 0, -1, 0, (int[] ) { } }, { 197, 0, -1, 0, (int[] ) { } }, { 99,
				0, 12, 1, (int[] ) { 18 } }, { 198, 0, 7, 1, (int[] ) { 15 } }, { 396, 0, -1, 0, (int[] ) { } }, { 397,
				0, -1, 0, (int[] ) { } }, { 199, 0, 10, 2, (int[] ) { 29, 1 } }, { 398, 1, -1, 0, (int[] ) { } }, { 399,
				0, 9, 3, (int[] ) { 4, 7, 18 } }, { 798, 0, 13, 3, (int[] ) { 7, 4, 13 } }, { 1596, 0, -1, 0,
				(int[] ) { } }, { 1597, 0, 7, 2, (int[] ) { 5, 6 } }, { 3194, 0, -1, 0, (int[] ) { } }, { 3195,
				0, -1, 0, (int[] ) { } }, { 799, 0, 7, 1, (int[] ) { 24 } }, { 1598, 0, -1, 0, (int[] ) { } }, { 1599,
				0, -1, 0, (int[] ) { } }, { 25, 0, 7, 3, (int[] ) { 7, 16, 19 } }, { 50, 0, 5, 3,
				(int[] ) { 24, 22, 23 } }, { 100, 0, -1, 0, (int[] ) { } }, { 101, 0, -1, 0, (int[] ) { } }, {
				51, 0, 7, 3, (int[] ) { 4, 8, 9 } }, { 102, 0, 9, 1, (int[] ) { 5 } }, { 204, 0, -1, 0, (int[] ) { } },
		{ 205, 0, 6, 2, (int[] ) { 10, 9 } }, { 410, 0, -1, 0, (int[] ) { } }, { 411, 0, -1, 0, (int[] ) { } }, { 103,
				0, -1, 0, (int[] ) { } }, { 13, 0, 12, 3, (int[] ) { 7, 23, 8 } }, { 26, 0, 11, 3,
				(int[] ) { 19, 16, 18 } }, { 52, 1, 13, 3, (int[] ) { 0, 2, 3 } }, { 104, 0, -1, 0,
				(int[] ) { } }, { 105, 1, 4, 2, (int[] ) { 2, 4 } }, { 210, 1, -1, 0, (int[] ) { } }, { 211, 1,
				7, 3, (int[] ) { 11, 8, 6 } }, { 422, 1, -1, 0, (int[] ) { } }, { 423, 1, -1, 0, (int[] ) { } }, { 53,
				0, 4, 1, (int[] ) { 1 } }, { 106, 0, 13, 3, (int[] ) { 4, 7, 8 } }, { 212, 0, 8, 1, (int[] ) { 3 } }, {
				424, 1, 12, 1, (int[] ) { 7 } }, { 848, 1, 5, 4, (int[] ) { 17, 19, 18, 20 } }, { 1696, 1, -1, 0,
				(int[] ) { } }, { 1697, 1, -1, 0, (int[] ) { } }, { 849, 0, -1, 0, (int[] ) { } }, { 425, 0, 11,
				3, (int[] ) { 13, 15, 2 } }, { 850, 1, -1, 0, (int[] ) { } }, { 851, 0, 7, 3,
				(int[] ) { 19, 14, 24 } }, { 1702, 0, -1, 0, (int[] ) { } }, { 1703, 0, 11, 3, (int[] ) { 23, 24,
						14 } }, { 3406, 1, -1, 0, (int[] ) { } }, { 3407, 0, 10, 3, (int[] ) { 15, 13, 23 } }, { 6814,
				0, -1, 0, (int[] ) { } }, { 6815, 0, 10, 3, (int[] ) { 0, 19, 18 } }, { 13630, 0, -1, 0, (int[] ) { } },
		{ 13631, 0, 7, 3, (int[] ) { 16, 3, 12 } }, { 27262, 1, -1, 0, (int[] ) { } }, { 27263, 0, 6, 3, (int[] ) { 13,
						16, 19 } }, { 54526, 0, -1, 0, (int[] ) { } }, { 54527, 0, 5, 2, (int[] ) { 21, 18 } }, {
				109054, 1, -1, 0, (int[] ) { } }, { 109055, 0, 6, 3, (int[] ) { 8, 3, 14 } }, { 218110, 0, -1, 0,
				(int[] ) { } }, { 218111, 0, -1, 0, (int[] ) { } }, { 213, 0, 10, 3, (int[] ) { 11, 29, 7 } }, {
				426, 0, 13, 3, (int[] ) { 18, 16, 24 } }, { 852, 0, 7, 3, (int[] ) { 10, 5, 11 } }, { 1704, 0, -1, 0,
				(int[] ) { } }, { 1705, 0, -1, 0, (int[] ) { } }, { 853, 0, 2, 1, (int[] ) { 1 } }, { 1706, 0, 6,
				3, (int[] ) { 4, 17, 12 } }, { 3412, 1, -1, 0, (int[] ) { } }, { 3413, 0, 7, 3, (int[] ) { 11, 17,
						15 } }, { 6826, 0, -1, 0, (int[] ) { } }, { 6827, 0, 13, 3, (int[] ) { 15, 19, 10 } }, { 13654,
				0, -1, 0, (int[] ) { } }, { 13655, 0, 9, 2, (int[] ) { 5, 23 } }, { 27310, 1, -1, 0, (int[] ) { } }, {
				27311, 0, 13, 3, (int[] ) { 11, 1, 2 } }, { 54622, 0, -1, 0, (int[] ) { } }, { 54623, 0, -1, 0,
				(int[] ) { } }, { 1707, 1, 12, 1, (int[] ) { 7 } }, { 3414, 1, 9, 3, (int[] ) { 18, 19, 10 } }, {
				6828, 0, -1, 0, (int[] ) { } }, { 6829, 1, 7, 3, (int[] ) { 15, 14, 11 } }, { 13658, 1, -1, 0,
				(int[] ) { } }, { 13659, 1, 13, 3, (int[] ) { 9, 15, 10 } }, { 27318, 1, -1, 0, (int[] ) { } }, {
				27319, 1, 6, 3, (int[] ) { 11, 17, 9 } }, { 54638, 0, -1, 0, (int[] ) { } }, { 54639, 1, 13, 2,
				(int[] ) { 3, 19 } }, { 109278, 0, -1, 0, (int[] ) { } }, { 109279, 1, -1, 0, (int[] ) { } }, {
				3415, 0, -1, 0, (int[] ) { } }, { 427, 0, 12, 1, (int[] ) { 7 } }, { 854, 0, 10, 3,
				(int[] ) { 0, 19, 18 } }, { 1708, 0, -1, 0, (int[] ) { } }, { 1709, 0, 13, 3, (int[] ) { 18, 24,
						16 } }, { 3418, 0, 6, 2, (int[] ) { 18, 3 } }, { 6836, 1, -1, 0, (int[] ) { } }, { 6837, 0, -1,
				0, (int[] ) { } }, { 3419, 0, 11, 3, (int[] ) { 11, 5, 7 } }, { 6838, 0, 6, 3,
				(int[] ) { 3, 8, 17 } }, { 13676, 0, -1, 0, (int[] ) { } }, { 13677, 0, 2, 1, (int[] ) { 1 } }, {
				27354, 0, -1, 0, (int[] ) { } }, { 27355, 1, -1, 0, (int[] ) { } }, { 6839, 0, 9, 3, (int[] ) { 4, 19,
						24 } }, { 13678, 1, -1, 0, (int[] ) { } }, { 13679, 0, 11, 4, (int[] ) { 15, 23, 13, 3 } }, {
				27358, 1, -1, 0, (int[] ) { } }, { 27359, 0, 7, 3, (int[] ) { 10, 7, 20 } }, { 54718, 0, -1, 0,
				(int[] ) { } }, { 54719, 0, -1, 0, (int[] ) { } }, { 855, 0, -1, 0, (int[] ) { } }, { 107, 0, 11,
				3, (int[] ) { 11, 4, 10 } }, { 214, 0, 6, 3, (int[] ) { 2, 6, 4 } },
		{ 428, 0, -1, 0, (int[] ) { } }, { 429, 0, -1, 0, (int[] ) { } }, { 215, 0, 10, 3, (int[] ) { 29, 11, 23 } }, {
				430, 0, 6, 3, (int[] ) { 5, 15, 19 } }, { 860, 0, -1, 0, (int[] ) { } }, { 861, 0, 0, 2,
				(int[] ) { 2, 4 } }, { 1722, 0, -1, 0, (int[] ) { } },
		{ 1723, 0, 13, 3, (int[] ) { 7, 29, 11 } }, { 3446, 1, -1, 0, (int[] ) { } }, { 3447, 0, -1, 0, (int[] ) { } },
		{ 431, 0, 11, 2, (int[] ) { 33, 23 } }, { 862, 1, -1, 0, (int[] ) { } },
		{ 863, 0, 7, 3, (int[] ) { 17, 7, 5 } }, { 1726, 0, -1, 0, (int[] ) { } }, { 1727, 0, 13, 3, (int[] ) { 16, 11,
						6 } }, { 3454, 0, -1, 0, (int[] ) { } }, { 3455, 0, 6, 3, (int[] ) { 5, 22, 19 } }, { 6910, 0,
				-1, 0, (int[] ) { } }, { 6911, 0, 7, 3, (int[] ) { 8, 13, 12 } }, { 13822, 0, -1, 0, (int[] ) { } }, {
				13823, 0, 6, 3, (int[] ) { 17, 20, 1 } }, { 27646, 0, -1, 0, (int[] ) { } }, { 27647, 0, -1, 0,
				(int[] ) { } }, { 27, 1, 2, 1, (int[] ) { 1 } }, { 54, 0, 11, 3, (int[] ) { 11, 5, 14 } }, { 108,
				0, 10, 3, (int[] ) { 18, 0, 19 } }, { 216, 0, 13, 2, (int[] ) { 21, 3 } }, { 432, 1, -1, 0,
				(int[] ) { } }, { 433, 0, 7, 3, (int[] ) { 19, 24, 22 } }, { 866, 0, -1, 0, (int[] ) { } }, {
				867, 0, 13, 1, (int[] ) { 7 } }, { 1734, 0, -1, 0, (int[] ) { } }, { 1735, 0, -1, 0, (int[] ) { } }, {
				217, 0, 12, 3, (int[] ) { 14, 15, 16 } }, { 434, 0, 10, 3, (int[] ) { 6, 14, 11 } }, { 868, 1, -1, 0,
				(int[] ) { } }, { 869, 0, 5, 2, (int[] ) { 19, 22 } }, { 1738, 1, -1, 0, (int[] ) { } }, { 1739,
				0, 7, 3, (int[] ) { 10, 6, 7 } }, { 3478, 0, -1, 0, (int[] ) { } }, { 3479, 0, 9, 3, (int[] ) { 16, 5,
						13 } }, { 6958, 0, -1, 0, (int[] ) { } }, { 6959, 0, 11, 1, (int[] ) { 11 } }, { 13918, 0, -1,
				0, (int[] ) { } }, { 13919, 0, 6, 3, (int[] ) { 9, 4, 12 } }, { 27838, 0, -1, 0, (int[] ) { } }, {
				27839, 0, 13, 2, (int[] ) { 7, 5 } }, { 55678, 1, -1, 0, (int[] ) { } }, { 55679, 0, -1, 0,
				(int[] ) { } }, { 435, 0, 10, 2, (int[] ) { 11, 29 } },
		{ 870, 0, 9, 3, (int[] ) { 11, 13, 19 } }, { 1740, 0, 6, 3, (int[] ) { 16, 14, 6 } }, { 3480, 0, -1, 0,
				(int[] ) { } }, { 3481, 0, 7, 3, (int[] ) { 4, 14, 9 } }, { 6962, 0, -1, 0, (int[] ) { } }, {
				6963, 0, -1, 0, (int[] ) { } }, { 1741, 1, 13, 1, (int[] ) { 11 } }, { 3482, 1, -1, 0, (int[] ) { } }, {
				3483, 0, -1, 0, (int[] ) { } }, { 871, 0, 11, 1, (int[] ) { 11 } }, { 1742, 0, 12, 2,
				(int[] ) { 2, 10 } }, { 3484, 1, -1, 0, (int[] ) { } }, { 3485, 0, 7, 2, (int[] ) { 12, 9 } }, {
				6970, 0, -1, 0, (int[] ) { } }, { 6971, 0, -1, 0, (int[] ) { } }, { 1743, 0, 12, 3, (int[] ) { 11, 10,
						24 } }, { 3486, 1, -1, 0, (int[] ) { } }, { 3487, 0, 13, 3, (int[] ) { 0, 18, 15 } }, { 6974, 0,
				9, 3, (int[] ) { 18, 15, 0 } }, { 13948, 0, -1, 0, (int[] ) { } }, { 13949, 0, 6, 2,
				(int[] ) { 16, 18 } }, { 27898, 0, -1, 0, (int[] ) { } }, { 27899, 0, -1, 0, (int[] ) { } }, {
				6975, 0, 10, 3, (int[] ) { 23, 8, 15 } }, { 13950, 0, -1, 0, (int[] ) { } }, { 13951, 0, 4, 2,
				(int[] ) { 1, 3 } }, { 27902, 0, 7, 3, (int[] ) { 8, 11, 4 } },
		{ 55804, 0, -1, 0, (int[] ) { } }, { 55805, 0, 6, 3, (int[] ) { 16, 20, 13 } }, { 111610, 0, -1, 0,
				(int[] ) { } }, { 111611, 0, 9, 3, (int[] ) { 8, 16, 19 } }, { 223222, 1, -1, 0, (int[] ) { } },
		{ 223223, 0, 13, 3, (int[] ) { 20, 1, 8 } }, { 446446, 1, -1, 0, (int[] ) { } }, { 446447, 0, 13, 3, (int[] ) {
						7, 4, 5 } }, { 892894, 0, 9, 3, (int[] ) { 29, 15, 18 } }, { 1785788, 1, -1, 0, (int[] ) { } },
		{ 1785789, 0, 7, 3, (int[] ) { 17, 13, 15 } }, { 3571578, 0, -1, 0, (int[] ) { } }, { 3571579, 0, 7, 3,
				(int[] ) { 18, 16, 6 } }, { 7143158, 0, -1, 0, (int[] ) { } }, { 7143159, 0, -1, 0,
				(int[] ) { } }, { 892895, 0, 7, 3, (int[] ) { 12, 14, 7 } }, { 1785790, 0, -1, 0, (int[] ) { } },
		{ 1785791, 0, 10, 3, (int[] ) { 6, 7, 9 } }, { 3571582, 0, -1, 0, (int[] ) { } }, { 3571583, 0, -1, 0,
				(int[] ) { } }, { 27903, 0, 12, 1, (int[] ) { 2 } }, { 55806, 1, -1, 0, (int[] ) { } }, { 55807,
				0, 6, 3, (int[] ) { 9, 4, 6 } }, { 111614, 0, -1, 0, (int[] ) { } }, { 111615, 0, 9, 2, (int[] ) { 32,
						18 } }, { 223230, 1, -1, 0, (int[] ) { } }, { 223231, 0, 7, 3, (int[] ) { 4, 6, 10 } }, {
				446462, 0, -1, 0, (int[] ) { } }, { 446463, 0, 9, 3, (int[] ) { 4, 0, 6 } }, { 892926, 0, -1, 0,
				(int[] ) { } }, { 892927, 0, -1, 0, (int[] ) { } }, { 109, 1, 11, 3, (int[] ) { 23, 18, 8 } }, {
				218, 1, 1, 1, (int[] ) { 1 } }, { 436, 1, 6, 3, (int[] ) { 15, 19, 9 } }, { 872, 1, -1, 0,
				(int[] ) { } }, { 873, 1, 12, 3, (int[] ) { 14, 29, 2 } }, { 1746, 1, -1, 0, (int[] ) { } }, {
				1747, 1, -1, 0, (int[] ) { } }, { 437, 1, -1, 0, (int[] ) { } }, { 219, 1, 12, 3,
				(int[] ) { 11, 10, 16 } }, { 438, 1, 11, 2, (int[] ) { 10, 29 } }, { 876, 0, -1, 0,
				(int[] ) { } }, { 877, 1, 13, 3, (int[] ) { 0, 2, 19 } }, { 1754, 0, -1, 0, (int[] ) { } }, {
				1755, 1, 10, 3, (int[] ) { 15, 23, 2 } }, { 3510, 0, -1, 0, (int[] ) { } }, { 3511, 1, 1, 2, (int[] ) {
						1, 3 } }, { 7022, 1, 13, 3, (int[] ) { 13, 4, 7 } }, { 14044, 1, 10, 3, (int[] ) { 11, 5, 9 } },
		{ 28088, 1, -1, 0, (int[] ) { } }, { 28089, 1, 7, 3, (int[] ) { 17, 13, 4 } },
		{ 56178, 0, -1, 0, (int[] ) { } }, { 56179, 1, 9, 2, (int[] ) { 18, 10 } }, { 112358, 0, -1, 0, (int[] ) { } },
		{ 112359, 1, 5, 2, (int[] ) { 19, 18 } }, { 224718, 1, -1, 0, (int[] ) { } },
		{ 224719, 1, -1, 0, (int[] ) { } }, { 14045, 1, 7, 2, (int[] ) { 10, 6 } }, { 28090, 1, -1, 0, (int[] ) { } }, {
				28091, 1, -1, 0, (int[] ) { } }, { 7023, 1, 13, 4, (int[] ) { 13, 5, 11, 10 } }, { 14046, 1, -1, 0,
				(int[] ) { } }, { 14047, 1, -1, 0, (int[] ) { } }, { 439, 0, 10, 3, (int[] ) { 0, 18, 16 } }, {
				878, 0, 5, 2, (int[] ) { 21, 24 } }, { 1756, 0, -1, 0, (int[] ) { } }, { 1757, 0, 12, 3, (int[] ) { 2,
						5, 3 } }, { 3514, 1, -1, 0, (int[] ) { } }, { 3515, 0, 7, 3, (int[] ) { 19, 17, 4 } }, { 7030,
				0, -1, 0, (int[] ) { } }, { 7031, 0, 6, 3, (int[] ) { 17, 3, 8 } }, { 14062, 1, -1, 0, (int[] ) { } }, {
				14063, 0, 13, 3, (int[] ) { 29, 15, 14 } }, { 28126, 1, -1, 0, (int[] ) { } }, { 28127, 0, -1, 0,
				(int[] ) { } }, { 879, 1, 11, 3, (int[] ) { 19, 33, 21 } }, { 1758, 1, -1, 0, (int[] ) { } }, {
				1759, 1, 4, 1, (int[] ) { 1 } }, { 3518, 1, 12, 3, (int[] ) { 14, 29, 2 } }, { 7036, 1, 7, 3, (int[] ) {
						18, 19, 17 } }, { 14072, 0, -1, 0, (int[] ) { } }, { 14073, 1, 9, 3, (int[] ) { 18, 8, 15 } }, {
				28146, 1, -1, 0, (int[] ) { } }, { 28147, 1, 10, 3, (int[] ) { 4, 19, 6 } }, { 56294, 0, -1, 0,
				(int[] ) { } }, { 56295, 1, 1, 1, (int[] ) { 1 } }, { 112590, 1, 6, 3, (int[] ) { 1, 16, 8 } }, {
				225180, 1, -1, 0, (int[] ) { } }, { 225181, 1, 10, 3, (int[] ) { 8, 23, 32 } }, { 450362, 0, -1, 0,
				(int[] ) { } }, { 450363, 1, 10, 3, (int[] ) { 29, 13, 15 } },
		{ 900726, 1, -1, 0, (int[] ) { } }, { 900727, 1, 6, 3, (int[] ) { 5, 15, 4 } }, { 1801454, 1, -1, 0,
				(int[] ) { } }, { 1801455, 1, 9, 4, (int[] ) { 7, 4, 29, 11 } }, { 3602910, 1, -1, 0,
				(int[] ) { } }, { 3602911, 1, -1, 0, (int[] ) { } }, { 112591, 1, 6, 3, (int[] ) { 2, 14, 11 } },
		{ 225182, 0, -1, 0, (int[] ) { } }, { 225183, 1, 11, 3, (int[] ) { 15, 2, 24 } }, { 450366, 1, -1, 0,
				(int[] ) { } }, { 450367, 1, 5, 1, (int[] ) { 21 } }, { 900734, 1, -1, 0, (int[] ) { } }, {
				900735, 1, -1, 0, (int[] ) { } }, { 7037, 1, 11, 3, (int[] ) { 2, 15, 13 } }, { 14074, 1, 6, 3,
				(int[] ) { 11, 1, 10 } }, { 28148, 1, -1, 0, (int[] ) { } }, { 28149, 1, -1, 0, (int[] ) { } }, {
				14075, 0, 10, 3, (int[] ) { 3, 1, 15 } }, { 28150, 0, -1, 0, (int[] ) { } }, { 28151, 0, 12, 3,
				(int[] ) { 24, 3, 25 } }, { 56302, 1, -1, 0, (int[] ) { } }, { 56303, 0, 9, 3, (int[] ) { 19, 15,
						3 } }, { 112606, 1, -1, 0, (int[] ) { } }, { 112607, 0, 6, 3, (int[] ) { 5, 15, 18 } }, {
				225214, 0, -1, 0, (int[] ) { } }, { 225215, 0, 11, 3, (int[] ) { 16, 24, 32 } }, { 450430, 1, -1, 0,
				(int[] ) { } }, { 450431, 0, 1, 1, (int[] ) { 1 } }, { 900862, 1, 9, 3, (int[] ) { 9, 2, 22 } },
		{ 1801724, 0, -1, 0, (int[] ) { } }, { 1801725, 1, 7, 3, (int[] ) { 16, 5, 10 } }, { 3603450, 1, -1, 0,
				(int[] ) { } }, { 3603451, 0, 9, 3, (int[] ) { 23, 29, 11 } }, { 7206902, 0, -1, 0,
				(int[] ) { } }, { 7206903, 0, 6, 3, (int[] ) { 13, 14, 16 } }, { 14413806, 1, -1, 0,
				(int[] ) { } }, { 14413807, 0, 10, 2, (int[] ) { 11, 19 } },
		{ 28827614, 1, -1, 0, (int[] ) { } }, { 28827615, 0, 9, 3, (int[] ) { 6, 7, 5 } }, { 57655230, 0, 6, 3,
				(int[] ) { 2, 17, 8 } }, { 115310460, 1, -1, 0, (int[] ) { } }, { 115310461, 0, -1, 0,
				(int[] ) { } }, { 57655231, 1, 13, 3, (int[] ) { 7, 19, 2 } }, { 115310462, 1, -1, 0,
				(int[] ) { } }, { 115310463, 0, -1, 0, (int[] ) { } }, { 900863, 0, 13, 3,
				(int[] ) { 5, 19, 18 } }, { 1801726, 0, -1, 0, (int[] ) { } }, { 1801727, 0, 7, 3, (int[] ) { 17,
						4, 9 } }, { 3603454, 0, -1, 0, (int[] ) { } },
		{ 3603455, 0, 5, 4, (int[] ) { 17, 23, 18, 22 } }, { 7206910, 1, -1, 0, (int[] ) { } }, { 7206911, 0, -1, 0,
				(int[] ) { } }, { 3519, 0, 12, 3, (int[] ) { 15, 31, 24 } }, { 7038, 1, -1, 0, (int[] ) { } }, {
				7039, 0, 11, 3, (int[] ) { 13, 2, 16 } }, { 14078, 1, -1, 0, (int[] ) { } }, { 14079, 0, 7, 3,
				(int[] ) { 2, 14, 22 } }, { 28158, 0, -1, 0, (int[] ) { } }, { 28159, 0, 6, 3, (int[] ) { 5, 12,
						14 } }, { 56318, 0, -1, 0, (int[] ) { } }, { 56319, 0, 10, 3, (int[] ) { 5, 10, 21 } }, {
				112638, 0, -1, 0, (int[] ) { } }, { 112639, 0, 6, 3, (int[] ) { 16, 6, 19 } }, { 225278, 1, -1, 0,
				(int[] ) { } }, { 225279, 0, 12, 3, (int[] ) { 9, 3, 33 } }, { 450558, 1, -1, 0, (int[] ) { } },
		{ 450559, 0, 7, 3, (int[] ) { 10, 20, 12 } }, { 901118, 1, -1, 0, (int[] ) { } }, { 901119, 0, 7, 3, (int[] ) {
						16, 15, 7 } }, { 1802238, 0, -1, 0, (int[] ) { } }, { 1802239, 0, 10, 3,
				(int[] ) { 29, 11, 1 } }, { 3604478, 0, -1, 0, (int[] ) { } }, { 3604479, 0, 6, 3, (int[] ) { 3,
						13, 18 } }, { 7208958, 0, -1, 0, (int[] ) { } }, { 7208959, 0, 11, 2, (int[] ) { 32, 24 } }, {
				14417918, 1, -1, 0, (int[] ) { } }, { 14417919, 0, 7, 3, (int[] ) { 4, 5, 17 } }, { 28835838, 0, -1, 0,
				(int[] ) { } }, { 28835839, 0, -1, 0, (int[] ) { } }, { 55, 1, 12, 3, (int[] ) { 21, 1, 22 } }, {
				110, 0, 12, 1, (int[] ) { 1 } }, { 220, 0, -1, 0, (int[] ) { } }, { 221, 0, -1, 0, (int[] ) { } }, {
				111, 1, 13, 3, (int[] ) { 0, 24, 19 } }, { 222, 0, -1, 0, (int[] ) { } }, { 223, 1, 12, 3, (int[] ) {
						16, 11, 9 } }, { 446, 1, 10, 1, (int[] ) { 7 } }, { 892, 1, 12, 1, (int[] ) { 11 } }, { 1784, 1,
				-1, 0, (int[] ) { } }, { 1785, 1, -1, 0, (int[] ) { } }, { 893, 1, -1, 0, (int[] ) { } }, { 447, 1, 10,
				3, (int[] ) { 7, 16, 11 } }, { 894, 1, 9, 3, (int[] ) { 29, 5, 19 } }, { 1788, 1, 6, 3, (int[] ) {
						9, 18, 8 } }, { 3576, 0, -1, 0, (int[] ) { } }, { 3577, 1, 12, 3, (int[] ) { 14, 29, 6 } }, {
				7154, 1, 7, 3, (int[] ) { 14, 18, 11 } }, { 14308, 1, -1, 0, (int[] ) { } }, { 14309, 1, 6, 3,
				(int[] ) { 17, 2, 12 } }, { 28618, 1, -1, 0, (int[] ) { } }, { 28619, 1, -1, 0, (int[] ) { } }, {
				7155, 1, 13, 2, (int[] ) { 14, 11 } }, { 14310, 1, -1, 0, (int[] ) { } }, { 14311, 1, -1, 0,
				(int[] ) { } }, { 1789, 1, 6, 3, (int[] ) { 10, 1, 20 } }, { 3578, 1, -1, 0, (int[] ) { } }, {
				3579, 1, 7, 3, (int[] ) { 10, 17, 20 } }, { 7158, 1, -1, 0, (int[] ) { } }, { 7159, 1, 7, 3, (int[] ) {
						6, 16, 7 } }, { 14318, 1, -1, 0, (int[] ) { } }, { 14319, 1, 12, 2, (int[] ) { 5, 6 } }, {
				28638, 1, -1, 0, (int[] ) { } }, { 28639, 1, -1, 0, (int[] ) { } }, { 895, 1, 7, 2, (int[] ) { 5, 3 } },
		{ 1790, 1, -1, 0, (int[] ) { } }, { 1791, 1, 6, 3, (int[] ) { 6, 15, 11 } }, { 3582, 1, 5, 3, (int[] ) { 18, 24,
						21 } }, { 7164, 0, -1, 0, (int[] ) { } }, { 7165, 1, -1, 0, (int[] ) { } }, { 3583, 1, 4, 2,
				(int[] ) { 1, 2 } }, { 7166, 1, 13, 3, (int[] ) { 6, 14, 2 } }, { 14332, 1, 7, 3, (int[] ) { 6,
						8, 20 } }, { 28664, 0, -1, 0, (int[] ) { } }, { 28665, 1, 5, 3, (int[] ) { 17, 22, 20 } }, {
				57330, 1, -1, 0, (int[] ) { } }, { 57331, 1, -1, 0, (int[] ) { } }, { 14333, 1, 0, 1, (int[] ) { 3 } },
		{ 28666, 1, -1, 0, (int[] ) { } }, { 28667, 1, 10, 4, (int[] ) { 4, 5, 29, 1 } }, { 57334, 1, 12, 3, (int[] ) {
						4, 24, 20 } }, { 114668, 0, -1, 0, (int[] ) { } }, { 114669, 1, 9, 3, (int[] ) { 5, 13, 3 } }, {
				229338, 0, -1, 0, (int[] ) { } }, { 229339, 1, 13, 4, (int[] ) { 11, 4, 7, 5 } }, { 458678, 1, 7, 3,
				(int[] ) { 11, 9, 6 } }, { 917356, 1, -1, 0, (int[] ) { } }, { 917357, 1, 6, 3, (int[] ) { 3, 9,
						16 } }, { 1834714, 1, -1, 0, (int[] ) { } }, { 1834715, 1, 9, 3, (int[] ) { 23, 18, 7 } }, {
				3669430, 1, -1, 0, (int[] ) { } }, { 3669431, 1, 6, 3, (int[] ) { 8, 7, 10 } }, { 7338862, 1, -1, 0,
				(int[] ) { } }, { 7338863, 1, -1, 0, (int[] ) { } }, { 458679, 1, -1, 0, (int[] ) { } }, { 57335,
				1, 7, 3, (int[] ) { 6, 7, 9 } }, { 114670, 1, -1, 0, (int[] ) { } }, { 114671, 1, 6, 3, (int[] ) { 4,
						13, 16 } }, { 229342, 1, -1, 0, (int[] ) { } }, { 229343, 1, 7, 3, (int[] ) { 23, 10, 8 } }, {
				458686, 1, -1, 0, (int[] ) { } }, { 458687, 1, 9, 3, (int[] ) { 4, 11, 18 } }, { 917374, 1, -1, 0,
				(int[] ) { } }, { 917375, 1, 5, 2, (int[] ) { 18, 22 } }, { 1834750, 1, -1, 0, (int[] ) { } }, {
				1834751, 1, 13, 3, (int[] ) { 4, 7, 29 } }, { 3669502, 1, -1, 0, (int[] ) { } }, { 3669503, 1, -1, 0,
				(int[] ) { } }, { 7167, 0, -1, 0, (int[] ) { } }, { 7, 1, 8, 1, (int[] ) { 3 } }, { 14, 1, 7, 3,
				(int[] ) { 15, 4, 13 } }, { 28, 1, 5, 3, (int[] ) { 22, 17, 24 } }, { 56, 1, 9, 3, (int[] ) { 4,
						9, 11 } }, { 112, 1, -1, 0, (int[] ) { } }, { 113, 1, 9, 2, (int[] ) { 5, 14 } }, { 226, 1, -1,
				0, (int[] ) { } }, { 227, 1, -1, 0, (int[] ) { } }, { 57, 1, -1, 0, (int[] ) { } }, { 29, 1, 6, 3,
				(int[] ) { 15, 8, 3 } }, { 58, 1, 9, 3, (int[] ) { 5, 7, 29 } }, { 116, 1, 7, 3, (int[] ) { 16,
						20, 8 } }, { 232, 1, -1, 0, (int[] ) { } }, { 233, 1, 7, 2, (int[] ) { 14, 10 } }, { 466, 1, -1,
				0, (int[] ) { } }, { 467, 1, -1, 0, (int[] ) { } }, { 117, 1, -1, 0, (int[] ) { } }, { 59, 1, 7, 3,
				(int[] ) { 6, 18, 3 } }, { 118, 1, 9, 3, (int[] ) { 4, 0, 2 } }, { 236, 1, 10, 2, (int[] ) { 7,
						29 } }, { 472, 1, -1, 0, (int[] ) { } }, { 473, 1, -1, 0, (int[] ) { } }, { 237, 1, -1, 0,
				(int[] ) { } }, { 119, 1, -1, 0, (int[] ) { } }, { 15, 1, 11, 3, (int[] ) { 7, 18, 19 } }, { 30,
				1, 10, 3, (int[] ) { 0, 16, 18 } }, { 60, 1, -1, 0, (int[] ) { } }, { 61, 1, 7, 3,
				(int[] ) { 1, 10, 7 } }, { 122, 1, -1, 0, (int[] ) { } }, { 123, 1, 11, 1, (int[] ) { 7 } }, {
				246, 1, 10, 3, (int[] ) { 4, 5, 10 } }, { 492, 1, -1, 0, (int[] ) { } }, { 493, 1, 6, 3, (int[] ) { 4,
						5, 12 } }, { 986, 1, -1, 0, (int[] ) { } }, { 987, 1, 7, 3, (int[] ) { 14, 20, 4 } }, { 1974, 1,
				-1, 0, (int[] ) { } }, { 1975, 1, 9, 3, (int[] ) { 4, 29, 7 } }, { 3950, 1, 12, 3,
				(int[] ) { 5, 7, 11 } }, { 7900, 1, 6, 3, (int[] ) { 13, 7, 14 } }, { 15800, 1, -1, 0,
				(int[] ) { } }, { 15801, 1, -1, 0, (int[] ) { } }, { 7901, 1, -1, 0, (int[] ) { } }, { 3951, 1,
				-1, 0, (int[] ) { } }, { 247, 1, 7, 3, (int[] ) { 8, 15, 18 } }, { 494, 1, 5, 3,
				(int[] ) { 18, 24, 23 } }, { 988, 1, -1, 0, (int[] ) { } }, { 989, 1, -1, 0, (int[] ) { } }, {
				495, 1, 9, 1, (int[] ) { 29 } }, { 990, 1, -1, 0, (int[] ) { } }, { 991, 1, -1, 0, (int[] ) { } }, { 31,
				1, 11, 3, (int[] ) { 13, 23, 8 } }, { 62, 1, 6, 2, (int[] ) { 11, 3 } },
		{ 124, 1, -1, 0, (int[] ) { } }, { 125, 1, -1, 0, (int[] ) { } }, { 63, 1, 3, 1, (int[] ) { 2 } }, { 126, 1, 10,
				3, (int[] ) { 18, 0, 23 } }, { 252, 0, 9, 3, (int[] ) { 1, 0, 3 } }, { 504, 1, 11, 3, (int[] ) { 29,
						5, 10 } }, { 1008, 0, -1, 0, (int[] ) { } }, { 1009, 1, 7, 2, (int[] ) { 18, 22 } }, { 2018, 0,
				-1, 0, (int[] ) { } }, { 2019, 1, -1, 0, (int[] ) { } }, { 505, 0, -1, 0, (int[] ) { } }, { 253, 1, 7,
				3, (int[] ) { 16, 5, 21 } }, { 506, 1, 9, 3, (int[] ) { 4, 17, 11 } }, { 1012, 1, -1, 0,
				(int[] ) { } }, { 1013, 1, 11, 3, (int[] ) { 29, 2, 6 } }, { 2026, 1, -1, 0, (int[] ) { } }, {
				2027, 1, 6, 2, (int[] ) { 2, 5 } }, { 4054, 1, -1, 0, (int[] ) { } }, { 4055, 1, -1, 0, (int[] ) { } },
		{ 507, 1, 9, 3, (int[] ) { 2, 0, 18 } }, { 1014, 1, 10, 3, (int[] ) { 9, 14, 15 } }, { 2028, 1, -1, 0,
				(int[] ) { } }, { 2029, 1, -1, 0, (int[] ) { } }, { 1015, 1, 10, 3, (int[] ) { 16, 19, 24 } }, {
				2030, 0, -1, 0, (int[] ) { } }, { 2031, 1, 11, 3, (int[] ) { 21, 24, 33 } }, { 4062, 1, -1, 0,
				(int[] ) { } }, { 4063, 1, 6, 3, (int[] ) { 5, 12, 6 } }, { 8126, 1, 10, 3,
				(int[] ) { 8, 9, 15 } }, { 16252, 0, -1, 0, (int[] ) { } }, { 16253, 1, 11, 2,
				(int[] ) { 25, 10 } }, { 32506, 0, -1, 0, (int[] ) { } }, { 32507, 1, 5, 3,
				(int[] ) { 19, 17, 21 } }, { 65014, 1, 11, 3, (int[] ) { 14, 11, 6 } }, { 130028, 1, -1, 0,
				(int[] ) { } }, { 130029, 1, -1, 0, (int[] ) { } }, { 65015, 1, 11, 2, (int[] ) { 14, 16 } }, {
				130030, 1, -1, 0, (int[] ) { } }, { 130031, 1, -1, 0, (int[] ) { } }, { 8127, 1, 1, 1, (int[] ) { 1 } },
		{ 16254, 1, 10, 3, (int[] ) { 2, 21, 8 } }, { 32508, 0, -1, 0, (int[] ) { } }, { 32509, 1, 7, 3, (int[] ) { 19,
						4, 20 } }, { 65018, 1, -1, 0, (int[] ) { } }, { 65019, 1, 5, 4, (int[] ) { 18, 19, 21, 22 } }, {
				130038, 1, 7, 3, (int[] ) { 3, 8, 13 } }, { 260076, 1, -1, 0, (int[] ) { } }, { 260077, 1, 9, 3,
				(int[] ) { 8, 25, 33 } }, { 520154, 0, -1, 0, (int[] ) { } }, { 520155, 1, 11, 2,
				(int[] ) { 1, 9 } }, { 1040310, 0, -1, 0, (int[] ) { } }, { 1040311, 1, 12, 3, (int[] ) { 5, 29,
						4 } }, { 2080622, 1, -1, 0, (int[] ) { } }, { 2080623, 1, 6, 3, (int[] ) { 8, 4, 10 } }, {
				4161246, 0, -1, 0, (int[] ) { } }, { 4161247, 1, 9, 3, (int[] ) { 11, 5, 13 } }, { 8322494, 1, -1, 0,
				(int[] ) { } }, { 8322495, 1, -1, 0, (int[] ) { } }, { 130039, 1, 6, 3, (int[] ) { 10, 13, 4 } },
		{ 260078, 1, -1, 0, (int[] ) { } }, { 260079, 1, 10, 3, (int[] ) { 6, 3, 29 } }, { 520158, 1, -1, 0,
				(int[] ) { } }, { 520159, 1, 6, 3, (int[] ) { 3, 2, 15 } }, { 1040318, 1, -1, 0, (int[] ) { } },
		{ 1040319, 1, 9, 3, (int[] ) { 29, 9, 5 } }, { 2080638, 0, -1, 0, (int[] ) { } }, { 2080639, 1, 7, 3, (int[] ) {
						6, 15, 11 } }, { 4161278, 1, -1, 0, (int[] ) { } }, { 4161279, 1, 10, 4,
				(int[] ) { 14, 7, 13, 4 } }, { 8322558, 1, 11, 3, (int[] ) { 16, 15, 3 } }, { 16645116, 1, -1, 0,
				(int[] ) { } }, { 16645117, 1, -1, 0, (int[] ) { } }, { 8322559, 1, -1, 0, (int[] ) { } }, {
				16255, 1, 7, 3, (int[] ) { 13, 20, 19 } }, { 32510, 1, -1, 0, (int[] ) { } }, { 32511, 1, 11, 1,
				(int[] ) { 3 } }, { 65022, 0, -1, 0, (int[] ) { } }, { 65023, 1, 7, 3, (int[] ) { 12, 14, 18 } },
		{ 130046, 1, -1, 0, (int[] ) { } }, { 130047, 1, 11, 3, (int[] ) { 15, 16, 2 } }, { 260094, 1, 12, 4, (int[] ) {
						14, 10, 1, 4 } }, { 520188, 1, -1, 0, (int[] ) { } }, { 520189, 1, 5, 2, (int[] ) { 20, 24 } },
		{ 1040378, 1, -1, 0, (int[] ) { } }, { 1040379, 1, -1, 0, (int[] ) { } }, { 260095, 1, 7, 3,
				(int[] ) { 3, 6, 17 } }, { 520190, 0, -1, 0, (int[] ) { } }, { 520191, 1, 9, 3, (int[] ) { 6, 9,
						10 } }, { 1040382, 0, -1, 0, (int[] ) { } }, { 1040383, 1, 0, 1, (int[] ) { 2 } }, { 2080766, 1,
				11, 3, (int[] ) { 14, 4, 9 } }, { 4161532, 1, -1, 0, (int[] ) { } },
		{ 4161533, 1, -1, 0, (int[] ) { } }, { 2080767, 0, -1, 0, (int[] ) { } }, { 127, 1, 6, 3,
				(int[] ) { 9, 4, 13 } }, { 254, 1, -1, 0, (int[] ) { } }, { 255, 1, 7, 3,
				(int[] ) { 3, 23, 19 } }, { 510, 1, -1, 0, (int[] ) { } }, { 511, 1, 6, 1, (int[] ) { 2 } }, {
				1022, 1, -1, 0, (int[] ) { } }, { 1023, 1, -1, 0, (int[] ) { } } };

