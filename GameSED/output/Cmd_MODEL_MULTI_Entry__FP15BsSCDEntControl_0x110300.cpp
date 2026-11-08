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

// Function: Cmd_MODEL_MULTI_Entry__FP15BsSCDEntControl
// Address: 0x110300 - 0x1103a4
void Cmd_MODEL_MULTI_Entry__FP15BsSCDEntControl_0x110300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_MULTI_Entry__FP15BsSCDEntControl_0x110300");
#endif

    switch (ctx->pc) {
        case 0x110328u: goto label_110328;
        case 0x110330u: goto label_110330;
        case 0x110340u: goto label_110340;
        case 0x110368u: goto label_110368;
        case 0x110378u: goto label_110378;
        case 0x110388u: goto label_110388;
        default: break;
    }

    ctx->pc = 0x110300u;

    // 0x110300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110304: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11030c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x110310: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x110310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110314: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x110314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x110318: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11031c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x11031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x110320: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110320u;
    SET_GPR_U32(ctx, 31, 0x110328u);
    ctx->pc = 0x110324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110320u;
    // 0x110324: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110320u, 0x110328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110328u;
label_110328:
    // 0x110328: 0xc066362  jal         func_198D88
    ctx->pc = 0x110328u;
    SET_GPR_U32(ctx, 31, 0x110330u);
    ctx->pc = 0x11032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110328u;
    // 0x11032c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198D88u, 0x110328u, 0x110330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110330u;
label_110330:
    // 0x110330: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110338: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x110338u;
    SET_GPR_U32(ctx, 31, 0x110340u);
    ctx->pc = 0x11033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110338u;
    // 0x11033c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x110338u, 0x110340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110340u;
label_110340:
    // 0x110340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110344: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x110344u;
    {
        const bool branch_taken_0x110344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110344u;
        // 0x110348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110344) {
            ctx->pc = 0x110370u;
            goto label_110370;
        }
    }
    ctx->pc = 0x11034Cu;
    // 0x11034c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110350: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x110350u;
    {
        const bool branch_taken_0x110350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110350u;
        // 0x110354: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110350) {
            ctx->pc = 0x110378u;
            goto label_110378;
        }
    }
    ctx->pc = 0x110358u;
    // 0x110358: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11035c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11035cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110360: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x110360u;
    SET_GPR_U32(ctx, 31, 0x110368u);
    ctx->pc = 0x110364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110360u;
    // 0x110364: 0x24a53cd8  addiu       $a1, $a1, 0x3CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x110360u, 0x110368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110368u;
label_110368:
    // 0x110368: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x110368u;
    {
        const bool branch_taken_0x110368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110368u;
        // 0x11036c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110368) {
            ctx->pc = 0x11038Cu;
            goto label_11038c;
        }
    }
    ctx->pc = 0x110370u;
label_110370:
    // 0x110370: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x110370u;
    SET_GPR_U32(ctx, 31, 0x110378u);
    ctx->pc = 0x110374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110370u;
    // 0x110374: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x110370u, 0x110378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110378u;
label_110378:
    // 0x110378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11037c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110380: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x110380u;
    SET_GPR_U32(ctx, 31, 0x110388u);
    ctx->pc = 0x110384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110380u;
    // 0x110384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x110380u, 0x110388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110388u;
label_110388:
    // 0x110388: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11038c:
    // 0x11038c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11038cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110390: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110394: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x110394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x110398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11039c: 0x3e00008  jr          $ra
    ctx->pc = 0x11039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1103A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11039Cu;
        // 0x1103a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1103A4u;
}
