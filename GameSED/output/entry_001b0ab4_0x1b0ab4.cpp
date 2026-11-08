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

// Function: entry_001b0ab4
// Address: 0x1b0ab4 - 0x1b0adc
void entry_001b0ab4_0x1b0ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0ab4_0x1b0ab4");
#endif

    ctx->pc = 0x1b0ab4u;

label_1b0ab4:
    // 0x1b0ab4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B0AB4u;
    {
        const bool branch_taken_0x1b0ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AB4u;
        // 0x1b0ab8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ab4) {
            ctx->pc = 0x1B09F4u;
            return;
        }
    }
    ctx->pc = 0x1B0ABCu;
    // 0x1b0abc: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1B0ABCu;
    {
        const bool branch_taken_0x1b0abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ABCu;
        // 0x1b0ac0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0abc) {
            ctx->pc = 0x1B0AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ab4;
        }
    }
    ctx->pc = 0x1B0AC4u;
    // 0x1b0ac4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b0ac8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0AC8u;
    {
        const bool branch_taken_0x1b0ac8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AC8u;
        // 0x1b0acc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ac8) {
            ctx->pc = 0x1B0ADCu;
            return;
        }
    }
    ctx->pc = 0x1B0AD0u;
    // 0x1b0ad0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1b0ad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0AD4u;
    {
        const bool branch_taken_0x1b0ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AD4u;
        // 0x1b0ad8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ad4) {
            ctx->pc = 0x1B0AF0u;
            return;
        }
    }
    ctx->pc = 0x1B0ADCu;
}
