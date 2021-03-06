#ifndef BASEENTITY_H
#define BASEENTITY_H

#include "netvars.h"
#include "../framework/utils/crc32.h"

struct CCollisionProp;
class C_BaseCombatWeapon;

class C_BaseEntity : public IClientEntity
{
  public:
	bool IsPlayer();
	bool IsWeapon();
	bool IsPlantedC4();
	bool IsDefuseKit();

	NETVAR(float, simulationTime, "DT_BaseEntity", "m_flSimulationTime");
	ONETVAR(float, prevSimulationTime, "DT_BaseEntity", "m_flSimulationTime", 4);
	NETVAR(int, flags, "DT_BasePlayer", "m_fFlags");
	NETVAR(int, health, "DT_BasePlayer", "m_iHealth");
	NETVAR(LifeState, lifeState, "DT_BasePlayer", "m_lifeState");
	NETVAR(int, tickBase, "DT_BasePlayer", "m_nTickBase");
	NETVAR(vec3, aimPunchAngle, "DT_BasePlayer", "m_aimPunchAngle");
	NETVAR(vec3, punchAngle, "DT_BasePlayer", "m_vecPunchAngle");
	NETVAR(vec3, aimPunchAngleVel, "DT_BasePlayer", "m_aimPunchAngleVel");
	NETVAR(vec3, velocity, "DT_BasePlayer", "m_vecVelocity[0]");
	NETVAR(vec3, origin, "DT_BaseEntity", "m_vecOrigin");
	NETVAR(int, teamNum, "DT_BaseEntity", "m_iTeamNum");
	NETVAR(float, maxspeed, "DT_BasePlayer", "m_flMaxspeed");
	NETVAR(int, collisionGroup, "DT_BaseEntity", "m_CollisionGroup");
	NETVAR(vec3, mins, "DT_BaseEntity", "m_vecMins");
	NETVAR(vec3, maxs, "DT_BaseEntity", "m_vecMaxs");
	NETVAR(float, duckAmount, "DT_BasePlayer", "m_flDuckAmount");
	NETVAR(int, effects, "DT_BaseEntity", "m_fEffects");

	NETVAR(bool, clientSideAnimation, "DT_BaseAnimating", "m_bClientSideAnimation");
	ONETVAR(float, poseParameter, "DT_BaseAnimating", "m_ScaleType", x64x32(0x34, 0x28));

	NETVAR(bool, skybox3dFogEnable, "DT_BasePlayer", "m_skybox3d.fog.enable");
	NETVAR(float, skybox3dFogStart, "DT_BasePlayer", "m_skybox3d.fog.start");
	NETVAR(float, skybox3dFogEnd, "DT_BasePlayer", "m_skybox3d.fog.end");
	NETVAR(vec3, skybox3dOrigin, "DT_BasePlayer", "m_skybox3d.origin");
	NETVAR(int, skybox3dScale, "DT_BasePlayer", "m_skybox3d.scale");

	NETVAR(CHandle<C_BaseEntity>, observerTarget, "DT_BasePlayer", "m_hObserverTarget");
	NETVAR(CHandle<C_BaseCombatWeapon>, activeWeapon, "DT_BaseCombatCharacter", "m_hActiveWeapon");
};

class C_CSPlayer : public C_BaseEntity
{
  public:
	NETVAR(bool, hasDefuser, "DT_CSPlayer", "m_bHasDefuser");
	NETVAR(bool, gunGameImmunity, "DT_CSPlayer", "m_bGunGameImmunity");
	NETVAR(int, shotsFired, "DT_CSPlayer", "m_iShotsFired");
	NETVAR(vec3, eyeAngles, "DT_CSPlayer", "m_angEyeAngles[0]");
	NETVAR(vec3, angles, "DT_BaseEntity", "m_angRotation");
	NETVAR(int, armorValue, "DT_CSPlayer", "m_ArmorValue");
	NETVAR(bool, hasHelmet, "DT_CSPlayer", "m_bHasHelmet");
	NETVAR(bool, hasHeavyArmor, "DT_CSPlayer", "m_bHasHeavyArmor");
	NETVAR(bool, isScoped, "DT_CSPlayer", "m_bIsScoped");
	NETVAR(float, lowerBodyYawTarget, "DT_CSPlayer", "m_flLowerBodyYawTarget");
	NETVAR(float, flashDuration, "DT_CSPlayer", "m_flFlashDuration");
};

#endif
