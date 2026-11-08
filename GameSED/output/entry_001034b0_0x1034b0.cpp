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

// Function: entry_001034b0
// Address: 0x1034b0 - 0x1034c4
void entry_001034b0_0x1034b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001034b0_0x1034b0");
#endif

    ctx->pc = 0x1034b0u;

    // 0x1034b0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1034b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1034b4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1034b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1034b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1034bc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1034bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1034c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1034c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x1034c4u;
}
