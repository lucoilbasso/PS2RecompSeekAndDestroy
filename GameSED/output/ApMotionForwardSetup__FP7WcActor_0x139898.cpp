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

// Function: ApMotionForwardSetup__FP7WcActor
// Address: 0x139898 - 0x139940
void ApMotionForwardSetup__FP7WcActor_0x139898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionForwardSetup__FP7WcActor_0x139898");
#endif

    switch (ctx->pc) {
        case 0x1398c4u: goto label_1398c4;
        case 0x1398d8u: goto label_1398d8;
        case 0x1398ecu: goto label_1398ec;
        default: break;
    }

    ctx->pc = 0x139898u;

    // 0x139898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13989c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x13989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1398a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1398a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1398a4: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x1398a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x1398a8: 0x26109770  addiu       $s0, $s0, -0x6890
    ctx->pc = 0x1398a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940528));
    // 0x1398ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1398acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1398b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1398b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1398b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1398b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1398b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1398bc: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x1398BCu;
    SET_GPR_U32(ctx, 31, 0x1398C4u);
    ctx->pc = 0x1398C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398BCu;
    // 0x1398c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x1398BCu, 0x1398C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398C4u;
label_1398c4:
    // 0x1398c4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1398c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1398c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1398c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1398cc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1398ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1398d0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1398D0u;
    SET_GPR_U32(ctx, 31, 0x1398D8u);
    ctx->pc = 0x1398D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398D0u;
    // 0x1398d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1398D0u, 0x1398D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398D8u;
label_1398d8:
    // 0x1398d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1398d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1398dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1398e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398e4: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1398E4u;
    SET_GPR_U32(ctx, 31, 0x1398ECu);
    ctx->pc = 0x1398E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398E4u;
    // 0x1398e8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1398E4u, 0x1398ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398ECu;
label_1398ec:
    // 0x1398ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1398ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1398f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398f4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1398f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1398f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1398f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1398fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1398fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x139900: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139900u;
    {
        const bool branch_taken_0x139900 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x139904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139900u;
        // 0x139904: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139900) {
            ctx->pc = 0x139910u;
            goto label_139910;
        }
    }
    ctx->pc = 0x139908u;
    // 0x139908: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x139908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13990c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139910:
    // 0x139910: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x139910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x139914: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x139914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13991c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13991cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139924: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139928: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x13992c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13992cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x139930: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x139930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139934: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139938: 0x3e00008  jr          $ra
    ctx->pc = 0x139938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139938u;
        // 0x13993c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139940u;
}
