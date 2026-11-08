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

// Function: entry_001aa630
// Address: 0x1aa630 - 0x1aa63c
void entry_001aa630_0x1aa630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa630_0x1aa630");
#endif

    ctx->pc = 0x1aa630u;

    // 0x1aa630: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1aa630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1aa634: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1aa634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1aa638: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1aa63cu;
}
