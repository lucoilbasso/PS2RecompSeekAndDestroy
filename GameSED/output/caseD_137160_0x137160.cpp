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

// Function: caseD_137160
// Address: 0x137160 - 0x137188
void caseD_137160_0x137160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_137160_0x137160");
#endif

    ctx->pc = 0x137160u;

    // 0x137160: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x137164: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137168: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x137168u;
    {
        const bool branch_taken_0x137168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137168u;
        // 0x13716c: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137168) {
            ctx->pc = 0x137100u;
            return;
        }
    }
    ctx->pc = 0x137170u;
    // 0x137170: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x137170u;
    {
        const bool branch_taken_0x137170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137170u;
        // 0x137174: 0x30c20030  andi        $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137170) {
            ctx->pc = 0x137228u;
            return;
        }
    }
    ctx->pc = 0x137178u;
    // 0x137178: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x137178u;
    {
        const bool branch_taken_0x137178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137178) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137180u;
    // 0x137180: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x137180u;
    {
        const bool branch_taken_0x137180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137180u;
        // 0x137184: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137180) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137188u;
}
