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

// Function: entry_001a4d60
// Address: 0x1a4d60 - 0x1a4d70
void entry_001a4d60_0x1a4d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d60_0x1a4d60");
#endif

    ctx->pc = 0x1a4d60u;

    // 0x1a4d60: 0x24c62788  addiu       $a2, $a2, 0x2788
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10120));
    // 0x1a4d64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a4d68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4d70u;
}
