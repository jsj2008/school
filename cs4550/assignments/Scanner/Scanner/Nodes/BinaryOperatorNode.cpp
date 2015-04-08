//
//  BinaryOperatorNode.cpp
//  Scanner
//
//  Created by Nate Armstrong on 3/16/15.
//  Copyright (c) 2015 Nate Armstrong. All rights reserved.
//

#include "Node.h"

BinaryOperatorNode::BinaryOperatorNode(ExpressionNode *l, ExpressionNode *r)
  : mLeft(l), mRight(r) {
    MSG("BinaryOperatorNode initializer");
}

BinaryOperatorNode::~BinaryOperatorNode() {
  MSG("BinaryOperatorNode deconstructor");
  delete mRight;
  delete mLeft;
}

// MARK: - LessNode

LessNode::LessNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("LessNode initializer");
}

int LessNode::Evaluate() {
  return mLeft < mRight;
}

// MARK: - LessEqualNode

LessEqualNode::LessEqualNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("LessEqualNode initializer");
}

int LessEqualNode::Evaluate() {
  return mLeft <= mRight;
}

// MARK: - GreaterNode

GreaterNode::GreaterNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("GreaterNode initializer");
}

int GreaterNode::Evaluate() {
  return mLeft > mRight;
}

// MARK: - GreaterEqualNode

GreaterEqualNode::GreaterEqualNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("GreaterEqualNode initializer");
}

int GreaterEqualNode::Evaluate() {
  return mLeft >= mRight;
}

// MARK: - EqualNode

EqualNode::EqualNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("EqualNode initializer");
}

int EqualNode::Evaluate() {
  return mLeft == mRight;
}

// MARK: - NotEqualNode

NotEqualNode::NotEqualNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("NotEqualNode initializer");
}

int NotEqualNode::Evaluate() {
  return mLeft != mRight;
}

// MARK: - OrNode

OrNode::OrNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("OrNode initializer");
}

int OrNode::Evaluate() {
  return mLeft || mRight;
}

// MARK: - AndNode

AndNode::AndNode(ExpressionNode *l, ExpressionNode *r)
  : BinaryOperatorNode(l, r) {
    MSG("AndNode initializer");
}

int AndNode::Evaluate() {
  return mLeft && mRight;
}
