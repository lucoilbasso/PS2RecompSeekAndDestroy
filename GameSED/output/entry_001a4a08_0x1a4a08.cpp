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

// Function: entry_001a4a08
// Address: 0x1a4a08 - 0x1a4a18
void entry_001a4a08_0x1a4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4a08_0x1a4a08");
#endif

    ctx->pc = 0x1a4a08u;

    // 0x1a4a08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a10: 0x244623d0  addiu       $a2, $v0, 0x23D0
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
    // 0x1a4a14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1a4a18u;
}
