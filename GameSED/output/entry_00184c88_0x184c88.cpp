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

// Function: entry_00184c88
// Address: 0x184c88 - 0x184cb8
void entry_00184c88_0x184c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c88_0x184c88");
#endif

    ctx->pc = 0x184c88u;

label_184c88:
    // 0x184c88: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x184C88u;
    {
        const bool branch_taken_0x184c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C88u;
        // 0x184c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c88) {
            ctx->pc = 0x184CD0u;
            return;
        }
    }
    ctx->pc = 0x184C90u;
    // 0x184c90: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x184c94: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x184C94u;
    {
        const bool branch_taken_0x184c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x184C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C94u;
        // 0x184c98: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c94) {
            ctx->pc = 0x184CB8u;
            return;
        }
    }
    ctx->pc = 0x184C9Cu;
    // 0x184c9c: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x184c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x184ca0: 0x0  nop
    ctx->pc = 0x184ca0u;
    // NOP
    // 0x184ca4: 0x0  nop
    ctx->pc = 0x184ca4u;
    // NOP
    // 0x184ca8: 0x0  nop
    ctx->pc = 0x184ca8u;
    // NOP
    // 0x184cac: 0x1053fff6  beq         $v0, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x184CACu;
    {
        const bool branch_taken_0x184cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x184cac) {
            ctx->pc = 0x184C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c88;
        }
    }
    ctx->pc = 0x184CB4u;
    // 0x184cb4: 0x0  nop
    ctx->pc = 0x184cb4u;
    // NOP
    ctx->pc = 0x184cb8u;
}
