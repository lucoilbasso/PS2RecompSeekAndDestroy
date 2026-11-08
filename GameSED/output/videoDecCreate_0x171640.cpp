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

// Function: videoDecCreate
// Address: 0x171640 - 0x171744
void videoDecCreate_0x171640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecCreate_0x171640");
#endif

    switch (ctx->pc) {
        case 0x17167cu: goto label_17167c;
        case 0x171694u: goto label_171694;
        case 0x1716acu: goto label_1716ac;
        case 0x1716c4u: goto label_1716c4;
        case 0x1716dcu: goto label_1716dc;
        case 0x1716f4u: goto label_1716f4;
        case 0x171714u: goto label_171714;
        case 0x17171cu: goto label_17171c;
        default: break;
    }

    ctx->pc = 0x171640u;

    // 0x171640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17164c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171650: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x171650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171658: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x171658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17165c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171660: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x171660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171664: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x171664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171668: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x171668u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17166c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x171670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x171670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x171674: 0xc06f574  jal         func_1BD5D0
    ctx->pc = 0x171674u;
    SET_GPR_U32(ctx, 31, 0x17167Cu);
    ctx->pc = 0x171678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171674u;
    // 0x171678: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD5D0u, 0x171674u, 0x17167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17167Cu;
label_17167c:
    // 0x17167c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x171680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171684: 0x24c61c50  addiu       $a2, $a2, 0x1C50
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7248));
    // 0x171688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17168c: 0xc06f67a  jal         func_1BD9E8
    ctx->pc = 0x17168Cu;
    SET_GPR_U32(ctx, 31, 0x171694u);
    ctx->pc = 0x171690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17168Cu;
    // 0x171690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD9E8u, 0x17168Cu, 0x171694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171694u;
label_171694:
    // 0x171694: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x171694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x171698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17169c: 0x24c61c78  addiu       $a2, $a2, 0x1C78
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7288));
    // 0x1716a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1716a4: 0xc06f67a  jal         func_1BD9E8
    ctx->pc = 0x1716A4u;
    SET_GPR_U32(ctx, 31, 0x1716ACu);
    ctx->pc = 0x1716A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716A4u;
    // 0x1716a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD9E8u, 0x1716A4u, 0x1716ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716ACu;
label_1716ac:
    // 0x1716ac: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1716acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1716b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b4: 0x24c61ca8  addiu       $a2, $a2, 0x1CA8
    ctx->pc = 0x1716b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7336));
    // 0x1716b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1716bc: 0xc06f67a  jal         func_1BD9E8
    ctx->pc = 0x1716BCu;
    SET_GPR_U32(ctx, 31, 0x1716C4u);
    ctx->pc = 0x1716C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716BCu;
    // 0x1716c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD9E8u, 0x1716BCu, 0x1716C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716C4u;
label_1716c4:
    // 0x1716c4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1716c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1716c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1716c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716cc: 0x24c61cd0  addiu       $a2, $a2, 0x1CD0
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7376));
    // 0x1716d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1716d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1716d4: 0xc06f67a  jal         func_1BD9E8
    ctx->pc = 0x1716D4u;
    SET_GPR_U32(ctx, 31, 0x1716DCu);
    ctx->pc = 0x1716D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716D4u;
    // 0x1716d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD9E8u, 0x1716D4u, 0x1716DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716DCu;
label_1716dc:
    // 0x1716dc: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1716e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1716e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716e4: 0x24c61cf8  addiu       $a2, $a2, 0x1CF8
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7416));
    // 0x1716e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1716e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1716ec: 0xc06f67a  jal         func_1BD9E8
    ctx->pc = 0x1716ECu;
    SET_GPR_U32(ctx, 31, 0x1716F4u);
    ctx->pc = 0x1716F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716ECu;
    // 0x1716f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD9E8u, 0x1716ECu, 0x1716F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716F4u;
label_1716f4:
    // 0x1716f4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1716f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1716f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1716f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1716fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171700: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x171700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171704: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x171704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171708: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x171708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17170c: 0xc05d44a  jal         func_175128
    ctx->pc = 0x17170Cu;
    SET_GPR_U32(ctx, 31, 0x171714u);
    ctx->pc = 0x171710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17170Cu;
    // 0x171710: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175128u, 0x17170Cu, 0x171714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171714u;
label_171714:
    // 0x171714: 0xc05c79c  jal         func_171E70
    ctx->pc = 0x171714u;
    SET_GPR_U32(ctx, 31, 0x17171Cu);
    ctx->pc = 0x171718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171714u;
    // 0x171718: 0x260400b8  addiu       $a0, $s0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171E70u, 0x171714u, 0x17171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17171Cu;
label_17171c:
    // 0x17171c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17172c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17172cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171730: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x171730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171734: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x171734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x171738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17173c: 0x3e00008  jr          $ra
    ctx->pc = 0x17173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17173Cu;
        // 0x171740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171744u;
}
