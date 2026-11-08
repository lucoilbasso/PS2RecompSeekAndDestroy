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

// Function: __tf8ApcMover
// Address: 0x1db420 - 0x1db470
void ps2___tf8ApcMover_0x1db420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8ApcMover_0x1db420");
#endif

    switch (ctx->pc) {
        case 0x1db444u: goto label_1db444;
        case 0x1db45cu: goto label_1db45c;
        default: break;
    }

    ctx->pc = 0x1db420u;

    // 0x1db420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db424: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1db428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db42c: 0x24501268  addiu       $s0, $v0, 0x1268
    ctx->pc = 0x1db42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x1db430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411268u));
    // 0x1db434: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB434u;
    {
        const bool branch_taken_0x1db434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB434u;
        // 0x1db438: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db434) {
            ctx->pc = 0x1DB45Cu;
            goto label_1db45c;
        }
    }
    ctx->pc = 0x1DB43Cu;
    // 0x1db43c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DB43Cu;
    SET_GPR_U32(ctx, 31, 0x1DB444u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DB43Cu, 0x1DB444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB444u;
label_1db444:
    // 0x1db444: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1db448: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1db448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1db44c: 0x24a57528  addiu       $a1, $a1, 0x7528
    ctx->pc = 0x1db44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29992));
    // 0x1db450: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1db450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1db454: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DB454u;
    SET_GPR_U32(ctx, 31, 0x1DB45Cu);
    ctx->pc = 0x1DB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB454u;
    // 0x1db458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DB454u, 0x1DB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB45Cu;
label_1db45c:
    // 0x1db45c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db468: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB468u;
        // 0x1db46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB470u;
}
