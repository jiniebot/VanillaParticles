class Jinie_EXPLOSION_GRENADE_ICE extends BuildingSuper
{
    Particle m_ParticleEffect;

    override void EEInit()
    {
        super.EEInit();
        if (GetGame().IsClient() || !GetGame().IsMultiplayer()) {
            m_ParticleEffect = Particle.PlayOnObject(ParticleList.EXPLOSION_GRENADE_ICE, this);
        }
    }

    override void EEDelete(EntityAI parent)
    {
        super.EEDelete(parent);
        if (!GetGame().IsMultiplayer() || GetGame().IsClient()) {
            if (m_ParticleEffect) {
                m_ParticleEffect.Stop();
                m_ParticleEffect = null;
            }
        }
    }
};