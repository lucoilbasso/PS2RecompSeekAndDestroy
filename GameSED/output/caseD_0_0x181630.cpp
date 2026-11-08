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

// Function: caseD_0
// Address: 0x181630 - 0x18165c
void caseD_0_0x181630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x181630");
#endif

    switch (ctx->pc) {
        case 0x181644u: goto label_181644;
        default: break;
    }

    ctx->pc = 0x181630u;

    // 0x181630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18163c: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x18163Cu;
    SET_GPR_U32(ctx, 31, 0x181644u);
    ctx->pc = 0x181640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18163Cu;
    // 0x181640: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x18163Cu, 0x181644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181644u;
label_181644:
    // 0x181644: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x181644u;
    {
        const bool branch_taken_0x181644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181644u;
        // 0x181648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181644) {
            ctx->pc = 0x181770u;
            return;
        }
    }
    ctx->pc = 0x18164Cu;
    // 0x18164c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x181650: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x181654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181658: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x181658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x18165cu;
}
