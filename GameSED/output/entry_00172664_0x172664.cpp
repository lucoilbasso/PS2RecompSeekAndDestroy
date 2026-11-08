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

// Function: entry_00172664
// Address: 0x172664 - 0x172734
void entry_00172664_0x172664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172664_0x172664");
#endif

    switch (ctx->pc) {
        case 0x17266cu: goto label_17266c;
        case 0x17267cu: goto label_17267c;
        case 0x172688u: goto label_172688;
        case 0x172694u: goto label_172694;
        case 0x1726a0u: goto label_1726a0;
        case 0x1726c4u: goto label_1726c4;
        case 0x1726d0u: goto label_1726d0;
        case 0x1726e0u: goto label_1726e0;
        case 0x1726e8u: goto label_1726e8;
        case 0x1726f0u: goto label_1726f0;
        case 0x1726fcu: goto label_1726fc;
        case 0x172704u: goto label_172704;
        default: break;
    }

    ctx->pc = 0x172664u;

    // 0x172664: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172664u;
    SET_GPR_U32(ctx, 31, 0x17266Cu);
    ctx->pc = 0x172668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172664u;
    // 0x172668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172664u, 0x17266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17266Cu;
label_17266c:
    // 0x17266c: 0x3c051500  lui         $a1, 0x1500
    ctx->pc = 0x17266cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5376 << 16));
    // 0x172670: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172674: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172674u;
    SET_GPR_U32(ctx, 31, 0x17267Cu);
    ctx->pc = 0x172678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172674u;
    // 0x172678: 0x34a507fc  ori         $a1, $a1, 0x7FC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172674u, 0x17267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17267Cu;
label_17267c:
    // 0x17267c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17267cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172680: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x172680u;
    SET_GPR_U32(ctx, 31, 0x172688u);
    ctx->pc = 0x172684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172680u;
    // 0x172684: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x172680u, 0x172688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172688u;
label_172688:
    // 0x172688: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17268c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17268Cu;
    SET_GPR_U32(ctx, 31, 0x172694u);
    ctx->pc = 0x172690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17268Cu;
    // 0x172690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17268Cu, 0x172694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172694u;
label_172694:
    // 0x172694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172698: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x172698u;
    SET_GPR_U32(ctx, 31, 0x1726A0u);
    ctx->pc = 0x17269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172698u;
    // 0x17269c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x172698u, 0x1726A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726A0u;
label_1726a0:
    // 0x1726a0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1726a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1726a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1726a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1726a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1726acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1726b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726b4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1726b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1726b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1726b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726bc: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x1726BCu;
    SET_GPR_U32(ctx, 31, 0x1726C4u);
    ctx->pc = 0x1726C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726BCu;
    // 0x1726c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x1726BCu, 0x1726C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726C4u;
label_1726c4:
    // 0x1726c4: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1726c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1726c8: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x1726C8u;
    SET_GPR_U32(ctx, 31, 0x1726D0u);
    ctx->pc = 0x1726CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726C8u;
    // 0x1726cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x1726C8u, 0x1726D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726D0u;
label_1726d0:
    // 0x1726d0: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x1726d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1726d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1726d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726d8: 0xc06bbfc  jal         func_1AEFF0
    ctx->pc = 0x1726D8u;
    SET_GPR_U32(ctx, 31, 0x1726E0u);
    ctx->pc = 0x1726DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726D8u;
    // 0x1726dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFF0u, 0x1726D8u, 0x1726E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726E0u;
label_1726e0:
    // 0x1726e0: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x1726E0u;
    SET_GPR_U32(ctx, 31, 0x1726E8u);
    ctx->pc = 0x1726E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726E0u;
    // 0x1726e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x1726E0u, 0x1726E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726E8u;
label_1726e8:
    // 0x1726e8: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x1726E8u;
    SET_GPR_U32(ctx, 31, 0x1726F0u);
    ctx->pc = 0x1726ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726E8u;
    // 0x1726ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x1726E8u, 0x1726F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726F0u;
label_1726f0:
    // 0x1726f0: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x1726f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x1726f4: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1726F4u;
    SET_GPR_U32(ctx, 31, 0x1726FCu);
    ctx->pc = 0x1726F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726F4u;
    // 0x1726f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1726F4u, 0x1726FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726FCu;
label_1726fc:
    // 0x1726fc: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x1726FCu;
    SET_GPR_U32(ctx, 31, 0x172704u);
    ctx->pc = 0x172700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726FCu;
    // 0x172700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x1726FCu, 0x172704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172704u;
label_172704:
    // 0x172704: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x172704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172708: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17270c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x17270cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172710: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x172710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x172714: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x172714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172718: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x172718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x17271c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x17271cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172720: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x172720u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x172724: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x172728: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x172728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17272c: 0x3e00008  jr          $ra
    ctx->pc = 0x17272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17272Cu;
        // 0x172730: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172734u;
}
