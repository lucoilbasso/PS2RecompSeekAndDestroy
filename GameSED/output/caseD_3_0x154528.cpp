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

// Function: caseD_3
// Address: 0x154528 - 0x154558
void caseD_3_0x154528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x154528");
#endif

    ctx->pc = 0x154528u;

    // 0x154528: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x154528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15452c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x154530: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x154530u;
    {
        const bool branch_taken_0x154530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154530u;
        // 0x154534: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154530) {
            ctx->pc = 0x154588u;
            return;
        }
    }
    ctx->pc = 0x154538u;
    // 0x154538: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x154538u;
    {
        const bool branch_taken_0x154538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154538u;
        // 0x15453c: 0x24021846  addiu       $v0, $zero, 0x1846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154538) {
            ctx->pc = 0x154588u;
            return;
        }
    }
    ctx->pc = 0x154540u;
    // 0x154540: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x154540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154544: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x154544u;
    {
        const bool branch_taken_0x154544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154544u;
        // 0x154548: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154544) {
            ctx->pc = 0x15458Cu;
            return;
        }
    }
    ctx->pc = 0x15454Cu;
    // 0x15454c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x15454Cu;
    {
        const bool branch_taken_0x15454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15454Cu;
        // 0x154550: 0x24921ac0  addiu       $s2, $a0, 0x1AC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 6848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15454c) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154554u;
    // 0x154554: 0x0  nop
    ctx->pc = 0x154554u;
    // NOP
    ctx->pc = 0x154558u;
}
