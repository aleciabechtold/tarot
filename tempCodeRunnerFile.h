#define TAROT_DECK_H

static const char* tarot_deck[78] = {
    //major arcana 0 - 21
    "The Fool", "The Magician", "The High Priestess", "The Empress",
    "The Emperor","The Hierophant","The Lovers","The Chariot",
    "Strength","The Hermit","Wheel of Fortune","Justice",
    "The Hanged Man","Death","Temperance","The Devil","The Tower",
    "The Star", "The Moon","The Sun","Judgment","The World",
    //wands = Goals, new ventures, personal power, or creativity
    //22-35
    "Ace of Wands","Two of Wands","Three of Wands","Four of Wands",
    "Five of Wands","Six of Wands","Seven of Wands","Eight of Wands",
    "Nine of Wands","Ten of Wands","Page of Wands","Knight of Wands",
    "Queen of Wands","King of Wands",
    //cups = Matters of the heart, emotional fulfillment, and personal connections.
    //36-49
    "Ace of Cups","Two of Cups","Three of Cups","Four of Cups",
    "Five of Cups","Six of Cups","Seven of Cups","Eight of Cups",
    "Nine of Cups","Ten of Cups","Page of Cups","Knight of Cups",
    "Queen of Cups","King of Cups",
    //swords = Thoughts, mental clarity, ethical dilemmas, or struggles.
    //50-63
    "Ace of Swords","Two of Swords","Three of Swords","Four of Swords",
    "Five of Swords","Six of Swords","Seven of Swords","Eight of Swords",
    "Nine of Swords","Ten of Swords","Page of Swords","Knight of Swords",
    "Queen of Swords","King of Swords",
    //pentacles = Career, finances, physical well-being, and tangible outcomes.
    //64-77
    "Ace of Pentacles","Two of Pentacles","Three of Pentacles","Four of Pentacles",
    "Five of Pentacles","Six of Pentacles","Seven of Pentacles",
    "Eight of Pentacles","Nine of Pentacles","Ten of Pentacles",
    "Page of Pentacles","Knight of Pentacles","Queen of Pentacles",
    "King of Pentacles"
};

static const char* arc_tarot_meaning[22] = {//major arcana upright
    "New beginnings, spontaneity, freedom, innocence.",
    "Manifestation, resourcefulness, power, inspired action.",
    "Intuition, mystery, spiritual wisdom, the subconscious.",
    "Abundance, nurturing, femininity, creativity, nature.",
    "Authority, stability, structure, leadership, protection.",
    "Tradition, spirituality, conformity, education.",
    "Love, harmony, choices, alignment of values, partnerships.",
    "Willpower, determination, success, control.",
    "Inner strength, courage, patience, compassion.",
    "Introspection, solitude, wisdom, inner guidance.","Change, cycles, fate, luck, turning points.",
    "Fairness, truth, accountability, law, cause and effect.",
    "Surrender, letting go, new perspectives, pause.",
    "Transformation, endings, release, new beginnings."
    "Balance, moderation, harmony, patience, purpose.",
    "Addiction, materialism, bondage, temptation, shadow self.",
    "Sudden upheaval, chaos, revelation, destruction.",
    "Hope, renewal, inspiration, spirituality, serenity.",
    "Illusion, intuition, fear, the subconscious, mystery.",
    "Joy, success, positivity, vitality, enlightenment.","Reflection, reckoning, awakening, renewal, accountability.",
    "Completion, wholeness, achievement, unity, travel.",
};

static const char* minor_arc[56] = {//minor arcana upright
    //wands 
    "New beginnings, inspiration, potential.","Planning, making decisions, future vision.",
    "Progress, expansion, looking ahead.","Celebration, harmony, stability.","Conflict, competition, differing opinions.","Victory, recognition, achievement.",
    "Standing your ground, perseverance, defense.","Swift action, progress, rapid movement.","Resilience, courage, persistence.",
    "Responsibility, burden, hard work.","Creativity, enthusiasm, discovery.","Passion, action, adventure.",
    "Confidence, determination, vibrancy.","Leadership, vision, ambition.",
    //cups
    "New emotions, love, spiritual awakening.",
    "Partnership, mutual respect, harmony.","Celebration, friendship, community.","Contemplation, reevaluation, apathy.",
    "Grief, loss, focusing on the negative.","Nostalgia, innocence, reunions.","Choices, imagination, illusions.",
    "Letting go, seeking deeper meaning.","Contentment, satisfaction, emotional fulfillment.","Harmony, happiness, emotional bliss.",
    "Creativity, intuition, emotional exploration.","Romance, charm, following your heart.","Compassion, emotional stability, intuition.",
    "Emotional balance, wisdom, compassion.",
    //swords
    "Clarity, breakthroughs, new ideas.","Difficult decisions, indecision, stalemate.",
    "Heartbreak, betrayal, sorrow.","Rest, recovery, contemplation.","Conflict, betrayal, tension.","Transition, healing, moving on.",
    "Strategy, deception, cunning.","Restriction, fear, feeling trapped.","Anxiety, fear, sleepless nights.",
    "Endings, betrayal, pain.","Curiosity, new ideas, communication.","Ambition, action, determination.",
    "Independence, truth, clear communication.","Authority, intellect, strategic thinking.",
    //pentacles
    "Prosperity, opportunity, new beginnings.",
    "Balance, adaptability, time management.","Collaboration, skill development, teamwork.","Security, saving, control.",
    "Financial hardship, insecurity, exclusion.","Generosity, charity, balance in giving.","Patience, investment, reevaluation.",
    "Mastery, dedication, hard work.","Independence, financial security, luxury.","Legacy, wealth, family, long-term success.",
    "Ambition, learning, new opportunities.","Hard work, reliability, perseverance.","Nurturing, practicality, financial stability.","Wealth, leadership, stability."
};

