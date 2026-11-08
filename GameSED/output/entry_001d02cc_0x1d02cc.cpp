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

// Function: entry_001d02cc
// Address: 0x1d02cc - 0x1d02d0
void entry_001d02cc_0x1d02cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d02cc_0x1d02cc");
#endif

    ctx->pc = 0x1d02ccu;

    // 0x1d02cc: 0x3c0c0025  lui         $t4, 0x25
    ctx->pc = 0x1d02ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1d02d0u;
}
