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

// Function: WSpriteResetSequence__FP8WcSprite
// Address: 0x18a688 - 0x18a7bc
void WSpriteResetSequence__FP8WcSprite_0x18a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteResetSequence__FP8WcSprite_0x18a688");
#endif

    switch (ctx->pc) {
        case 0x18a6ccu: goto label_18a6cc;
        case 0x18a76cu: goto label_18a76c;
        default: break;
    }

    ctx->pc = 0x18a688u;

    // 0x18a688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a68c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18a698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a69c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18a6a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a6a4: 0x8e110208  lw          $s1, 0x208($s0)
    ctx->pc = 0x18a6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18a6a8: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a6a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x18a6ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a6b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a6b4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a6b8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x18a6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18a6bc: 0x6420036  bltzl       $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x18A6BCu;
    {
        const bool branch_taken_0x18a6bc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x18a6bc) {
            ctx->pc = 0x18A6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A6BCu;
            // 0x18a6c0: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A798u;
            goto label_18a798;
        }
    }
    ctx->pc = 0x18A6C4u;
    // 0x18a6c4: 0xc06292a  jal         func_18A4A8
    ctx->pc = 0x18A6C4u;
    SET_GPR_U32(ctx, 31, 0x18A6CCu);
    ctx->pc = 0x18A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6C4u;
    // 0x18a6c8: 0x3245003f  andi        $a1, $s2, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A4A8u, 0x18A6C4u, 0x18A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6CCu;
label_18a6cc:
    // 0x18a6cc: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x18a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x18a6d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18A6D0u;
    {
        const bool branch_taken_0x18a6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6D0u;
        // 0x18a6d4: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6d0) {
            ctx->pc = 0x18A70Cu;
            goto label_18a70c;
        }
    }
    ctx->pc = 0x18A6D8u;
    // 0x18a6d8: 0x9603015c  lhu         $v1, 0x15C($s0)
    ctx->pc = 0x18a6d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x18a6dc: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x18a6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18a6e4: 0xdc860038  ld          $a2, 0x38($a0)
    ctx->pc = 0x18a6e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18a6e8: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x18a6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a6ec: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x18a6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a6f0: 0x94830030  lhu         $v1, 0x30($a0)
    ctx->pc = 0x18a6f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18a6f4: 0x94e5000c  lhu         $a1, 0xC($a3)
    ctx->pc = 0x18a6f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18a6f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a6fc: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x18a6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x18a700: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18a704: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x18a704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x18a708: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x18a708u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
label_18a70c:
    // 0x18a70c: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x18a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x18a710: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18A710u;
    {
        const bool branch_taken_0x18a710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A710u;
        // 0x18a714: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a710) {
            ctx->pc = 0x18A74Cu;
            goto label_18a74c;
        }
    }
    ctx->pc = 0x18A718u;
    // 0x18a718: 0x9603015c  lhu         $v1, 0x15C($s0)
    ctx->pc = 0x18a718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x18a71c: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x18a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x18a720: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a724: 0xdc860038  ld          $a2, 0x38($a0)
    ctx->pc = 0x18a724u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18a728: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x18a728u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a72c: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x18a72cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a730: 0x94830030  lhu         $v1, 0x30($a0)
    ctx->pc = 0x18a730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18a734: 0x94e5000c  lhu         $a1, 0xC($a3)
    ctx->pc = 0x18a734u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18a738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a73c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x18a73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x18a740: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18a744: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x18a744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x18a748: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x18a748u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
label_18a74c:
    // 0x18a74c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a750: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A750u;
    {
        const bool branch_taken_0x18a750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A750u;
        // 0x18a754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a750) {
            ctx->pc = 0x18A76Cu;
            goto label_18a76c;
        }
    }
    ctx->pc = 0x18A758u;
    // 0x18a758: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x18a75c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a764: 0xc062972  jal         func_18A5C8
    ctx->pc = 0x18A764u;
    SET_GPR_U32(ctx, 31, 0x18A76Cu);
    ctx->pc = 0x18A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A764u;
    // 0x18a768: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5C8u, 0x18A764u, 0x18A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A76Cu;
label_18a76c:
    // 0x18a76c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18a770: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A770u;
    {
        const bool branch_taken_0x18a770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a770) {
            ctx->pc = 0x18A774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A770u;
            // 0x18a774: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A790u;
            goto label_18a790;
        }
    }
    ctx->pc = 0x18A778u;
    // 0x18a778: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x18a77c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a784: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a788: 0xa2030157  sb          $v1, 0x157($s0)
    ctx->pc = 0x18a788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 343), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a78c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x18a78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_18a790:
    // 0x18a790: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x18a790u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a794: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_18a798:
    // 0x18a798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a79c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18a7a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a7a4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x18a7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a7a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18a7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a7ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a7b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7B4u;
        // 0x18a7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A7BCu;
}
