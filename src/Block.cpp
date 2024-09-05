/*
 * Block.cpp
 *
 *  Created on: Sep 4, 2024
 *      Author: micha
 */

#include <iostream>
#include "Block.h"

Block::Block(double l, double tx, double ty)
        : length(l), thetaX(tx), thetaY(ty) {}

// Getter functions
double Block::getLength() const {
	return length;
}

double Block::getThetaX() const {
	return thetaX;
}

double Block::getThetaY() const {
	return thetaY;
}

// Setter functions
void Block::setLength(double l) {
	length = l;
}

void Block::setThetaX(double tx) {
	thetaX = tx;
}

void Block::setThetaY(double ty) {
	thetaY = ty;
}

// Display function
void Block::display() const {
	std::cout << "Block: Length = " << length
			  << ", ThetaX = " << thetaX
			  << ", ThetaY = " << thetaY << std::endl;
}


