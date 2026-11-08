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

// Function: entry_001ce0c0
// Address: 0x1ce0c0 - 0x1ce0d0
void entry_001ce0c0_0x1ce0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce0c0_0x1ce0c0");
#endif

    ctx->pc = 0x1ce0c0u;

    // 0x1ce0c0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1ce0c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0c4: 0x8fb00d8c  lw          $s0, 0xD8C($sp)
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x1ce0c8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1ce0c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0cc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1ce0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce0d0u;
}
