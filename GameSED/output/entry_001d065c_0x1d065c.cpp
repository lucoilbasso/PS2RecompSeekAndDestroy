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

// Function: entry_001d065c
// Address: 0x1d065c - 0x1d0660
void entry_001d065c_0x1d065c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d065c_0x1d065c");
#endif

    ctx->pc = 0x1d065cu;

    // 0x1d065c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d065cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1d0660u;
}
