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

// Function: entry_001bac9c
// Address: 0x1bac9c - 0x1baca0
void entry_001bac9c_0x1bac9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bac9c_0x1bac9c");
#endif

    ctx->pc = 0x1bac9cu;

    // 0x1bac9c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1baca0u;
}
