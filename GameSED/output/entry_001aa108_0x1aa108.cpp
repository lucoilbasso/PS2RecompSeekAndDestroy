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

// Function: entry_001aa108
// Address: 0x1aa108 - 0x1aa110
void entry_001aa108_0x1aa108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa108_0x1aa108");
#endif

    ctx->pc = 0x1aa108u;

    // 0x1aa108: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1aa108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1aa10c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1aa10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x1aa110u;
}
