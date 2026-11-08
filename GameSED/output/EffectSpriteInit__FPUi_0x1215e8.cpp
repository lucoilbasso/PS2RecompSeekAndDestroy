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

// Function: EffectSpriteInit__FPUi
// Address: 0x1215e8 - 0x1216a0
void EffectSpriteInit__FPUi_0x1215e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSpriteInit__FPUi_0x1215e8");
#endif

    switch (ctx->pc) {
        case 0x121604u: goto label_121604;
        case 0x12161cu: goto label_12161c;
        case 0x121638u: goto label_121638;
        case 0x12164cu: goto label_12164c;
        case 0x121658u: goto label_121658;
        case 0x121678u: goto label_121678;
        case 0x12168cu: goto label_12168c;
        default: break;
    }

    ctx->pc = 0x1215e8u;

    // 0x1215e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1215e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1215ec: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1215ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1215f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1215f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1215f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1215f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1215f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1215f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1215fc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1215FCu;
    SET_GPR_U32(ctx, 31, 0x121604u);
    ctx->pc = 0x121600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215FCu;
    // 0x121600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1215FCu, 0x121604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121604u;
label_121604:
    // 0x121604: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12160c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12160Cu;
    {
        const bool branch_taken_0x12160c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12160Cu;
        // 0x121610: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12160c) {
            ctx->pc = 0x12168Cu;
            goto label_12168c;
        }
    }
    ctx->pc = 0x121614u;
    // 0x121614: 0xc04844a  jal         func_121128
    ctx->pc = 0x121614u;
    SET_GPR_U32(ctx, 31, 0x12161Cu);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x121614u, 0x12161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12161Cu;
label_12161c:
    // 0x12161c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12161cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x121620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121620u;
    {
        const bool branch_taken_0x121620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121620u;
        // 0x121624: 0x24845b70  addiu       $a0, $a0, 0x5B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121620) {
            ctx->pc = 0x121630u;
            goto label_121630;
        }
    }
    ctx->pc = 0x121628u;
    // 0x121628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121628u;
    {
        const bool branch_taken_0x121628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121628u;
        // 0x12162c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121628) {
            ctx->pc = 0x12164Cu;
            goto label_12164c;
        }
    }
    ctx->pc = 0x121630u;
label_121630:
    // 0x121630: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x121630u;
    SET_GPR_U32(ctx, 31, 0x121638u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x121630u, 0x121638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121638u;
label_121638:
    // 0x121638: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12163c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121640: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x121640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x121644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x121644u;
    SET_GPR_U32(ctx, 31, 0x12164Cu);
    ctx->pc = 0x121648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121644u;
    // 0x121648: 0x24a55b80  addiu       $a1, $a1, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x121644u, 0x12164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12164Cu;
label_12164c:
    // 0x12164c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121650: 0xc04844a  jal         func_121128
    ctx->pc = 0x121650u;
    SET_GPR_U32(ctx, 31, 0x121658u);
    ctx->pc = 0x121654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121650u;
    // 0x121654: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x121650u, 0x121658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121658u;
label_121658:
    // 0x121658: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x121658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x12165c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12165Cu;
    {
        const bool branch_taken_0x12165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12165Cu;
        // 0x121660: 0x24845ba8  addiu       $a0, $a0, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12165c) {
            ctx->pc = 0x121670u;
            goto label_121670;
        }
    }
    ctx->pc = 0x121664u;
    // 0x121664: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x121664u;
    {
        const bool branch_taken_0x121664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121664u;
        // 0x121668: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121664) {
            ctx->pc = 0x12168Cu;
            goto label_12168c;
        }
    }
    ctx->pc = 0x12166Cu;
    // 0x12166c: 0x0  nop
    ctx->pc = 0x12166cu;
    // NOP
label_121670:
    // 0x121670: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x121670u;
    SET_GPR_U32(ctx, 31, 0x121678u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x121670u, 0x121678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121678u;
label_121678:
    // 0x121678: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x121678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12167c: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x12167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
    // 0x121680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x121680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121684: 0xc068186  jal         func_1A0618
    ctx->pc = 0x121684u;
    SET_GPR_U32(ctx, 31, 0x12168Cu);
    ctx->pc = 0x121688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121684u;
    // 0x121688: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x121684u, 0x12168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12168Cu;
label_12168c:
    // 0x12168c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12168cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121698: 0x3e00008  jr          $ra
    ctx->pc = 0x121698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121698u;
        // 0x12169c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1216A0u;
}
