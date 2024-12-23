#define TAROT_MEANING_H
typedef struct{
    const char* upright;
    const char* reversed;
} tarot_meaning;

static const char* tarot_meaning card_meaning[78]={
    //The Fool
    {"New beginnings, spontaneity, freedom, innocence.","Recklessness, naïveté, poor decisions, lack of direction."},
    //The Magician
    {"Manifestation, resourcefulness, power, inspired action.","Manipulation, trickery, lack of focus, untapped potential."},
    //The High Priestess
    {"Intuition, mystery, spiritual wisdom, the subconscious.","Secrets, disconnected intuition, withdrawal, superficiality."},
    //The Empress
    {"Abundance, nurturing, femininity, creativity, nature.","Dependence, smothering, creative blocks, neglect."},
    //The Emperor
    {"Authority, stability, structure, leadership, protection.","Tyranny, rigidity, lack of discipline, controlling behavior."},
    //The Hierophant
    {"Tradition, spirituality, conformity, education.","Rebellion, personal belief, nonconformity, freedom."},
    //The Lovers
    {"Love, harmony, choices, alignment of values, partnerships.","Imbalance, disconnection, misalignment, difficult decisions."},
    //The Chariot
    {"Willpower, determination, success, control.","Lack of direction, self-doubt, aggression, loss of control."},
    //Strength
    {"Inner strength, courage, patience, compassion.","Self-doubt, weakness, insecurity, lack of confidence."},
    //The Hermit
    {"Introspection, solitude, wisdom, inner guidance.","Isolation, loneliness, withdrawal, lost inner guidance."},
    //Wheel of Fortune
    {"Change, cycles, fate, luck, turning points.","Bad luck, resistance to change, lack of control, setbacks."},
    //Justice
    {"Fairness, truth, accountability, law, cause and effect.","Dishonesty, unfairness, lack of accountability, corruption."},
    //The Hanged Man
    {"Surrender, letting go, new perspectives, pause.","Stagnation, delays, resistance, indecision."},
    //Death
    {"Transformation, endings, release, new beginnings.","Resistance to change, stagnation, fear of endings."},
    //Temperance
    {"Balance, moderation, harmony, patience, purpose.","Imbalance, excess, lack of long-term vision, discord."},
    //The Devil
    {"Addiction, materialism, bondage, temptation, shadow self.","Freedom, release, overcoming addictions, reclaiming power."},
    //The Tower
    {"Sudden upheaval, chaos, revelation, destruction.","Avoidance of disaster, fear of change, lingering chaos."},
    //The Star
    {"Hope, renewal, inspiration, spirituality, serenity.","Hopelessness, lack of faith, discouragement, disconnect."},
    //The Moon
    {"Illusion, intuition, fear, the subconscious, mystery.","Clarity, deception revealed, overcoming fears, confusion."},
    //The Sun
    {"Joy, success, positivity, vitality, enlightenment.","Temporary sadness, lack of clarity, ego, overexposure."},
    //Judgment
    {"Reflection, reckoning, awakening, renewal, accountability.","Self-doubt, avoidance, lack of self-awareness, stagnation."},
    //The World
    {"Completion, wholeness, achievement, unity, travel.","Incompletion, lack of closure, delays, unfulfilled goals."},
    //wands
    {"Inspiration, potential, a new opportunity for growth.", "Delays, lack of direction, missed chances."},
    {"Planning, future vision, making decisions.","Fear of change, indecision, restricted options."},
    {"Expansion, progress, foresight.","Delayed success, lack of foresight, obstacles."},
    {"Celebration, stability, harmony.","Tension, instability, cancelled plans."},
    {"Conflict, competition, differing opinions.","Avoiding conflict, resolving disputes, inner harmony."},
    {"Victory, recognition, achievement.","Lack of recognition, failure, arrogance."},
    {"Perseverance, defending yourself, standing your ground.","Overwhelmed, giving up, feeling attacked."},
    {"Swift action, progress, rapid movement.","Delays, chaos, lack of clarity."},
    {"Resilience, courage, persistence.","Burnout, exhaustion, feeling defeated."},
    {"Burdens, responsibility, hard work.","Release of burdens, delegating, feeling overwhelmed."},
    {"Enthusiasm, discovery, new ideas.","Lack of direction, setbacks, impulsiveness."},
    {"Passion, action, adventure.","Recklessness, impatience, scattered energy."},
    {"Confidence, determination, warmth.","Selfishness, jealousy, insecurity."},
    {"Leadership, vision, ambition.","Domineering, impulsiveness, ineffective leadership."},
//Cups
    {"New emotions, love, spiritual awakening.","Emotional block, missed connections, suppressed feelings."},
    {"Partnership, harmony, mutual respect.","Imbalance, tension, breakups."},
    {"Friendship, celebration, community.","Overindulgence, gossip, isolation."},
    {"Apathy, contemplation, reevaluation.","Awareness, seizing opportunities, new interest."},
    {"Loss, grief, focusing on the negative.","Acceptance, moving on, finding hope."},
    {"Nostalgia, innocence, reunions.","Stuck in the past, unrealistic expectations."},
    {"Choices, illusions, imagination.","Clarity, making decisions, reality check."},
    {"Walking away, letting go, seeking deeper meaning.","Fear of moving on, indecision, avoidance."},
    {"Contentment, satisfaction, emotional fulfillment.","Dissatisfaction, indulgence, unmet desires."},
    {"Harmony, happiness, emotional bliss.", "Disconnection, conflict, unrealistic expectations."},
    {"Creativity, intuition, a new emotional experience.","Emotional immaturity, insecurity, creative block."},
    {"Romance, charm, following your heart.","Moodiness, jealousy, unrealistic expectations."},
    {"Compassion, emotional stability, intuition.","Emotional insecurity, dependence, instability."},
    {"Emotional balance, compassion, wisdom.","Manipulation, coldness, lack of control."},
//swords
    {"Clarity, new ideas, breakthroughs.","Confusion, miscommunication, lack of insight."},
    {"Indecision, stalemate, difficult choices.","Clarity, decisiveness, emotional release."},
    {"Heartbreak, betrayal, sorrow.","Healing, forgiveness, moving forward."},
    {"Rest, recovery, meditation.","Burnout, restlessness, avoiding self-care."},
    {"Conflict, betrayal, tension.","Reconciliation, forgiveness, compromise."},
    {"Transition, moving on, healing.","Resistance to change, stagnation, unfinished business."},
    {"Deception, strategy, betrayal.","Guilt, getting caught, coming clean."},
    {"Restriction, fear, feeling trapped.","Empowerment, freedom, facing fears."},
    {"Anxiety, fear, sleepless nights.","Hope, recovery, release from worry."},
    {"Painful endings, betrayal, loss.","Resilience, healing, new beginnings."},
    {"Curiosity, new ideas, communication.","Gossip, manipulation, lack of direction."},
    {"Ambition, action, fast-moving energy.","Impulsiveness, haste, burnout."},
    {"Independence, truth, clear communication.","Coldness, emotional distance, harshness."},
    {"Authority, intellect, strategic thinking.","Tyranny, misuse of power, manipulation."},
//pentacles
    {"Prosperity, opportunity, new beginnings in material wealth.","Missed opportunities, financial instability, delays."},
    {"Balance, adaptability, time management.","Overwhelm, imbalance, poor prioritization."},
    {"Collaboration, teamwork, skill development.","Lack of cooperation, conflict, stagnation."},
    {"Security, saving, control.","Greed, materialism, fear of loss."},
    {"Financial hardship, insecurity, exclusion.","Recovery, renewed hope, rebuilding security."},
    {"Generosity, charity, balance in giving and receiving.","Power dynamics, debt, selfishness."},
    {"Patience, investment, reevaluation.","Lack of reward, impatience, wasted effort."},
    {"Mastery, hard work, dedication.","Lack of focus, mediocrity, shortcuts."},
    {"Independence, luxury, financial security.","Overindulgence, financial dependence, superficiality."},
    {"Legacy, wealth, family, long-term success.","Financial instability, family conflict, short-term focus."},
    {"Ambition, new opportunities, learning.","Lack of focus, missed chances, laziness."},
    {"Hard work, reliability, practical action.","Stubbornness, laziness, lack of progress."},
    {"Nurturing, practicality, financial security.","Selfishness, imbalance, overworking."},
    {"Wealth, stability, leadership in finances.","Greed, materialism, poor management."}
};