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

// Function: SetPlayerID__7ApcUniti
// Address: 0x14c588 - 0x14c65c
void SetPlayerID__7ApcUniti_0x14c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPlayerID__7ApcUniti_0x14c588");
#endif

    switch (ctx->pc) {
        case 0x14c5b0u: goto label_14c5b0;
        case 0x14c5b8u: goto label_14c5b8;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5e0u: goto label_14c5e0;
        case 0x14c5f4u: goto label_14c5f4;
        case 0x14c600u: goto label_14c600;
        case 0x14c608u: goto label_14c608;
        case 0x14c624u: goto label_14c624;
        case 0x14c630u: goto label_14c630;
        case 0x14c640u: goto label_14c640;
        default: break;
    }

    ctx->pc = 0x14c588u;

    // 0x14c588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c58c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c594: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x14c598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c59c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c5a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14c5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c5a8: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x14C5A8u;
    SET_GPR_U32(ctx, 31, 0x14C5B0u);
    ctx->pc = 0x14C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5A8u;
    // 0x14c5ac: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14C5A8u, 0x14C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5B0u;
label_14c5b0:
    // 0x14c5b0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x14C5B0u;
    SET_GPR_U32(ctx, 31, 0x14C5B8u);
    ctx->pc = 0x14C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5B0u;
    // 0x14c5b4: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14C5B0u, 0x14C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5B8u;
label_14c5b8:
    // 0x14c5b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14c5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x14c5c4: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x14c5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5cc: 0xc055890  jal         func_156240
    ctx->pc = 0x14C5CCu;
    SET_GPR_U32(ctx, 31, 0x14C5D4u);
    ctx->pc = 0x14C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5CCu;
    // 0x14c5d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156240u, 0x14C5CCu, 0x14C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5D4u;
label_14c5d4:
    // 0x14c5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5d8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x14C5D8u;
    SET_GPR_U32(ctx, 31, 0x14C5E0u);
    ctx->pc = 0x14C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5D8u;
    // 0x14c5dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14C5D8u, 0x14C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5E0u;
label_14c5e0:
    // 0x14c5e0: 0xae3001ac  sw          $s0, 0x1AC($s1)
    ctx->pc = 0x14c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 16));
    // 0x14c5e4: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x14c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x14c5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5ec: 0xc055a18  jal         func_156860
    ctx->pc = 0x14C5ECu;
    SET_GPR_U32(ctx, 31, 0x14C5F4u);
    ctx->pc = 0x14C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5ECu;
    // 0x14c5f0: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156860u, 0x14C5ECu, 0x14C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5F4u;
label_14c5f4:
    // 0x14c5f4: 0x8e320170  lw          $s2, 0x170($s1)
    ctx->pc = 0x14c5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x14c5f8: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x14C5F8u;
    SET_GPR_U32(ctx, 31, 0x14C600u);
    ctx->pc = 0x14C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C5F8u;
    // 0x14c5fc: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14C5F8u, 0x14C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C600u;
label_14c600:
    // 0x14c600: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x14C600u;
    SET_GPR_U32(ctx, 31, 0x14C608u);
    ctx->pc = 0x14C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C600u;
    // 0x14c604: 0x24040fd0  addiu       $a0, $zero, 0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14C600u, 0x14C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C608u;
label_14c608:
    // 0x14c608: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14c608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c60c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c610: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x14c614: 0x2442f168  addiu       $v0, $v0, -0xE98
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963560));
    // 0x14c618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c61c: 0xc058296  jal         func_160A58
    ctx->pc = 0x14C61Cu;
    SET_GPR_U32(ctx, 31, 0x14C624u);
    ctx->pc = 0x14C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C61Cu;
    // 0x14c620: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160A58u, 0x14C61Cu, 0x14C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C624u;
label_14c624:
    // 0x14c624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c628: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x14C628u;
    SET_GPR_U32(ctx, 31, 0x14C630u);
    ctx->pc = 0x14C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C628u;
    // 0x14c62c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14C628u, 0x14C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C630u;
label_14c630:
    // 0x14c630: 0xae3001b0  sw          $s0, 0x1B0($s1)
    ctx->pc = 0x14c630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 16));
    // 0x14c634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c638: 0xc0582be  jal         func_160AF8
    ctx->pc = 0x14C638u;
    SET_GPR_U32(ctx, 31, 0x14C640u);
    ctx->pc = 0x14C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C638u;
    // 0x14c63c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160AF8u, 0x14C638u, 0x14C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C640u;
label_14c640:
    // 0x14c640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c64c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14c64cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c654: 0x3e00008  jr          $ra
    ctx->pc = 0x14C654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C654u;
        // 0x14c658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C65Cu;
}
