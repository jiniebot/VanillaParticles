class Jinie_RGD5 extends BuildingSuper
{
    Particle m_ParticleEffect;

    override void EEInit()
    {
        super.EEInit();
        if (GetGame().IsClient() || !GetGame().IsMultiplayer()) {
            m_ParticleEffect = Particle.PlayOnObject(ParticleList.RGD5, this);
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