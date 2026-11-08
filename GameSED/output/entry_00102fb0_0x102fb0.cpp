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

// Function: entry_00102fb0
// Address: 0x102fb0 - 0x102fe0
void entry_00102fb0_0x102fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102fb0_0x102fb0");
#endif

    ctx->pc = 0x102fb0u;

label_102fb0:
    // 0x102fb0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102fb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102fb8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x102fbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x102fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x102fc0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x102fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x102fc4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x102fc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x102fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x102fcc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x102fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102fd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102FD0u;
    {
        const bool branch_taken_0x102fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD0u;
        // 0x102fd4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fd0) {
            ctx->pc = 0x102FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102fb0;
        }
    }
    ctx->pc = 0x102FD8u;
    // 0x102fd8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x102FD8u;
    {
        const bool branch_taken_0x102fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD8u;
        // 0x102fdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fd8) {
            ctx->pc = 0x103078u;
            return;
        }
    }
    ctx->pc = 0x102FE0u;
}
