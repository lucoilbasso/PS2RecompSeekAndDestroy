#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017d844
// Address: 0x17d844 - 0x17d84c
void entry_0017d844_0x17d844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d844_0x17d844");
#endif

    ctx->pc = 0x17d844u;

    // 0x17d844: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17d848: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x17d848u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    ctx->pc = 0x17d84cu;
}
