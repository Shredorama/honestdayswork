class Animal_Tiger extends AnimalBase
{
override void RegisterHitComponentsForAI()
	{
		m_DefaultHitComponent = "Zone_Head";
		m_DefaultHitPositionComponent = "Pelvis";
		
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Head", 25);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Belly", 50);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Neck", 65);
		DayZAIHitComponentHelpers.RegisterHitComponent(m_HitComponentsForAI, "Zone_Legs", 70);
	}
}

