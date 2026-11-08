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

// Function: entry_00198d10
// Address: 0x198d10 - 0x198d40
void entry_00198d10_0x198d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d10_0x198d10");
#endif

    ctx->pc = 0x198d10u;

label_198d10:
    // 0x198d10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x198d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198d14: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x198d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198d1c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x198d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x198d20: 0x0  nop
    ctx->pc = 0x198d20u;
    // NOP
    // 0x198d24: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198D24u;
    {
        const bool branch_taken_0x198d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x198D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D24u;
        // 0x198d28: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d24) {
            ctx->pc = 0x198D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198d10;
        }
    }
    ctx->pc = 0x198D2Cu;
    // 0x198d2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x198d30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198d34: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x198d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x198d38: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x198D38u;
    {
        const bool branch_taken_0x198d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D38u;
        // 0x198d3c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d38) {
            ctx->pc = 0x198C00u;
            return;
        }
    }
    ctx->pc = 0x198D40u;
}
