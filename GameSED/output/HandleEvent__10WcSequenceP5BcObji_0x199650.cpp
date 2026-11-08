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

// Function: HandleEvent__10WcSequenceP5BcObji
// Address: 0x199650 - 0x1996a4
void HandleEvent__10WcSequenceP5BcObji_0x199650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__10WcSequenceP5BcObji_0x199650");
#endif

    switch (ctx->pc) {
        case 0x199674u: goto label_199674;
        case 0x19968cu: goto label_19968c;
        default: break;
    }

    ctx->pc = 0x199650u;

    // 0x199650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19965c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199660: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x199668: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x199668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19966c: 0xc06851a  jal         func_1A1468
    ctx->pc = 0x19966Cu;
    SET_GPR_U32(ctx, 31, 0x199674u);
    ctx->pc = 0x199670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19966Cu;
    // 0x199670: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1468u, 0x19966Cu, 0x199674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199674u;
label_199674:
    // 0x199674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199678: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x199678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x19967c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19967Cu;
    {
        const bool branch_taken_0x19967c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x199680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19967Cu;
        // 0x199680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19967c) {
            ctx->pc = 0x19968Cu;
            goto label_19968c;
        }
    }
    ctx->pc = 0x199684u;
    // 0x199684: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x199684u;
    SET_GPR_U32(ctx, 31, 0x19968Cu);
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x199684u, 0x19968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19968Cu;
label_19968c:
    // 0x19968c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19968cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199698: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x199698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19969c: 0x3e00008  jr          $ra
    ctx->pc = 0x19969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19969Cu;
        // 0x1996a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19969Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1996A4u;
}
