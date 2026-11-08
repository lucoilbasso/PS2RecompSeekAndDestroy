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

// Function: Cmd_LOAD_HITMAP_Entry__FP15BsSCDEntControl
// Address: 0x144570 - 0x14462c
void Cmd_LOAD_HITMAP_Entry__FP15BsSCDEntControl_0x144570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_HITMAP_Entry__FP15BsSCDEntControl_0x144570");
#endif

    switch (ctx->pc) {
        case 0x1445a8u: goto label_1445a8;
        case 0x1445b4u: goto label_1445b4;
        case 0x1445d0u: goto label_1445d0;
        case 0x1445e0u: goto label_1445e0;
        case 0x1445f0u: goto label_1445f0;
        case 0x1445f8u: goto label_1445f8;
        case 0x144604u: goto label_144604;
        case 0x14460cu: goto label_14460c;
        default: break;
    }

    ctx->pc = 0x144570u;

    // 0x144570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144574: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x144574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144578: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x14457c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x14457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144580: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x144580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x144584: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x144588: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x144588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14458c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x144590: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x144590u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x144594: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x144594u;
    {
        const bool branch_taken_0x144594 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144594u;
        // 0x144598: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144594) {
            ctx->pc = 0x1445D8u;
            goto label_1445d8;
        }
    }
    ctx->pc = 0x14459Cu;
    // 0x14459c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1445a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1445A0u;
    SET_GPR_U32(ctx, 31, 0x1445A8u);
    ctx->pc = 0x1445A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445A0u;
    // 0x1445a4: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1445A0u, 0x1445A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445A8u;
label_1445a8:
    // 0x1445a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1445a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445ac: 0xc060a02  jal         func_182808
    ctx->pc = 0x1445ACu;
    SET_GPR_U32(ctx, 31, 0x1445B4u);
    ctx->pc = 0x1445B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445ACu;
    // 0x1445b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x1445ACu, 0x1445B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445B4u;
label_1445b4:
    // 0x1445b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1445b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1445b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445bc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1445bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1445c0: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1445c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1445c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445c8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1445C8u;
    SET_GPR_U32(ctx, 31, 0x1445D0u);
    ctx->pc = 0x1445CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445C8u;
    // 0x1445cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1445C8u, 0x1445D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445D0u;
label_1445d0:
    // 0x1445d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1445D0u;
    {
        const bool branch_taken_0x1445d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1445d0) {
            ctx->pc = 0x1445FCu;
            goto label_1445fc;
        }
    }
    ctx->pc = 0x1445D8u;
label_1445d8:
    // 0x1445d8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1445D8u;
    SET_GPR_U32(ctx, 31, 0x1445E0u);
    ctx->pc = 0x1445DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445D8u;
    // 0x1445dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1445D8u, 0x1445E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445E0u;
label_1445e0:
    // 0x1445e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1445e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1445e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1445e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445e8: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1445E8u;
    SET_GPR_U32(ctx, 31, 0x1445F0u);
    ctx->pc = 0x1445ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445E8u;
    // 0x1445ec: 0x24a5d2c8  addiu       $a1, $a1, -0x2D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1445E8u, 0x1445F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445F0u;
label_1445f0:
    // 0x1445f0: 0xc060a02  jal         func_182808
    ctx->pc = 0x1445F0u;
    SET_GPR_U32(ctx, 31, 0x1445F8u);
    ctx->pc = 0x1445F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445F0u;
    // 0x1445f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x1445F0u, 0x1445F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445F8u;
label_1445f8:
    // 0x1445f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1445f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1445fc:
    // 0x1445fc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1445FCu;
    SET_GPR_U32(ctx, 31, 0x144604u);
    ctx->pc = 0x144600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445FCu;
    // 0x144600: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1445FCu, 0x144604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144604u;
label_144604:
    // 0x144604: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144604u;
    SET_GPR_U32(ctx, 31, 0x14460Cu);
    ctx->pc = 0x144608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144604u;
    // 0x144608: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144604u, 0x14460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14460Cu;
label_14460c:
    // 0x14460c: 0xae72006c  sw          $s2, 0x6C($s3)
    ctx->pc = 0x14460cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 18));
    // 0x144610: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144614: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144618: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x144618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14461c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x14461cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144620: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144624: 0x3e00008  jr          $ra
    ctx->pc = 0x144624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144624u;
        // 0x144628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14462Cu;
}
