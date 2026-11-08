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

// Function: Cmd_LOAD_OBJS_Entry__FP15BsSCDEntControl
// Address: 0x144318 - 0x1443c4
void Cmd_LOAD_OBJS_Entry__FP15BsSCDEntControl_0x144318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_OBJS_Entry__FP15BsSCDEntControl_0x144318");
#endif

    switch (ctx->pc) {
        case 0x144350u: goto label_144350;
        case 0x14435cu: goto label_14435c;
        case 0x144378u: goto label_144378;
        case 0x144388u: goto label_144388;
        case 0x144390u: goto label_144390;
        case 0x14439cu: goto label_14439c;
        case 0x1443a4u: goto label_1443a4;
        default: break;
    }

    ctx->pc = 0x144318u;

    // 0x144318: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14431c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14431cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144320: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x144324: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x144324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144328: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x144328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x14432c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x14432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x144330: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x144330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x144334: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x144334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x144338: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x144338u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x14433c: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14433Cu;
    {
        const bool branch_taken_0x14433c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14433Cu;
        // 0x144340: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14433c) {
            ctx->pc = 0x144380u;
            goto label_144380;
        }
    }
    ctx->pc = 0x144344u;
    // 0x144344: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x144344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x144348: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144348u;
    SET_GPR_U32(ctx, 31, 0x144350u);
    ctx->pc = 0x14434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144348u;
    // 0x14434c: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144348u, 0x144350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144350u;
label_144350:
    // 0x144350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144354: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x144354u;
    SET_GPR_U32(ctx, 31, 0x14435Cu);
    ctx->pc = 0x144358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144354u;
    // 0x144358: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x144354u, 0x14435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14435Cu;
label_14435c:
    // 0x14435c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144360: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144364: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x144364u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x144368: 0x2605000b  addiu       $a1, $s0, 0xB
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x14436c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144370: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144370u;
    SET_GPR_U32(ctx, 31, 0x144378u);
    ctx->pc = 0x144374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144370u;
    // 0x144374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144370u, 0x144378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144378u;
label_144378:
    // 0x144378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144378u;
    {
        const bool branch_taken_0x144378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144378) {
            ctx->pc = 0x144394u;
            goto label_144394;
        }
    }
    ctx->pc = 0x144380u;
label_144380:
    // 0x144380: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144380u;
    SET_GPR_U32(ctx, 31, 0x144388u);
    ctx->pc = 0x144384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144380u;
    // 0x144384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144380u, 0x144388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144388u;
label_144388:
    // 0x144388: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x144388u;
    SET_GPR_U32(ctx, 31, 0x144390u);
    ctx->pc = 0x14438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144388u;
    // 0x14438c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x144388u, 0x144390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144390u;
label_144390:
    // 0x144390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144394:
    // 0x144394: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144394u;
    SET_GPR_U32(ctx, 31, 0x14439Cu);
    ctx->pc = 0x144398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144394u;
    // 0x144398: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144394u, 0x14439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14439Cu;
label_14439c:
    // 0x14439c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x1443A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14439Cu;
    // 0x1443a0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14439Cu, 0x1443A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0xae720058  sw          $s2, 0x58($s3)
    ctx->pc = 0x1443a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 18));
    // 0x1443a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1443a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1443ac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1443acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1443b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1443b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1443b4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1443b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1443b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1443b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1443bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1443BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443BCu;
        // 0x1443c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1443BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1443C4u;
}
