// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*
	*	PRIMARY ATTRIBUTES
	*/
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Primary.Strength"), FString("Increases physical damage"));
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"), FString("Increases magical damage"));
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Primary.Resilience"), FString("Increases Armor and Armor Penetration"));
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Primary.Vigor"), FString("Increases Health"));

	/*
	*	VITAL ATTRIBUTES
	*/
	GameplayTags.Attributes_Vital_Health = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Vital.Health"), FString("Current Health"));
	GameplayTags.Attributes_Vital_Mana = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Vital.Mana"), FString("Current Mana"));

	/*
	*	SECONDARY ATTRIBUTES
	*/
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"), FString("Maximum amount of Health obtainable"));
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"), FString("Maximum amount of Mana obtainable"));
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), FString("Reduces damage taken, improves Block Chance"));
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"), FString("Ignores Percentage of enemy Armor, increases Critical Hit Chance"));
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"), FString("Chance to cut incoming damage in half"));
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitChance"), FString("Chance to double damage plus critical hit bonus"));
	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"), FString("Bonus damage added when a critical hit is scored"));
	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitResistance"), FString("Reduces Critical Hit Chance of attacking enemies"));
	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegeneration"), FString("Amount of Health regenerated every 1 second"));
	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegeneration"), FString("Amount of Mana regenerated every 1 second"));
	
	/*
	*	INPUT ATTRIBUTES
	*/
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("InputTag.LMB"), FString("InputTag for Left Mouse Button"));
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("InputTag.RMB"), FString("InputTag for Right Mouse Button"));
	GameplayTags.InputTag_1 = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("InputTag.1"), FString("InputTag for 1 key"));
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("InputTag.2"), FString("InputTag for 2 key"));
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("InputTag.3"), FString("InputTag for 3 key"));
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("InputTag.4"), FString("InputTag for 4 key"));

	/*
	*	DAMAGE TYPES
	*/
	GameplayTags.Damage = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Damage"), FString("Damage"));
	GameplayTags.Damage_Fire = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Damage.Fire"), FString("Fire damage type"));
	GameplayTags.Damage_Lightning = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Damage.Lightning"), FString("Lightning damage type"));
	GameplayTags.Damage_Arcane = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Damage.Arcane"), FString("Arcane damage type"));
	GameplayTags.Damage_Physical = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Damage.Physical"), FString("Physical damage type"));

	/*
	*	DAMAGE RESISTANCES
	*/
	GameplayTags.Attributes_Resistance_Fire = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Resistance.Fire"), FString("Fire damage resistance"));
	GameplayTags.Attributes_Resistance_Lightning = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Resistance.Lightning"), FString("Lightning damage resistance"));
	GameplayTags.Attributes_Resistance_Arcane = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Resistance.Arcane"), FString("Arcane damage resistance"));
	GameplayTags.Attributes_Resistance_Physical = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Attributes.Resistance.Physical"), FString("Physical damage resistance"));

	/*
	* MAP OF DAMAGE TYPES TO RESISTANCES
	*/
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Fire, GameplayTags.Attributes_Resistance_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Lightning, GameplayTags.Attributes_Resistance_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Arcane, GameplayTags.Attributes_Resistance_Arcane);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical, GameplayTags.Attributes_Resistance_Physical);


	/*
	* Effects
	*/
	GameplayTags.Effects_HitReact = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Effects.HitReact"), FString("HitReact"));

	/*
	* Abilities
	*/
	GameplayTags.Abilities_Attack = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Abilities.Attack"), FString("Attack Ability Tag"));

	/*
	* Montage
	*/
	GameplayTags.Montage_Attack_Weapon = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Montage.Attack.Weapon"), FString("Weapon"));
	GameplayTags.Montage_Attack_RightHand = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Montage.Attack.RightHand"), FString("RightHand"));
	GameplayTags.Montage_Attack_LeftHand = UGameplayTagsManager::Get()
		.AddNativeGameplayTag(FName("Montage.Attack.LeftHand"), FString("LeftHand"));
}
