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

// Function: Cmd_GET_COLOR_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x112598 - 0x1126b4
void Cmd_GET_COLOR_PARAM_Entry__FP15BsSCDEntControl_0x112598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_COLOR_PARAM_Entry__FP15BsSCDEntControl_0x112598");
#endif

    switch (ctx->pc) {
        case 0x1125ccu: goto label_1125cc;
        case 0x1125e0u: goto label_1125e0;
        case 0x1125e8u: goto label_1125e8;
        case 0x1125f4u: goto label_1125f4;
        case 0x11269cu: goto label_11269c;
        default: break;
    }

    ctx->pc = 0x112598u;

    // 0x112598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11259c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1125a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1125a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1125a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1125a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1125a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1125ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1125acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1125b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1125b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1125b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1125b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1125bc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1125BCu;
    {
        const bool branch_taken_0x1125bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125BCu;
        // 0x1125c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125bc) {
            ctx->pc = 0x1125D8u;
            goto label_1125d8;
        }
    }
    ctx->pc = 0x1125C4u;
    // 0x1125c4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1125C4u;
    SET_GPR_U32(ctx, 31, 0x1125CCu);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1125C4u, 0x1125CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125CCu;
label_1125cc:
    // 0x1125cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1125CCu;
    {
        const bool branch_taken_0x1125cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125CCu;
        // 0x1125d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125cc) {
            ctx->pc = 0x1125ECu;
            goto label_1125ec;
        }
    }
    ctx->pc = 0x1125D4u;
    // 0x1125d4: 0x0  nop
    ctx->pc = 0x1125d4u;
    // NOP
label_1125d8:
    // 0x1125d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1125D8u;
    SET_GPR_U32(ctx, 31, 0x1125E0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1125D8u, 0x1125E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125E0u;
label_1125e0:
    // 0x1125e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1125E0u;
    SET_GPR_U32(ctx, 31, 0x1125E8u);
    ctx->pc = 0x1125E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125E0u;
    // 0x1125e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1125E0u, 0x1125E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125E8u;
label_1125e8:
    // 0x1125e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1125e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1125ec:
    // 0x1125ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1125ECu;
    SET_GPR_U32(ctx, 31, 0x1125F4u);
    ctx->pc = 0x1125F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125ECu;
    // 0x1125f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1125ECu, 0x1125F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125F4u;
label_1125f4:
    // 0x1125f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1125f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125f8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1125f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1125fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1125FCu;
    {
        const bool branch_taken_0x1125fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125FCu;
        // 0x112600: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125fc) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112604u;
    // 0x112604: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x112604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x112608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11260c: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x11260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
    // 0x112610: 0x600008  jr          $v1
    ctx->pc = 0x112610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112618u: goto label_112618;
            case 0x112628u: goto label_112628;
            case 0x112638u: goto label_112638;
            case 0x112648u: goto label_112648;
            case 0x112658u: goto label_112658;
            case 0x112668u: goto label_112668;
            case 0x112678u: goto label_112678;
            case 0x112688u: goto label_112688;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x112618u;
label_112618:
    // 0x112618: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11261c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11261cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112620: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x112620u;
    {
        const bool branch_taken_0x112620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112620u;
        // 0x112624: 0x90710030  lbu         $s1, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112620) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112628u;
label_112628:
    // 0x112628: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11262c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11262cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112630: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x112630u;
    {
        const bool branch_taken_0x112630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112630u;
        // 0x112634: 0x90710031  lbu         $s1, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112630) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112638u;
label_112638:
    // 0x112638: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11263c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11263cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112640: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112640u;
    {
        const bool branch_taken_0x112640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112640u;
        // 0x112644: 0x90710032  lbu         $s1, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112640) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112648u;
label_112648:
    // 0x112648: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11264c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112650: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x112650u;
    {
        const bool branch_taken_0x112650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112650u;
        // 0x112654: 0x90710033  lbu         $s1, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112650) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112658u;
label_112658:
    // 0x112658: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11265c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11265cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112660u;
    {
        const bool branch_taken_0x112660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112660u;
        // 0x112664: 0xa0710030  sb          $s1, 0x30($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112660) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112668u;
label_112668:
    // 0x112668: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11266c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11266cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112670u;
    {
        const bool branch_taken_0x112670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112670u;
        // 0x112674: 0xa0710031  sb          $s1, 0x31($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112670) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112678u;
label_112678:
    // 0x112678: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11267c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11267cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112680u;
    {
        const bool branch_taken_0x112680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112680u;
        // 0x112684: 0xa0710032  sb          $s1, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112680) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x112688u;
label_112688:
    // 0x112688: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11268c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11268cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112690: 0xa0710033  sb          $s1, 0x33($v1)
    ctx->pc = 0x112690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 17));
label_112694:
    // 0x112694: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x112694u;
    {
        const bool branch_taken_0x112694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x112694) {
            ctx->pc = 0x112698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112694u;
            // 0x112698: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11269Cu;
            goto label_11269c;
        }
    }
    ctx->pc = 0x11269Cu;
label_11269c:
    // 0x11269c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11269cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1126a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1126a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1126a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1126a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1126a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1126a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1126ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1126ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1126B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126ACu;
        // 0x1126b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1126ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1126B4u;
}
