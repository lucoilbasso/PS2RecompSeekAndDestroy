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

// Function: entry_001cfe50
// Address: 0x1cfe50 - 0x1cfe58
void entry_001cfe50_0x1cfe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe50_0x1cfe50");
#endif

    ctx->pc = 0x1cfe50u;

    // 0x1cfe50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfe54: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x1cfe54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1cfe58u;
}
