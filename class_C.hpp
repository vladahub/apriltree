#ifndef Container_H
#define Container_H

#include <iostream>
#include <stdio.h>

class Container
{
public:
    // ����������� ������, ����� ����������� �����
    virtual void insert(int value) = 0;
    virtual bool exists(int value) = 0;
    virtual void remove(int value) = 0;
    // ��� ����� ������� �� ������������� �������� <<
    virtual void print() = 0;

    // ����������� ����������
    virtual ~Container();
};

#endif