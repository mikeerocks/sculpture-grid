/*
 * Block.h
 *
 *  Created on: Sep 4, 2024
 *      Author: micha
 */

#ifndef BLOCK_H_
#define BLOCK_H_

class Block {
private:
    double length;
    double thetaX;
    double thetaY;

public:
    // Constructor
    Block(double l = 0.0, double tx = 0.0, double ty = 0.0);

    // Getter functions
    double getLength() const;
    double getThetaX() const;
    double getThetaY() const;

    // Setter functions
    void setLength(double l);
    void setThetaX(double tx);
    void setThetaY(double ty);

    // Display function
    void display() const;
};

#endif /* BLOCK_H_ */
