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

// Function: caseD_b
// Address: 0x16c270 - 0x16c298
void caseD_b_0x16c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x16c270");
#endif

    ctx->pc = 0x16c270u;

    // 0x16c270: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16c274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c278: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x16c278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
    // 0x16c27c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c280: 0x8c623630  lw          $v0, 0x3630($v1)
    ctx->pc = 0x16c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
    // 0x16c284: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16c284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16c288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c28c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16c28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x16c290: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x16C290u;
    {
        const bool branch_taken_0x16c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C290u;
        // 0x16c294: 0xae2201e4  sw          $v0, 0x1E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c290) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C298u;
}
