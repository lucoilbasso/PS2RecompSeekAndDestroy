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

// Function: entry_00169824
// Address: 0x169824 - 0x169848
void entry_00169824_0x169824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169824_0x169824");
#endif

    ctx->pc = 0x169824u;

    // 0x169824: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x169824u;
    {
        const bool branch_taken_0x169824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169824u;
        // 0x169828: 0x2605111c  addiu       $a1, $s0, 0x111C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169824) {
            ctx->pc = 0x1698DCu;
            return;
        }
    }
    ctx->pc = 0x16982Cu;
    // 0x16982c: 0x8e021100  lw          $v0, 0x1100($s0)
    ctx->pc = 0x16982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4352)));
    // 0x169830: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169830u;
    {
        const bool branch_taken_0x169830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169830u;
        // 0x169834: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169830) {
            ctx->pc = 0x169848u;
            return;
        }
    }
    ctx->pc = 0x169838u;
    // 0x169838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16983c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x169840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169840u;
    {
        const bool branch_taken_0x169840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169840u;
        // 0x169844: 0x8c421108  lw          $v0, 0x1108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169840) {
            ctx->pc = 0x16984Cu;
            return;
        }
    }
    ctx->pc = 0x169848u;
}
