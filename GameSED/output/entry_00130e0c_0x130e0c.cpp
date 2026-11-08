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

// Function: entry_00130e0c
// Address: 0x130e0c - 0x130e40
void entry_00130e0c_0x130e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130e0c_0x130e0c");
#endif

    ctx->pc = 0x130e0cu;

label_130e0c:
    // 0x130e0c: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x130E0Cu;
    {
        const bool branch_taken_0x130e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E0Cu;
        // 0x130e10: 0x24a40070  addiu       $a0, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e0c) {
            ctx->pc = 0x130F60u;
            return;
        }
    }
    ctx->pc = 0x130E14u;
    // 0x130e14: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x130e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x130e18: 0x54500052  bnel        $v0, $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x130E18u;
    {
        const bool branch_taken_0x130e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130e18) {
            ctx->pc = 0x130E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E18u;
            // 0x130e1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130E20u;
    // 0x130e20: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x130e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x130e24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130e28: 0x0  nop
    ctx->pc = 0x130e28u;
    // NOP
    // 0x130e2c: 0x0  nop
    ctx->pc = 0x130e2cu;
    // NOP
    // 0x130e30: 0x5062fff6  beql        $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x130E30u;
    {
        const bool branch_taken_0x130e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130e30) {
            ctx->pc = 0x130E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E30u;
            // 0x130e34: 0x8ca500c4  lw          $a1, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130e0c;
        }
    }
    ctx->pc = 0x130E38u;
    // 0x130e38: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x130E38u;
    {
        const bool branch_taken_0x130e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e38) {
            ctx->pc = 0x130DF8u;
            return;
        }
    }
    ctx->pc = 0x130E40u;
}
