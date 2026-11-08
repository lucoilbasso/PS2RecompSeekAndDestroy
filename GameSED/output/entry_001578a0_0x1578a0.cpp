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

// Function: entry_001578a0
// Address: 0x1578a0 - 0x1578b0
void entry_001578a0_0x1578a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001578a0_0x1578a0");
#endif

    ctx->pc = 0x1578a0u;

    // 0x1578a0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1578a4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1578a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1578a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1578a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1578ac: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1578acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->pc = 0x1578b0u;
}
