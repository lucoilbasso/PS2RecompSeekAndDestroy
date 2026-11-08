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

// Function: entry_001b66a8
// Address: 0x1b66a8 - 0x1b66b4
void entry_001b66a8_0x1b66a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b66a8_0x1b66a8");
#endif

    ctx->pc = 0x1b66a8u;

    // 0x1b66a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b66a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b66acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b66b0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1b66b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1b66b4u;
}
