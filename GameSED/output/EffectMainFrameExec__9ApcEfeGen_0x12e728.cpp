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

// Function: EffectMainFrameExec__9ApcEfeGen
// Address: 0x12e728 - 0x12e858
void EffectMainFrameExec__9ApcEfeGen_0x12e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectMainFrameExec__9ApcEfeGen_0x12e728");
#endif

    switch (ctx->pc) {
        case 0x12e758u: goto label_12e758;
        case 0x12e760u: goto label_12e760;
        case 0x12e788u: goto label_12e788;
        case 0x12e790u: goto label_12e790;
        case 0x12e7acu: goto label_12e7ac;
        case 0x12e7d8u: goto label_12e7d8;
        case 0x12e7f4u: goto label_12e7f4;
        case 0x12e814u: goto label_12e814;
        case 0x12e828u: goto label_12e828;
        case 0x12e83cu: goto label_12e83c;
        default: break;
    }

    ctx->pc = 0x12e728u;

    // 0x12e728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12e72c: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x12e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    // 0x12e730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e738: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e73c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e744: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12e74c: 0xaf808a0c  sw          $zero, -0x75F4($gp)
    ctx->pc = 0x12e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
    // 0x12e750: 0xc04c8d8  jal         func_132360
    ctx->pc = 0x12E750u;
    SET_GPR_U32(ctx, 31, 0x12E758u);
    ctx->pc = 0x12E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E750u;
    // 0x12e754: 0x8e300150  lw          $s0, 0x150($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132360u, 0x12E750u, 0x12E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E758u;
label_12e758:
    // 0x12e758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e75c: 0x26220198  addiu       $v0, $s1, 0x198
    ctx->pc = 0x12e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
label_12e760:
    // 0x12e760: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e764: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12e764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12e768: 0x0  nop
    ctx->pc = 0x12e768u;
    // NOP
    // 0x12e76c: 0x0  nop
    ctx->pc = 0x12e76cu;
    // NOP
    // 0x12e770: 0x0  nop
    ctx->pc = 0x12e770u;
    // NOP
    // 0x12e774: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E774u;
    {
        const bool branch_taken_0x12e774 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E774u;
        // 0x12e778: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e774) {
            ctx->pc = 0x12E760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e760;
        }
    }
    ctx->pc = 0x12E77Cu;
    // 0x12e77c: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x12E77Cu;
    {
        const bool branch_taken_0x12e77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e77c) {
            ctx->pc = 0x12E780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E77Cu;
            // 0x12e780: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E804u;
            goto label_12e804;
        }
    }
    ctx->pc = 0x12E784u;
    // 0x12e784: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x12e784u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
label_12e788:
    // 0x12e788: 0xc04c0be  jal         func_1302F8
    ctx->pc = 0x12E788u;
    SET_GPR_U32(ctx, 31, 0x12E790u);
    ctx->pc = 0x12E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E788u;
    // 0x12e78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F8u, 0x12E788u, 0x12E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E790u;
label_12e790:
    // 0x12e790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E798u;
    {
        const bool branch_taken_0x12e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E798u;
        // 0x12e79c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e798) {
            ctx->pc = 0x12E7B8u;
            goto label_12e7b8;
        }
    }
    ctx->pc = 0x12E7A0u;
    // 0x12e7a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x12e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x12e7a4: 0xc04baee  jal         func_12EBB8
    ctx->pc = 0x12E7A4u;
    SET_GPR_U32(ctx, 31, 0x12E7ACu);
    ctx->pc = 0x12E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7A4u;
    // 0x12e7a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBB8u, 0x12E7A4u, 0x12E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7ACu;
label_12e7ac:
    // 0x12e7ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12E7ACu;
    {
        const bool branch_taken_0x12e7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e7ac) {
            ctx->pc = 0x12E7F8u;
            goto label_12e7f8;
        }
    }
    ctx->pc = 0x12E7B4u;
    // 0x12e7b4: 0x0  nop
    ctx->pc = 0x12e7b4u;
    // NOP
