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

// Function: caseD_8
// Address: 0x161400 - 0x161430
void caseD_8_0x161400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x161400");
#endif

    ctx->pc = 0x161400u;

    // 0x161400: 0x8e020ccc  lw          $v0, 0xCCC($s0)
    ctx->pc = 0x161400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3276)));
    // 0x161404: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x161404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x161408: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161408u;
    {
        const bool branch_taken_0x161408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161408u;
        // 0x16140c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161408) {
            ctx->pc = 0x161430u;
            return;
        }
    }
    ctx->pc = 0x161410u;
    // 0x161410: 0x26040ccc  addiu       $a0, $s0, 0xCCC
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3276));
    // 0x161414: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161418: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16141c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161420: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x161424: 0xac520cd0  sw          $s2, 0xCD0($v0)
    ctx->pc = 0x161424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3280), GPR_U32(ctx, 18));
    // 0x161428: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161428u;
    {
        const bool branch_taken_0x161428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161428u;
        // 0x16142c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161428) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x161430u;
}
