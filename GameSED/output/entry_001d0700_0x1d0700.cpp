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

// Function: entry_001d0700
// Address: 0x1d0700 - 0x1d0704
void entry_001d0700_0x1d0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0700_0x1d0700");
#endif

    ctx->pc = 0x1d0700u;

    // 0x1d0700: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1d0700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    ctx->pc = 0x1d0704u;
}
