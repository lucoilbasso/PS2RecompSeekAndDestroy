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

// Function: entry_001777b0
// Address: 0x1777b0 - 0x1777e8
void entry_001777b0_0x1777b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001777b0_0x1777b0");
#endif

    ctx->pc = 0x1777b0u;

label_1777b0:
    // 0x1777b0: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x1777b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1777b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1777b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1777b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777bc: 0x0  nop
    ctx->pc = 0x1777bcu;
    // NOP
    // 0x1777c0: 0x0  nop
    ctx->pc = 0x1777c0u;
    // NOP
    // 0x1777c4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1777C4u;
    {
        const bool branch_taken_0x1777c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1777C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777C4u;
        // 0x1777c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777c4) {
            ctx->pc = 0x1777B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1777b0;
        }
    }
    ctx->pc = 0x1777CCu;
    // 0x1777cc: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1777ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1777d0: 0xa0e20038  sb          $v0, 0x38($a3)
    ctx->pc = 0x1777d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777d4: 0xa0e2003b  sb          $v0, 0x3B($a3)
    ctx->pc = 0x1777d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777d8: 0xa0e2003a  sb          $v0, 0x3A($a3)
    ctx->pc = 0x1777d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1777DCu;
    {
        const bool branch_taken_0x1777dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777DCu;
        // 0x1777e0: 0xa0e20039  sb          $v0, 0x39($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 57), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777dc) {
            ctx->pc = 0x17786Cu;
            return;
        }
    }
    ctx->pc = 0x1777E4u;
    // 0x1777e4: 0x0  nop
    ctx->pc = 0x1777e4u;
    // NOP
    ctx->pc = 0x1777e8u;
}
