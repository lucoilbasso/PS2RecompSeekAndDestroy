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

// Function: entry_00173d08
// Address: 0x173d08 - 0x173d30
void entry_00173d08_0x173d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173d08_0x173d08");
#endif

    ctx->pc = 0x173d08u;

    // 0x173d08: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x173d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173d0c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x173d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x173d10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173d14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x173d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x173d18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x173d1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x173d20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x173d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x173d24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x173d28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x173d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173d2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x173d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x173d30u;
}
