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

// Function: entry_00183530
// Address: 0x183530 - 0x183558
void entry_00183530_0x183530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183530_0x183530");
#endif

    ctx->pc = 0x183530u;

    // 0x183530: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x183534: 0x24021803  addiu       $v0, $zero, 0x1803
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6147));
    // 0x183538: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183538u;
    {
        const bool branch_taken_0x183538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x183538) {
            ctx->pc = 0x18353Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183538u;
            // 0x18353c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183590u;
            return;
        }
    }
    ctx->pc = 0x183540u;
    // 0x183540: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x183540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x183544: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x183544u;
    {
        const bool branch_taken_0x183544 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183544u;
        // 0x183548: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183544) {
            ctx->pc = 0x183598u;
            return;
        }
    }
    ctx->pc = 0x18354Cu;
    // 0x18354c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18354cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x183550: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x183554: 0x0  nop
    ctx->pc = 0x183554u;
    // NOP
    ctx->pc = 0x183558u;
}
