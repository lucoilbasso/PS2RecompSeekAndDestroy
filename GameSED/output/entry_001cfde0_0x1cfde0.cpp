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

// Function: entry_001cfde0
// Address: 0x1cfde0 - 0x1cfde8
void entry_001cfde0_0x1cfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfde0_0x1cfde0");
#endif

    ctx->pc = 0x1cfde0u;

    // 0x1cfde0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfde4: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x1cfde4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1cfde8u;
}
