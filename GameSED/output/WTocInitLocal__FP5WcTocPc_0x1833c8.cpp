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

// Function: WTocInitLocal__FP5WcTocPc
// Address: 0x1833c8 - 0x183480
void WTocInitLocal__FP5WcTocPc_0x1833c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTocInitLocal__FP5WcTocPc_0x1833c8");
#endif

    switch (ctx->pc) {
        case 0x18340cu: goto label_18340c;
        case 0x18342cu: goto label_18342c;
        case 0x183440u: goto label_183440;
        case 0x183460u: goto label_183460;
        default: break;
    }

    ctx->pc = 0x1833c8u;

    // 0x1833c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1833c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1833cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1833ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1833d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1833d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1833d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1833d8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1833d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1833dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1833e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1833e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1833e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1833e8: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1833ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1833ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1833f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1833f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1833f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1833f8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1833F8u;
    {
        const bool branch_taken_0x1833f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833F8u;
        // 0x1833fc: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833f8) {
            ctx->pc = 0x183404u;
            goto label_183404;
        }
    }
    ctx->pc = 0x183400u;
    // 0x183400: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_183404:
    // 0x183404: 0xc068086  jal         func_1A0218
    ctx->pc = 0x183404u;
    SET_GPR_U32(ctx, 31, 0x18340Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x183404u, 0x18340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18340Cu;
label_18340c:
    // 0x18340c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183418: 0x24a57dd8  addiu       $a1, $a1, 0x7DD8
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32216));
    // 0x18341c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18341Cu;
    {
        const bool branch_taken_0x18341c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x183420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18341Cu;
        // 0x183420: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18341c) {
            ctx->pc = 0x18342Cu;
            goto label_18342c;
        }
    }
    ctx->pc = 0x183424u;
    // 0x183424: 0xc068186  jal         func_1A0618
    ctx->pc = 0x183424u;
    SET_GPR_U32(ctx, 31, 0x18342Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x183424u, 0x18342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18342Cu;
label_18342c:
    // 0x18342c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x18342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x183430: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x183430u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x183434: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x183438: 0xc067294  jal         func_19CA50
    ctx->pc = 0x183438u;
    SET_GPR_U32(ctx, 31, 0x183440u);
    ctx->pc = 0x18343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183438u;
    // 0x18343c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x183438u, 0x183440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183440u;
label_183440:
    // 0x183440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18344c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18344cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183450: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x183450u;
    {
        const bool branch_taken_0x183450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x183454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183450u;
        // 0x183454: 0xae300038  sw          $s0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183450) {
            ctx->pc = 0x183460u;
            goto label_183460;
        }
    }
    ctx->pc = 0x183458u;
    // 0x183458: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x183458u;
    SET_GPR_U32(ctx, 31, 0x183460u);
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x183458u, 0x183460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183460u;
label_183460:
    // 0x183460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18346c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18346cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183470: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x183470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183474: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x183474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183478: 0x3e00008  jr          $ra
    ctx->pc = 0x183478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183478u;
        // 0x18347c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183480u;
}
