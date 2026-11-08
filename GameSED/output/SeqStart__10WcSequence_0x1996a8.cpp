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

// Function: SeqStart__10WcSequence
// Address: 0x1996a8 - 0x199724
void SeqStart__10WcSequence_0x1996a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqStart__10WcSequence_0x1996a8");
#endif

    switch (ctx->pc) {
        case 0x1996a8u: goto label_1996a8;
        case 0x1996acu: goto label_1996ac;
        case 0x1996b0u: goto label_1996b0;
        case 0x1996b4u: goto label_1996b4;
        case 0x1996b8u: goto label_1996b8;
        case 0x1996bcu: goto label_1996bc;
        case 0x1996c0u: goto label_1996c0;
        case 0x1996c4u: goto label_1996c4;
        case 0x1996c8u: goto label_1996c8;
        case 0x1996ccu: goto label_1996cc;
        case 0x1996d0u: goto label_1996d0;
        case 0x1996d4u: goto label_1996d4;
        case 0x1996d8u: goto label_1996d8;
        case 0x1996dcu: goto label_1996dc;
        case 0x1996e0u: goto label_1996e0;
        case 0x1996e4u: goto label_1996e4;
        case 0x1996e8u: goto label_1996e8;
        case 0x1996ecu: goto label_1996ec;
        case 0x1996f0u: goto label_1996f0;
        case 0x1996f4u: goto label_1996f4;
        case 0x1996f8u: goto label_1996f8;
        case 0x1996fcu: goto label_1996fc;
        case 0x199700u: goto label_199700;
        case 0x199704u: goto label_199704;
        case 0x199708u: goto label_199708;
        case 0x19970cu: goto label_19970c;
        case 0x199710u: goto label_199710;
        case 0x199714u: goto label_199714;
        case 0x199718u: goto label_199718;
        case 0x19971cu: goto label_19971c;
        case 0x199720u: goto label_199720;
        default: break;
    }

    ctx->pc = 0x1996a8u;

label_1996a8:
    // 0x1996a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1996a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1996ac:
    // 0x1996ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1996acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1996b0:
    // 0x1996b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1996b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1996b4:
    // 0x1996b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1996b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1996b8:
    // 0x1996b8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1996b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_1996bc:
    // 0x1996bc: 0xc066620  jal         func_199880
label_1996c0:
    if (ctx->pc == 0x1996C0u) {
        ctx->pc = 0x1996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996BCu;
        // 0x1996c0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996C4u;
        goto label_1996c4;
    }
    ctx->pc = 0x1996BCu;
    SET_GPR_U32(ctx, 31, 0x1996C4u);
    ctx->pc = 0x1996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996BCu;
    // 0x1996c0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199880u, 0x1996BCu, 0x1996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996C4u;
label_1996c4:
    // 0x1996c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1996c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1996c8:
    // 0x1996c8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1996cc:
    // 0x1996cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1996ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1996d0:
    // 0x1996d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1996d4:
    // 0x1996d4: 0x60f809  jalr        $v1
label_1996d8:
    if (ctx->pc == 0x1996D8u) {
        ctx->pc = 0x1996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996D4u;
        // 0x1996d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996DCu;
        goto label_1996dc;
    }
    ctx->pc = 0x1996D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1996DCu);
        ctx->pc = 0x1996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996D4u;
        // 0x1996d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1996D4u, 0x1996DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1996DCu;
label_1996dc:
    // 0x1996dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1996e0:
    // 0x1996e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1996e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1996e4:
    // 0x1996e4: 0xc066452  jal         func_199148
label_1996e8:
    if (ctx->pc == 0x1996E8u) {
        ctx->pc = 0x1996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996E4u;
        // 0x1996e8: 0xac500154  sw          $s0, 0x154($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996ECu;
        goto label_1996ec;
    }
    ctx->pc = 0x1996E4u;
    SET_GPR_U32(ctx, 31, 0x1996ECu);
    ctx->pc = 0x1996E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996E4u;
    // 0x1996e8: 0xac500154  sw          $s0, 0x154($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199148u, 0x1996E4u, 0x1996ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996ECu;
label_1996ec:
    // 0x1996ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1996f0:
    // 0x1996f0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1996f4:
    // 0x1996f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1996f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1996f8:
    // 0x1996f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1996f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1996fc:
    // 0x1996fc: 0x60f809  jalr        $v1
label_199700:
    if (ctx->pc == 0x199700u) {
        ctx->pc = 0x199700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996FCu;
        // 0x199700: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199704u;
        goto label_199704;
    }
    ctx->pc = 0x1996FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199704u);
        ctx->pc = 0x199700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996FCu;
        // 0x199700: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1996FCu, 0x199704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199704u;
label_199704:
    // 0x199704: 0xc066622  jal         func_199888
label_199708:
    if (ctx->pc == 0x199708u) {
        ctx->pc = 0x199708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199704u;
        // 0x199708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19970Cu;
        goto label_19970c;
    }
    ctx->pc = 0x199704u;
    SET_GPR_U32(ctx, 31, 0x19970Cu);
    ctx->pc = 0x199708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199704u;
    // 0x199708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199888u, 0x199704u, 0x19970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19970Cu;
label_19970c:
    // 0x19970c: 0xc0665f4  jal         func_1997D0
label_199710:
    if (ctx->pc == 0x199710u) {
        ctx->pc = 0x199710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19970Cu;
        // 0x199710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199714u;
        goto label_199714;
    }
    ctx->pc = 0x19970Cu;
    SET_GPR_U32(ctx, 31, 0x199714u);
    ctx->pc = 0x199710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19970Cu;
    // 0x199710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1997D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1997D0u, 0x19970Cu, 0x199714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199714u;
label_199714:
    // 0x199714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199718:
    // 0x199718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19971c:
    // 0x19971c: 0x3e00008  jr          $ra
label_199720:
    if (ctx->pc == 0x199720u) {
        ctx->pc = 0x199720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19971Cu;
        // 0x199720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199724u;
        goto label_fallthrough_0x19971c;
    }
    ctx->pc = 0x19971Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19971Cu;
        // 0x199720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19971Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19971c:
    ctx->pc = 0x199724u;
}
