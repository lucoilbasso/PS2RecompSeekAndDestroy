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

// Function: entry_0011bd94
// Address: 0x11bd94 - 0x11bd9c
void entry_0011bd94_0x11bd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd94_0x11bd94");
#endif

    ctx->pc = 0x11bd94u;

    // 0x11bd94: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x11bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x11bd98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11bd9cu;
}
