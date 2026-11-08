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

// Function: entry_0010b210
// Address: 0x10b210 - 0x10b244
void entry_0010b210_0x10b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b210_0x10b210");
#endif

    switch (ctx->pc) {
        case 0x10b218u: goto label_10b218;
        case 0x10b23cu: goto label_10b23c;
        default: break;
    }

    ctx->pc = 0x10b210u;

    // 0x10b210: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B210u;
    SET_GPR_U32(ctx, 31, 0x10B218u);
    ctx->pc = 0x10B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B210u;
    // 0x10b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B210u, 0x10B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B218u;
label_10b218:
    // 0x10b218: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b21c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b220: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10b224: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B224u;
    {
        const bool branch_taken_0x10b224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B224u;
        // 0x10b228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b224) {
            ctx->pc = 0x10B244u;
            return;
        }
    }
    ctx->pc = 0x10B22Cu;
    // 0x10b22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b230: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b234: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x10B234u;
    SET_GPR_U32(ctx, 31, 0x10B23Cu);
    ctx->pc = 0x10B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B234u;
    // 0x10b238: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x10B234u, 0x10B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B23Cu;
label_10b23c:
    // 0x10b23c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x10b23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10b244u;
}
