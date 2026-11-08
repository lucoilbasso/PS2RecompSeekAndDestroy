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

// Function: __tf9ApcCqtank
// Address: 0x1da638 - 0x1da688
void ps2___tf9ApcCqtank_0x1da638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcCqtank_0x1da638");
#endif

    switch (ctx->pc) {
        case 0x1da65cu: goto label_1da65c;
        case 0x1da674u: goto label_1da674;
        default: break;
    }

    ctx->pc = 0x1da638u;

    // 0x1da638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da63c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1da63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1da640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da644: 0x245011d8  addiu       $s0, $v0, 0x11D8
    ctx->pc = 0x1da644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4568));
    // 0x1da648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da648u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4111D8u));
    // 0x1da64c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA64Cu;
    {
        const bool branch_taken_0x1da64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA64Cu;
        // 0x1da650: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da64c) {
            ctx->pc = 0x1DA674u;
            goto label_1da674;
        }
    }
    ctx->pc = 0x1DA654u;
    // 0x1da654: 0xc0780c4  jal         func_1E0310
    ctx->pc = 0x1DA654u;
    SET_GPR_U32(ctx, 31, 0x1DA65Cu);
    ctx->pc = 0x1E0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0310u, 0x1DA654u, 0x1DA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA65Cu;
label_1da65c:
    // 0x1da65c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1da65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1da660: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1da664: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x1da664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x1da668: 0x24c61c80  addiu       $a2, $a2, 0x1C80
    ctx->pc = 0x1da668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7296));
    // 0x1da66c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DA66Cu;
    SET_GPR_U32(ctx, 31, 0x1DA674u);
    ctx->pc = 0x1DA670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA66Cu;
    // 0x1da670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DA66Cu, 0x1DA674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA674u;
label_1da674:
    // 0x1da674: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da67c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da680: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA680u;
        // 0x1da684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA688u;
}