label_12e7b8:
    // 0x12e7b8: 0x96020132  lhu         $v0, 0x132($s0)
    ctx->pc = 0x12e7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x12e7bc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x12e7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x12e7c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E7C0u;
    {
        const bool branch_taken_0x12e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e7c0) {
            ctx->pc = 0x12E7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E7C0u;
            // 0x12e7c4: 0x96050132  lhu         $a1, 0x132($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7DCu;
            goto label_12e7dc;
        }
    }
    ctx->pc = 0x12E7C8u;
    // 0x12e7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7cc: 0x26655fc0  addiu       $a1, $s3, 0x5FC0
    ctx->pc = 0x12e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24512));
    // 0x12e7d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E7D0u;
    SET_GPR_U32(ctx, 31, 0x12E7D8u);
    ctx->pc = 0x12E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7D0u;
    // 0x12e7d4: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E7D0u, 0x12E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7D8u;
label_12e7d8:
    // 0x12e7d8: 0x96050132  lhu         $a1, 0x132($s0)
    ctx->pc = 0x12e7d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
label_12e7dc:
    // 0x12e7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12e7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12e7e8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x12e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12e7ec: 0xc04bb4e  jal         func_12ED38
    ctx->pc = 0x12E7ECu;
    SET_GPR_U32(ctx, 31, 0x12E7F4u);
    ctx->pc = 0x12E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7ECu;
    // 0x12e7f0: 0x24a50190  addiu       $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED38u, 0x12E7ECu, 0x12E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7F4u;
label_12e7f4:
    // 0x12e7f4: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x12e7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_12e7f8:
    // 0x12e7f8: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x12E7F8u;
    {
        const bool branch_taken_0x12e7f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e7f8) {
            ctx->pc = 0x12E788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e788;
        }
    }
    ctx->pc = 0x12E800u;
    // 0x12e800: 0x8e240184  lw          $a0, 0x184($s1)
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_12e804:
    // 0x12e804: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12E804u;
    {
        const bool branch_taken_0x12e804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e804) {
            ctx->pc = 0x12E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E804u;
            // 0x12e808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E840u;
            goto label_12e840;
        }
    }
    ctx->pc = 0x12E80Cu;
    // 0x12e80c: 0xc0489d0  jal         func_122740
    ctx->pc = 0x12E80Cu;
    SET_GPR_U32(ctx, 31, 0x12E814u);
    ctx->pc = 0x122740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122740u, 0x12E80Cu, 0x12E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E814u;
label_12e814:
    // 0x12e814: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x12e814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x12e818: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E818u;
    {
        const bool branch_taken_0x12e818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e818) {
            ctx->pc = 0x12E81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E818u;
            // 0x12e81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E840u;
            goto label_12e840;
        }
    }
    ctx->pc = 0x12E820u;
    // 0x12e820: 0xc0490de  jal         func_124378
    ctx->pc = 0x12E820u;
    SET_GPR_U32(ctx, 31, 0x12E828u);
    ctx->pc = 0x124378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124378u, 0x12E820u, 0x12E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E828u;
label_12e828:
    // 0x12e828: 0x8e24018c  lw          $a0, 0x18C($s1)
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x12e82c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E82Cu;
    {
        const bool branch_taken_0x12e82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e82c) {
            ctx->pc = 0x12E830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E82Cu;
            // 0x12e830: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E840u;
            goto label_12e840;
        }
    }
    ctx->pc = 0x12E834u;
    // 0x12e834: 0xc04b4ce  jal         func_12D338
    ctx->pc = 0x12E834u;
    SET_GPR_U32(ctx, 31, 0x12E83Cu);
    ctx->pc = 0x12D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D338u, 0x12E834u, 0x12E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E83Cu;
label_12e83c:
    // 0x12e83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e840:
    // 0x12e840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e848: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e84c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12e84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e850: 0x3e00008  jr          $ra
    ctx->pc = 0x12E850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E850u;
        // 0x12e854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E858u;
}
