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

// Function: ApTankAimingActorLink__FP7ApcTankf
// Address: 0x14f5f0 - 0x14f6ec
void ApTankAimingActorLink__FP7ApcTankf_0x14f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankAimingActorLink__FP7ApcTankf_0x14f5f0");
#endif

    switch (ctx->pc) {
        case 0x14f6a8u: goto label_14f6a8;
        case 0x14f6ccu: goto label_14f6cc;
        default: break;
    }

    ctx->pc = 0x14f5f0u;

    // 0x14f5f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f5fc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f600: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f608: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x14f608u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14f60c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x14f60cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14f610: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x14f610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14f614: 0xc4950364  lwc1        $f21, 0x364($a0)
    ctx->pc = 0x14f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14f618: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x14f618u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f61c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x14F61Cu;
    {
        const bool branch_taken_0x14f61c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F61Cu;
        // 0x14f620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f61c) {
            ctx->pc = 0x14F6CCu;
            goto label_14f6cc;
        }
    }
    ctx->pc = 0x14F624u;
    // 0x14f624: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x14f624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f628: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14F628u;
    {
        const bool branch_taken_0x14f628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F628u;
        // 0x14f62c: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f628) {
            ctx->pc = 0x14F63Cu;
            goto label_14f63c;
        }
    }
    ctx->pc = 0x14F630u;
    // 0x14f630: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x14f630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x14f634: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14f634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14f638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f63c:
    // 0x14f63c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14f63cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14f640: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x14f640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f644: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F644u;
    {
        const bool branch_taken_0x14f644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F644u;
        // 0x14f648: 0x8c900690  lw          $s0, 0x690($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f644) {
            ctx->pc = 0x14F654u;
            goto label_14f654;
        }
    }
    ctx->pc = 0x14F64Cu;
    // 0x14f64c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x14f64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x14f650: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14f650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14f654:
    // 0x14f654: 0x8e020c0c  lw          $v0, 0xC0C($s0)
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3084)));
    // 0x14f658: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F658u;
    {
        const bool branch_taken_0x14f658 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F658u;
        // 0x14f65c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f658) {
            ctx->pc = 0x14F670u;
            goto label_14f670;
        }
    }
    ctx->pc = 0x14F660u;
    // 0x14f660: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x14f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x14f664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F664u;
    {
        const bool branch_taken_0x14f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F664u;
        // 0x14f668: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f664) {
            ctx->pc = 0x14F674u;
            goto label_14f674;
        }
    }
    ctx->pc = 0x14F66Cu;
    // 0x14f66c: 0x0  nop
    ctx->pc = 0x14f66cu;
    // NOP
label_14f670:
    // 0x14f670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f674:
    // 0x14f674: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F674u;
    {
        const bool branch_taken_0x14f674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f674) {
            ctx->pc = 0x14F678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F674u;
            // 0x14f678: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F67Cu;
            goto label_14f67c;
        }
    }
    ctx->pc = 0x14F67Cu;
label_14f67c:
    // 0x14f67c: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x14f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14f680: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x14f680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14f684: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x14f688: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x14f688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f68c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14f68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f690: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14f690u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14f694: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14f694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14f698: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f69c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14f69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6a0: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x14F6A0u;
    SET_GPR_U32(ctx, 31, 0x14F6A8u);
    ctx->pc = 0x14F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6A0u;
    // 0x14f6a4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x14F6A0u, 0x14F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6A8u;
label_14f6a8:
    // 0x14f6a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F6A8u;
    {
        const bool branch_taken_0x14f6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6A8u;
        // 0x14f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6a8) {
            ctx->pc = 0x14F6CCu;
            goto label_14f6cc;
        }
    }
    ctx->pc = 0x14F6B0u;
    // 0x14f6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f6b4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x14f6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14f6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14f6bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14f6c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x14f6c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x14f6c4: 0xc04e416  jal         func_139058
    ctx->pc = 0x14F6C4u;
    SET_GPR_U32(ctx, 31, 0x14F6CCu);
    ctx->pc = 0x14F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6C4u;
    // 0x14f6c8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139058u, 0x14F6C4u, 0x14F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6CCu;
label_14f6cc:
    // 0x14f6cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f6d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f6d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f6d8: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x14f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14f6dc: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x14f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14f6e0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x14f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14f6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E4u;
        // 0x14f6e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F6ECu;
}
