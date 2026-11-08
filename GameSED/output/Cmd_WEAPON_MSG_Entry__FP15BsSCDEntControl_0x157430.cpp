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

// Function: Cmd_WEAPON_MSG_Entry__FP15BsSCDEntControl
// Address: 0x157430 - 0x1574f4
void Cmd_WEAPON_MSG_Entry__FP15BsSCDEntControl_0x157430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WEAPON_MSG_Entry__FP15BsSCDEntControl_0x157430");
#endif

    switch (ctx->pc) {
        case 0x157430u: goto label_157430;
        case 0x157434u: goto label_157434;
        case 0x157438u: goto label_157438;
        case 0x15743cu: goto label_15743c;
        case 0x157440u: goto label_157440;
        case 0x157444u: goto label_157444;
        case 0x157448u: goto label_157448;
        case 0x15744cu: goto label_15744c;
        case 0x157450u: goto label_157450;
        case 0x157454u: goto label_157454;
        case 0x157458u: goto label_157458;
        case 0x15745cu: goto label_15745c;
        case 0x157460u: goto label_157460;
        case 0x157464u: goto label_157464;
        case 0x157468u: goto label_157468;
        case 0x15746cu: goto label_15746c;
        case 0x157470u: goto label_157470;
        case 0x157474u: goto label_157474;
        case 0x157478u: goto label_157478;
        case 0x15747cu: goto label_15747c;
        case 0x157480u: goto label_157480;
        case 0x157484u: goto label_157484;
        case 0x157488u: goto label_157488;
        case 0x15748cu: goto label_15748c;
        case 0x157490u: goto label_157490;
        case 0x157494u: goto label_157494;
        case 0x157498u: goto label_157498;
        case 0x15749cu: goto label_15749c;
        case 0x1574a0u: goto label_1574a0;
        case 0x1574a4u: goto label_1574a4;
        case 0x1574a8u: goto label_1574a8;
        case 0x1574acu: goto label_1574ac;
        case 0x1574b0u: goto label_1574b0;
        case 0x1574b4u: goto label_1574b4;
        case 0x1574b8u: goto label_1574b8;
        case 0x1574bcu: goto label_1574bc;
        case 0x1574c0u: goto label_1574c0;
        case 0x1574c4u: goto label_1574c4;
        case 0x1574c8u: goto label_1574c8;
        case 0x1574ccu: goto label_1574cc;
        case 0x1574d0u: goto label_1574d0;
        case 0x1574d4u: goto label_1574d4;
        case 0x1574d8u: goto label_1574d8;
        case 0x1574dcu: goto label_1574dc;
        case 0x1574e0u: goto label_1574e0;
        case 0x1574e4u: goto label_1574e4;
        case 0x1574e8u: goto label_1574e8;
        case 0x1574ecu: goto label_1574ec;
        case 0x1574f0u: goto label_1574f0;
        default: break;
    }

    ctx->pc = 0x157430u;

label_157430:
    // 0x157430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_157434:
    // 0x157434: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x157434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_157438:
    // 0x157438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15743c:
    // 0x15743c: 0x24052118  addiu       $a1, $zero, 0x2118
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
label_157440:
    // 0x157440: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_157444:
    // 0x157444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x157444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157448:
    // 0x157448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15744c:
    // 0x15744c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_157450:
    // 0x157450: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_157454:
    // 0x157454: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x157454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_157458:
    // 0x157458: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15745c:
    // 0x15745c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x15745cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_157460:
    // 0x157460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157464:
    // 0x157464: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
label_157468:
    if (ctx->pc == 0x157468u) {
        ctx->pc = 0x157468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157464u;
        // 0x157468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15746Cu;
        goto label_15746c;
    }
    ctx->pc = 0x157464u;
    {
        const bool branch_taken_0x157464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x157468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157464u;
        // 0x157468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157464) {
            ctx->pc = 0x15747Cu;
            goto label_15747c;
        }
    }
    ctx->pc = 0x15746Cu;
