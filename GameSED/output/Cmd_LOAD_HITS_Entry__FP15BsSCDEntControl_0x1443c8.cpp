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

// Function: Cmd_LOAD_HITS_Entry__FP15BsSCDEntControl
// Address: 0x1443c8 - 0x1444ac
void Cmd_LOAD_HITS_Entry__FP15BsSCDEntControl_0x1443c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_HITS_Entry__FP15BsSCDEntControl_0x1443c8");
#endif

    switch (ctx->pc) {
        case 0x144400u: goto label_144400;
        case 0x14440cu: goto label_14440c;
        case 0x144428u: goto label_144428;
        case 0x144438u: goto label_144438;
        case 0x144440u: goto label_144440;
        case 0x14444cu: goto label_14444c;
        case 0x144454u: goto label_144454;
        case 0x144478u: goto label_144478;
        case 0x14448cu: goto label_14448c;
        default: break;
    }

    ctx->pc = 0x1443c8u;

    // 0x1443c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1443c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1443cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1443ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443d0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1443d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1443d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1443d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1443d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1443d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1443dc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1443dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1443e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1443e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1443e4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1443e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1443e8: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x1443e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1443ec: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1443ECu;
    {
        const bool branch_taken_0x1443ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443ECu;
        // 0x1443f0: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1443ec) {
            ctx->pc = 0x144430u;
            goto label_144430;
        }
    }
    ctx->pc = 0x1443F4u;
    // 0x1443f4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1443f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1443f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1443F8u;
    SET_GPR_U32(ctx, 31, 0x144400u);
    ctx->pc = 0x1443FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443F8u;
    // 0x1443fc: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1443F8u, 0x144400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144400u;
label_144400:
    // 0x144400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144404: 0xc060a02  jal         func_182808
    ctx->pc = 0x144404u;
    SET_GPR_U32(ctx, 31, 0x14440Cu);
    ctx->pc = 0x144408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144404u;
    // 0x144408: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x144404u, 0x14440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14440Cu;
label_14440c:
    // 0x14440c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144410: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144414: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x144414u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x144418: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x144418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14441c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14441cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144420: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144420u;
    SET_GPR_U32(ctx, 31, 0x144428u);
    ctx->pc = 0x144424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144420u;
    // 0x144424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144420u, 0x144428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144428u;
label_144428:
    // 0x144428: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144428u;
    {
        const bool branch_taken_0x144428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144428) {
            ctx->pc = 0x144444u;
            goto label_144444;
        }
    }
    ctx->pc = 0x144430u;
label_144430:
    // 0x144430: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144430u;
    SET_GPR_U32(ctx, 31, 0x144438u);
    ctx->pc = 0x144434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144430u;
    // 0x144434: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144430u, 0x144438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144438u;
label_144438:
    // 0x144438: 0xc060a02  jal         func_182808
    ctx->pc = 0x144438u;
    SET_GPR_U32(ctx, 31, 0x144440u);
    ctx->pc = 0x14443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144438u;
    // 0x14443c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x144438u, 0x144440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144440u;
label_144440:
    // 0x144440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144444:
    // 0x144444: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144444u;
    SET_GPR_U32(ctx, 31, 0x14444Cu);
    ctx->pc = 0x144448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144444u;
    // 0x144448: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144444u, 0x14444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14444Cu;
label_14444c:
    // 0x14444c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x14444Cu;
    SET_GPR_U32(ctx, 31, 0x144454u);
    ctx->pc = 0x144450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14444Cu;
    // 0x144450: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14444Cu, 0x144454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144454u;
label_144454:
    // 0x144454: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x144454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x144458: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x144458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14445c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x14445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x144460: 0x34424d48  ori         $v0, $v0, 0x4D48
    ctx->pc = 0x144460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19784);
    // 0x144464: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144468: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x144468u;
    {
        const bool branch_taken_0x144468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x24846a30  addiu       $a0, $a0, 0x6A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144468) {
            ctx->pc = 0x14448Cu;
            goto label_14448c;
        }
    }
    ctx->pc = 0x144470u;
    // 0x144470: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x144470u;
    SET_GPR_U32(ctx, 31, 0x144478u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x144470u, 0x144478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144478u;
label_144478:
    // 0x144478: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x144478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14447c: 0x24a56a50  addiu       $a1, $a1, 0x6A50
    ctx->pc = 0x14447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27216));
    // 0x144480: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x144484: 0xc068186  jal         func_1A0618
    ctx->pc = 0x144484u;
    SET_GPR_U32(ctx, 31, 0x14448Cu);
    ctx->pc = 0x144488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144484u;
    // 0x144488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x144484u, 0x14448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14448Cu;
label_14448c:
    // 0x14448c: 0xae720064  sw          $s2, 0x64($s3)
    ctx->pc = 0x14448cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 18));
    // 0x144490: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144494: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144498: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x144498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14449c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x14449cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1444a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1444a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1444a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1444A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1444A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444A4u;
        // 0x1444a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1444A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1444ACu;
}
