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

// Function: __tf7WcSeStd
// Address: 0x1dc648 - 0x1dc694
void ps2___tf7WcSeStd_0x1dc648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcSeStd_0x1dc648");
#endif

    switch (ctx->pc) {
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc680u: goto label_1dc680;
        default: break;
    }

    ctx->pc = 0x1dc648u;

    // 0x1dc648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc64c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc654: 0x245014e0  addiu       $s0, $v0, 0x14E0
    ctx->pc = 0x1dc654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x1dc658: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4114E0u));
    // 0x1dc65c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC65Cu;
    {
        const bool branch_taken_0x1dc65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC65Cu;
        // 0x1dc660: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc65c) {
            ctx->pc = 0x1DC680u;
            goto label_1dc680;
        }
    }
    ctx->pc = 0x1DC664u;
    // 0x1dc664: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC664u;
    SET_GPR_U32(ctx, 31, 0x1DC66Cu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC664u, 0x1DC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC66Cu;
label_1dc66c:
    // 0x1dc66c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dc670: 0x24a57b20  addiu       $a1, $a1, 0x7B20
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31520));
    // 0x1dc674: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc678: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC678u;
    SET_GPR_U32(ctx, 31, 0x1DC680u);
    ctx->pc = 0x1DC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC678u;
    // 0x1dc67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC678u, 0x1DC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC680u;
label_1dc680:
    // 0x1dc680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc688: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc68c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC68Cu;
        // 0x1dc690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC694u;
}
