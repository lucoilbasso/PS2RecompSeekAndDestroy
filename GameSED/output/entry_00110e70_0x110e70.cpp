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

// Function: entry_00110e70
// Address: 0x110e70 - 0x110e90
void entry_00110e70_0x110e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110e70_0x110e70");
#endif

    ctx->pc = 0x110e70u;

    // 0x110e70: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x110e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x110e74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110e78: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x110e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x110e7c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110e80: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110e80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110e84: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x110E84u;
    {
        const bool branch_taken_0x110e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E84u;
        // 0x110e88: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e84) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110E8Cu;
    // 0x110e8c: 0x0  nop
    ctx->pc = 0x110e8cu;
    // NOP
    ctx->pc = 0x110e90u;
}
