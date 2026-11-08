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
// Address: 0x110d50 - 0x110d68
void caseD_4_0x110d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x110d50");
#endif

    ctx->pc = 0x110d50u;

    // 0x110d50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x110d50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110d54: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x110d58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110D58u;
    {
        const bool branch_taken_0x110d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x110D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D58u;
        // 0x110d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d58) {
            ctx->pc = 0x110D68u;
            return;
        }
    }
    ctx->pc = 0x110D60u;
    // 0x110d60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110D60u;
    {
        const bool branch_taken_0x110d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D60u;
        // 0x110d64: 0x8e100260  lw          $s0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d60) {
            ctx->pc = 0x110D74u;
            return;
        }
    }
    ctx->pc = 0x110D68u;
}
