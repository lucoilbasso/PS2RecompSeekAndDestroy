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

// Function: entry_001d53a0
// Address: 0x1d53a0 - 0x1d53a4
void entry_001d53a0_0x1d53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d53a0_0x1d53a0");
#endif

    ctx->pc = 0x1d53a0u;

    // 0x1d53a0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1d53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x1d53a4u;
}
