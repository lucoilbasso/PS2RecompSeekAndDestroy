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

// Function: entry_00195f88
// Address: 0x195f88 - 0x195fb8
void entry_00195f88_0x195f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195f88_0x195f88");
#endif

    ctx->pc = 0x195f88u;

label_195f88:
    // 0x195f88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x195f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195f8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x195f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x195f90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195f94: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x195f94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x195f98: 0x0  nop
    ctx->pc = 0x195f98u;
    // NOP
    // 0x195f9c: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195F9Cu;
    {
        const bool branch_taken_0x195f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x195FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F9Cu;
        // 0x195fa0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f9c) {
            ctx->pc = 0x195F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195f88;
        }
    }
    ctx->pc = 0x195FA4u;
    // 0x195fa4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x195fa8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x195fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x195fac: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x195facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x195fb0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x195FB0u;
    {
        const bool branch_taken_0x195fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB0u;
        // 0x195fb4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fb0) {
            ctx->pc = 0x195E88u;
            return;
        }
    }
    ctx->pc = 0x195FB8u;
}
