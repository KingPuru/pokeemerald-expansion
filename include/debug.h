#ifndef GUARD_DEBUG_H
#define GUARD_DEBUG_H

void Debug_ShowMainMenu(void);
extern const u8 Debug_FlagsAndVarNotSetBattleConfigMessage[];
const struct Trainer* GetDebugAiTrainer(void);

extern EWRAM_DATA bool8 gIsDebugBattle;
extern EWRAM_DATA u64 gDebugAIFlags;

#endif // GUARD_DEBUG_H
