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

// Function: entry_00106090
// Address: 0x106090 - 0x1060ac
void entry_00106090_0x106090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106090_0x106090");
#endif

    ctx->pc = 0x106090u;

    // 0x106090: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x106090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106098: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x106098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10609c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1060a0: 0x8c63ec00  lw          $v1, -0x1400($v1)
    ctx->pc = 0x1060a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962176)));
    // 0x1060a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1060a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1060a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1060a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1060acu;
}