label_15746c:
    // 0x15746c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_157470:
    // 0x157470: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x157470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_157474:
    // 0x157474: 0xc068186  jal         func_1A0618
label_157478:
    if (ctx->pc == 0x157478u) {
        ctx->pc = 0x157478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157474u;
        // 0x157478: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15747Cu;
        goto label_15747c;
    }
    ctx->pc = 0x157474u;
    SET_GPR_U32(ctx, 31, 0x15747Cu);
    ctx->pc = 0x157478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157474u;
    // 0x157478: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x157474u, 0x15747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15747Cu;
label_15747c:
    // 0x15747c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x15747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_157480:
    // 0x157480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157484:
    // 0x157484: 0x2450fcb0  addiu       $s0, $v0, -0x350
    ctx->pc = 0x157484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_157488:
    // 0x157488: 0xc06a25a  jal         func_1A8968
label_15748c:
    if (ctx->pc == 0x15748Cu) {
        ctx->pc = 0x15748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157488u;
        // 0x15748c: 0x8e130404  lw          $s3, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157490u;
        goto label_157490;
    }
    ctx->pc = 0x157488u;
    SET_GPR_U32(ctx, 31, 0x157490u);
    ctx->pc = 0x15748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157488u;
    // 0x15748c: 0x8e130404  lw          $s3, 0x404($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x157488u, 0x157490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157490u;
label_157490:
    // 0x157490: 0x8e280260  lw          $t0, 0x260($s1)
    ctx->pc = 0x157490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_157494:
    // 0x157494: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x157494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157498:
    // 0x157498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15749c:
    // 0x15749c: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
label_1574a0:
    if (ctx->pc == 0x1574A0u) {
        ctx->pc = 0x1574A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15749Cu;
        // 0x1574a0: 0xae090404  sw          $t1, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574A4u;
        goto label_1574a4;
    }
    ctx->pc = 0x15749Cu;
    {
        const bool branch_taken_0x15749c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15749Cu;
        // 0x1574a0: 0xae090404  sw          $t1, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15749c) {
            ctx->pc = 0x1574D4u;
            goto label_1574d4;
        }
    }
    ctx->pc = 0x1574A4u;
label_1574a4:
    // 0x1574a4: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x1574a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1574a8:
    // 0x1574a8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1574a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1574ac:
    // 0x1574ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1574acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1574b0:
    // 0x1574b0: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1574b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1574b4:
    // 0x1574b4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1574b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1574b8:
    // 0x1574b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1574b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1574bc:
    // 0x1574bc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1574bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1574c0:
    // 0x1574c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1574c4:
    // 0x1574c4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1574c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1574c8:
    // 0x1574c8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1574c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1574cc:
    // 0x1574cc: 0xe0f809  jalr        $a3
label_1574d0:
    if (ctx->pc == 0x1574D0u) {
        ctx->pc = 0x1574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574CCu;
        // 0x1574d0: 0x123300b  movn        $a2, $t1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574D4u;
        goto label_1574d4;
    }
    ctx->pc = 0x1574CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1574D4u);
        ctx->pc = 0x1574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574CCu;
        // 0x1574d0: 0x123300b  movn        $a2, $t1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574CCu, 0x1574D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1574D4u;
label_1574d4:
    // 0x1574d4: 0xae130404  sw          $s3, 0x404($s0)
    ctx->pc = 0x1574d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 19));
label_1574d8:
    // 0x1574d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1574d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1574dc:
    // 0x1574dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1574dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1574e0:
    // 0x1574e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1574e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1574e4:
    // 0x1574e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1574e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1574e8:
    // 0x1574e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1574e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1574ec:
    // 0x1574ec: 0x3e00008  jr          $ra
label_1574f0:
    if (ctx->pc == 0x1574F0u) {
        ctx->pc = 0x1574F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574ECu;
        // 0x1574f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574F4u;
        goto label_fallthrough_0x1574ec;
    }
    ctx->pc = 0x1574ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1574F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574ECu;
        // 0x1574f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1574ec:
    ctx->pc = 0x1574F4u;
}
