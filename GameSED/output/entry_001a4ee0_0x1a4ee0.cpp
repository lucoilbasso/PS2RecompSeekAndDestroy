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

// Function: entry_001a4ee0
// Address: 0x1a4ee0 - 0x1a4eec
void entry_001a4ee0_0x1a4ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4ee0_0x1a4ee0");
#endif

    ctx->pc = 0x1a4ee0u;

    // 0x1a4ee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ee8: 0x24464e58  addiu       $a2, $v0, 0x4E58
    ctx->pc = 0x1a4ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20056));
    ctx->pc = 0x1a4eecu;
}
