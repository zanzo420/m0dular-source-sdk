#ifndef SOURCEGLOBALVARS_H
#define SOURCEGLOBALVARS_H

class CGlobalVarsBase
{
  public:
	float realtime; // 0x0000
	int framecount; // 0x0004
	float absoluteframetime; // 0x0008
#ifdef SOURCE_CSGO_SDK
	float absoluteframestarttimestddev; // 0x000C
#endif
	float curtime; // 0x0010
	float frametime; // 0x0014
	int maxClients; // 0x0018
	int tickcount; // 0x001C
	float interval_per_tick; // 0x0020
	float interpolation_amount; // 0x0024
	int simTicksThisFrame; // 0x0028
	int network_protocol; // 0x002C
	void* pSaveData; // 0x0030
	bool client; // 0x0031
	bool remoteClient; // 0x0032
	int nTimestampNetworkingBase;
	int nTimestampRandomizeWindow;
};

#endif
