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

// Function: caseD_4
// Address: 0x154558 - 0x154588
void caseD_4_0x154558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x154558");
#endif

    ctx->pc = 0x154558u;

    // 0x154558: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x154558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15455c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x15455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x154560: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x154560u;
    {
        const bool branch_taken_0x154560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154560u;
        // 0x154564: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154560) {
            ctx->pc = 0x154588u;
            return;
        }
    }
    ctx->pc = 0x154568u;
    // 0x154568: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154568u;
    {
        const bool branch_taken_0x154568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154568u;
        // 0x15456c: 0x24021846  addiu       $v0, $zero, 0x1846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154568) {
            ctx->pc = 0x154588u;
            return;
        }
    }
    ctx->pc = 0x154570u;
    // 0x154570: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x154570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154574: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154574u;
    {
        const bool branch_taken_0x154574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154574u;
        // 0x154578: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154574) {
            ctx->pc = 0x15458Cu;
            return;
        }
    }
    ctx->pc = 0x15457Cu;
    // 0x15457c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x15457Cu;
    {
        const bool branch_taken_0x15457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15457Cu;
        // 0x154580: 0x24921ac4  addiu       $s2, $a0, 0x1AC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 6852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15457c) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154584u;
    // 0x154584: 0x0  nop
    ctx->pc = 0x154584u;
    // NOP
    ctx->pc = 0x154588u;
}
