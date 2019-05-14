#include "CBaseEntity.h"
#pragma once

class CBaseCombatCharacter : public CBaseEntity
{
	virtual bool C_BaseCombatCharacter__IsLookingTowardsEntity(const void* C_BaseEntity, float fovMaybe);
	virtual bool C_BaseCombatCharacter__IsLookingTowardsVector(const Vector &point, float fovMaybe);
	virtual bool C_BaseCombatCharacter__IsEntityInFOV(const void* C_BaseEntity);
	virtual bool C_BaseCombatCharacter__IsVectorInFOV(const Vector &point);
	virtual Vector* C_BaseCombatCharacter__IsLineOfSightClear(void* C_BaseEntity, int LineOfSightCheckType);
	virtual bool C_BaseCombatCharacter__IsLineOfSightClear(Vector &out, void* C_BaseEntity, int LineOfSightCheckType);
	virtual void C_BaseCombatCharacter__OnFootstep(const Vector &pos, bool unk, bool unk2);
	virtual void*C_BaseCombatCharacter__GetGroundSurface(void);
	virtual void*C_BaseCombatCharacter__GetFootstepSound(const char* unk, bool unk2, float unk3, bool unk4);
	virtual bool C_BaseCombatCharacter__AreFootstepsAudible(float unk, bool unk2);
	virtual bool C_BaseCombatCharacter__IsFootstepAudible(float unk, bool unk2);
	virtual float C_BaseCombatCharacter__GetFootstepRunThreshold(void);
	virtual bool C_BasePlayer__IsGhost(void);
	virtual void C_BaseCombatCharacter__UpdateParticles(void);
	virtual void C_BaseCombatCharacter__Weapon_OwnsThisType(const char*, int);
	virtual void C_BaseCombatCharacter__Weapon_GetSlot(const char*, int);
	virtual void C_BasePlayer__Weapon_Switch(void* C_BaseCombatWeapon, int);
	virtual void C_BaseCombatCharacter__GetActiveWeapon() = 0; // 300, added
	virtual void C_BasePlayer__OnAmmoCountChanged(int unk, unsigned int unk2, unsigned int unk3);
	virtual void C_BasePlayer__OnWearablesChanged(void);
};