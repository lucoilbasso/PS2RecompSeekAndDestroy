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

// Function: entry_001aa0c0
// Address: 0x1aa0c0 - 0x1aa0c8
void entry_001aa0c0_0x1aa0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0c0_0x1aa0c0");
#endif

    ctx->pc = 0x1aa0c0u;

    // 0x1aa0c0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1aa0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1aa0c4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1aa0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x1aa0c8u;
}
