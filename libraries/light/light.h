/*
 * light.h
 *
 *  Created on: 2013-10-16
 *      Author: wanhin
 */

#ifndef LIGHT_H_
#define LIGHT_H_


#endif /* LIGHT_H_ */

class Light {
public:
	bool status;
	int delay;
	//接口ID
	int interid;

	bool getStatus();
	void open();
	void close();
	void setdelay(int sec);
	void clear();
	int getInter();
public:
	Light(int interid);
	~Light(void);
};
