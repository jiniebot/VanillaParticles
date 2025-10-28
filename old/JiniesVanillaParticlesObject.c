class WaterJetParticle extends BuildingSuper
{
    Particle m_ParticleEffect; // No need for 'ref' here

    override void EEInit()
    {
        super.EEInit();

        if (GetGame().IsClient() || !GetGame().IsMultiplayer()) {
            m_ParticleEffect = Particle.PlayOnObject(ParticleList.WATER_JET, this); // Replace with your particle
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
