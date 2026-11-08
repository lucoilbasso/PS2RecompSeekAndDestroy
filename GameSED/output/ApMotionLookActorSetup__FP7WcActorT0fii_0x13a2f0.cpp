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

// Function: ApMotionLookActorSetup__FP7WcActorT0fii
// Address: 0x13a2f0 - 0x13a3fc
void ApMotionLookActorSetup__FP7WcActorT0fii_0x13a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookActorSetup__FP7WcActorT0fii_0x13a2f0");
#endif

    switch (ctx->pc) {
        case 0x13a348u: goto label_13a348;
        case 0x13a35cu: goto label_13a35c;
        case 0x13a370u: goto label_13a370;
        case 0x13a3bcu: goto label_13a3bc;
        default: break;
    }

    ctx->pc = 0x13a2f0u;

    // 0x13a2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a2f4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13a2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13a2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a2fc: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13a2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x13a300: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13a304: 0x2610a0b0  addiu       $s0, $s0, -0x5F50
    ctx->pc = 0x13a304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942896));
    // 0x13a308: 0x3c120020  lui         $s2, 0x20
    ctx->pc = 0x13a308u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
    // 0x13a30c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x13a310: 0x8e52c460  lw          $s2, -0x3BA0($s2)
    ctx->pc = 0x13a310u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952032)));
    // 0x13a314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13a318: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13a318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a31c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13a320: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13a320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a324: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13a328: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13a328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a330: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13a330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a338: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x13a338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13a33c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13a340: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13A340u;
    SET_GPR_U32(ctx, 31, 0x13A348u);
    ctx->pc = 0x13A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A340u;
    // 0x13a344: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13A340u, 0x13A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A348u;
label_13a348:
    // 0x13a348: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a34c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a350: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13a350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a354: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A354u;
    SET_GPR_U32(ctx, 31, 0x13A35Cu);
    ctx->pc = 0x13A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A354u;
    // 0x13a358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A354u, 0x13A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A35Cu;
label_13a35c:
    // 0x13a35c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a360: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a368: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A368u;
    SET_GPR_U32(ctx, 31, 0x13A370u);
    ctx->pc = 0x13A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A368u;
    // 0x13a36c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A368u, 0x13A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A370u;
label_13a370:
    // 0x13a370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a378: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x13a37c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13a37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13a380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a388: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13a388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a38c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x13a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13a390: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x13a390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a394: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A394u;
    {
        const bool branch_taken_0x13a394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A394u;
        // 0x13a398: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a394) {
            ctx->pc = 0x13A3A4u;
            goto label_13a3a4;
        }
    }
    ctx->pc = 0x13A39Cu;
    // 0x13a39c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a3a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a3a4:
    // 0x13a3a4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x13a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x13a3a8: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x13a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x13a3ac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13a3b0: 0xace80010  sw          $t0, 0x10($a3)
    ctx->pc = 0x13a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 8));
    // 0x13a3b4: 0xc066810  jal         func_19A040
    ctx->pc = 0x13A3B4u;
    SET_GPR_U32(ctx, 31, 0x13A3BCu);
    ctx->pc = 0x13A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3B4u;
    // 0x13a3b8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x13A3B4u, 0x13A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3BCu;
label_13a3bc:
    // 0x13a3bc: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x13a3bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x13a3c0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x13a3c0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a3c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a3c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13a3c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a3cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x13a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13a3d0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x13a3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a3d8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x13a3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x13a3dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a3e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13a3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a3e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13a3e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a3ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a3f0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x13a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3F4u;
        // 0x13a3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A3FCu;
}