static const char* arc_tarot_meaning_rev[22] = {//major arcana reverse
    "Recklessness, naïveté, poor decisions, lack of direction.","Manipulation, trickery, lack of focus, untapped potential.",
    "Secrets, disconnected intuition, withdrawal, superficiality.","Dependence, smothering, creative blocks, neglect.","Tyranny, rigidity, lack of discipline, controlling behavior.",
    "Rebellion, personal belief, nonconformity, freedom.","Imbalance, disconnection, misalignment, difficult decisions.",
    "Lack of direction, self-doubt, aggression, loss of control.","Self-doubt, weakness, insecurity, lack of confidence.",
    "Isolation, loneliness, withdrawal, lost inner guidance.","Bad luck, resistance to change, lack of control, setbacks.",
    "Dishonesty, unfairness, lack of accountability, corruption.","Stagnation, delays, resistance, indecision.",
    "Resistance to change, stagnation, fear of endings.","Imbalance, excess, lack of long-term vision, discord.",
    "Freedom, release, overcoming addictions, reclaiming power.","Avoidance of disaster, fear of change, lingering chaos.",
    "Hopelessness, lack of faith, discouragement, disconnect.","Clarity, deception revealed, overcoming fears, confusion.",
    "Temporary sadness, lack of clarity, ego, overexposure.","Self-doubt, avoidance, lack of self-awareness, stagnation.","Incompletion, lack of closure, delays, unfulfilled goals."
};

static const char* rev_minor_arc[56]={//minor arcana reverse
    //wands
    "Missed opportunities, delays, lack of inspiration.",
    "Indecision, fear of change, restricted options.","Delayed progress, lack of foresight, obstacles.",
    "Instability, cancelled plans, tension.","Avoiding conflict, inner harmony, resolving disputes.",
    "Lack of recognition, failure, arrogance.", "Overwhelmed, giving up, feeling attacked.","Delays, chaos, lack of clarity.",
    "Burnout, exhaustion, defensiveness.","Overwhelmed, releasing burdens, delegating.","Setbacks, impulsiveness, lack of direction.",
    "Recklessness, impatience, scattered energy.","Insecurity, selfishness, jealousy.","Domineering, ineffective leadership, impulsiveness.",
    //cups
    "Emotional block, missed opportunities, suppressed feelings.","Imbalance, tension, breakups.","Overindulgence, isolation, gossip.",
    "Awareness, seizing opportunities, renewed interest.","Acceptance, forgiveness, moving forward.","Stuck in the past, unrealistic expectations.",
    "Clarity, reality check, making decisions.","Fear of moving on, avoidance, indecision.","Dissatisfaction, indulgence, unmet desires.",
    "Disconnection, family conflict, unrealistic expectations.","Emotional immaturity, insecurity, creative block.",
    "Jealousy, moodiness, unrealistic expectations.","Emotional instability, insecurity, dependence.","Manipulation, coldness, lack of control.",
    //swords
    "Confusion, miscommunication, lack of clarity.","Clarity, decisiveness, emotional release.","Healing, forgiveness, moving forward.",
    "Restlessness, burnout, avoiding self-care.","Reconciliation, compromise, resolving conflicts.",
    "Resistance to change, stagnation, unfinished business.","Guilt, coming clean, getting caught.","Freedom, empowerment, facing fears.",
    "Release from worry, hope, recovery.","Resilience, healing, new beginnings.","Gossip, manipulation, lack of direction.",
    "Impulsiveness, recklessness, haste.","Harshness, coldness, emotional distance.","Tyranny, misuse of power, manipulation.",
    //pentacles
    "Missed opportunities, financial instability, delays.","Imbalance, poor prioritization, overwhelm.",
    "Lack of teamwork, stagnation, conflict.","Greed, materialism, fear of loss.","Recovery, rebuilding security, renewed hope.",
    "Power dynamics, debt, selfishness.","Lack of reward, impatience, wasted effort.","Mediocrity, shortcuts, lack of focus.",
    "Overindulgence, superficiality, financial dependence.","Financial instability, family conflict, short-term focus.",
    "Lack of focus, laziness, missed opportunities.","Laziness, lack of progress, stagnation.",
    "Imbalance, overworking, selfishness.","Greed, materialism, poor financial leadership."

};
