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

// Function: entry_00130d9c
// Address: 0x130d9c - 0x130dd0
void entry_00130d9c_0x130d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d9c_0x130d9c");
#endif

    ctx->pc = 0x130d9cu;

label_130d9c:
    // 0x130d9c: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x130D9Cu;
    {
        const bool branch_taken_0x130d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D9Cu;
        // 0x130da0: 0x24a40080  addiu       $a0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d9c) {
            ctx->pc = 0x130F60u;
            return;
        }
    }
    ctx->pc = 0x130DA4u;
    // 0x130da4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x130da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x130da8: 0x5450006e  bnel        $v0, $s0, . + 4 + (0x6E << 2)
    ctx->pc = 0x130DA8u;
    {
        const bool branch_taken_0x130da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130da8) {
            ctx->pc = 0x130DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130DA8u;
            // 0x130dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130DB0u;
    // 0x130db0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x130db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x130db4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130db8: 0x0  nop
    ctx->pc = 0x130db8u;
    // NOP
    // 0x130dbc: 0x0  nop
    ctx->pc = 0x130dbcu;
    // NOP
    // 0x130dc0: 0x5062fff6  beql        $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x130DC0u;
    {
        const bool branch_taken_0x130dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130dc0) {
            ctx->pc = 0x130DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130DC0u;
            // 0x130dc4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130d9c;
        }
    }
    ctx->pc = 0x130DC8u;
    // 0x130dc8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x130DC8u;
    {
        const bool branch_taken_0x130dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130dc8) {
            ctx->pc = 0x130D88u;
            return;
        }
    }
    ctx->pc = 0x130DD0u;
}
