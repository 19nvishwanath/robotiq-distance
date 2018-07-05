void goToPositionMM(double mm, int speed, int force){
	int pos = (int) mm / .4;
	if(pos > 255){
		pos = 255;
	}
	
	gripper.goToPosition(pos, speed, force);
}
