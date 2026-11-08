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

// Function: caseD_6
// Address: 0x161230 - 0x161260
void caseD_6_0x161230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x161230");
#endif

    ctx->pc = 0x161230u;

    // 0x161230: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
    // 0x161234: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x161234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x161238: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161238u;
    {
        const bool branch_taken_0x161238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161238u;
        // 0x16123c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161238) {
            ctx->pc = 0x161260u;
            return;
        }
    }
    ctx->pc = 0x161240u;
    // 0x161240: 0x26040cf0  addiu       $a0, $s0, 0xCF0
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3312));
    // 0x161244: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161248: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16124c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x161250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x161254: 0xac520cf4  sw          $s2, 0xCF4($v0)
    ctx->pc = 0x161254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 18));
    // 0x161258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161258u;
    {
        const bool branch_taken_0x161258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161258u;
        // 0x16125c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161258) {
            ctx->pc = 0x161270u;
            return;
        }
    }
    ctx->pc = 0x161260u;
}
