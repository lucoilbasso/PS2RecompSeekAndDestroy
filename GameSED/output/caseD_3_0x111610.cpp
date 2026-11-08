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
// Address: 0x111610 - 0x111628
void caseD_3_0x111610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x111610");
#endif

    ctx->pc = 0x111610u;

    // 0x111610: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x111610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111614: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x111614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x111618: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111618u;
    {
        const bool branch_taken_0x111618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111618u;
        // 0x11161c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111618) {
            ctx->pc = 0x111628u;
            return;
        }
    }
    ctx->pc = 0x111620u;
    // 0x111620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111620u;
    {
        const bool branch_taken_0x111620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111620u;
        // 0x111624: 0x8e300260  lw          $s0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111620) {
            ctx->pc = 0x111634u;
            return;
        }
    }
    ctx->pc = 0x111628u;
}
