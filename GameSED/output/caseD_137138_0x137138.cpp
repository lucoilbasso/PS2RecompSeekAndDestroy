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

// Function: caseD_137138
// Address: 0x137138 - 0x137160
void caseD_137138_0x137138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_137138_0x137138");
#endif

    ctx->pc = 0x137138u;

    // 0x137138: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13713c: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x13713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137140: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137140u;
    {
        const bool branch_taken_0x137140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137140u;
        // 0x137144: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137140) {
            ctx->pc = 0x137100u;
            return;
        }
    }
    ctx->pc = 0x137148u;
    // 0x137148: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x137148u;
    {
        const bool branch_taken_0x137148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137148u;
        // 0x13714c: 0x30c20050  andi        $v0, $a2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)80);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137148) {
            ctx->pc = 0x137228u;
            return;
        }
    }
    ctx->pc = 0x137150u;
    // 0x137150: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x137150u;
    {
        const bool branch_taken_0x137150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137150) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137158u;
    // 0x137158: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x137158u;
    {
        const bool branch_taken_0x137158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137158u;
        // 0x13715c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137158) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137160u;
}
