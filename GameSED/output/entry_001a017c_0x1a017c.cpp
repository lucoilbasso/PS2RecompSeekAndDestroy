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

// Function: entry_001a017c
// Address: 0x1a017c - 0x1a0184
void entry_001a017c_0x1a017c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a017c_0x1a017c");
#endif

    ctx->pc = 0x1a017cu;

    // 0x1a017c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1a017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1a0180: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1a0180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1a0184u;
}
