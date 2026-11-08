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

// Function: entry_001226c0
// Address: 0x1226c0 - 0x1226d4
void entry_001226c0_0x1226c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226c0_0x1226c0");
#endif

    ctx->pc = 0x1226c0u;

    // 0x1226c0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1226c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1226c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1226c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1226c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1226cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1226ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1226d0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x1226d4u;
}
