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

// Function: AimingGunProc__7ApcTankP9FVector32
// Address: 0x14fb20 - 0x14fd5c
void AimingGunProc__7ApcTankP9FVector32_0x14fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AimingGunProc__7ApcTankP9FVector32_0x14fb20");
#endif

    switch (ctx->pc) {
        case 0x14fb68u: goto label_14fb68;
        case 0x14fb78u: goto label_14fb78;
        case 0x14fbd8u: goto label_14fbd8;
        case 0x14fc40u: goto label_14fc40;
        case 0x14fca4u: goto label_14fca4;
        case 0x14fcd4u: goto label_14fcd4;
        case 0x14fd08u: goto label_14fd08;
        case 0x14fd28u: goto label_14fd28;
        default: break;
    }

    ctx->pc = 0x14fb20u;

    // 0x14fb20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14fb24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14fb28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14fb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14fb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14fb30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14fb34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14fb38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14fb3c: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x14FB3Cu;
    {
        const bool branch_taken_0x14fb3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB3Cu;
        // 0x14fb40: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb3c) {
            ctx->pc = 0x14FB70u;
            goto label_14fb70;
        }
    }
    ctx->pc = 0x14FB44u;
    // 0x14fb44: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x14fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x14fb48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FB48u;
    {
        const bool branch_taken_0x14fb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fb48) {
            ctx->pc = 0x14FB60u;
            goto label_14fb60;
        }
    }
    ctx->pc = 0x14FB50u;
    // 0x14fb50: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x14fb54: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x14FB54u;
    {
        const bool branch_taken_0x14fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB54u;
        // 0x14fb58: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb54) {
            ctx->pc = 0x14FD30u;
            goto label_14fd30;
        }
    }
    ctx->pc = 0x14FB5Cu;
    // 0x14fb5c: 0x0  nop
    ctx->pc = 0x14fb5cu;
    // NOP
label_14fb60:
    // 0x14fb60: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FB60u;
    SET_GPR_U32(ctx, 31, 0x14FB68u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FB60u, 0x14FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB68u;
label_14fb68:
    // 0x14fb68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB68u;
    {
        const bool branch_taken_0x14fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB68u;
        // 0x14fb6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb68) {
            ctx->pc = 0x14FB7Cu;
            goto label_14fb7c;
        }
    }
    ctx->pc = 0x14FB70u;
label_14fb70:
    // 0x14fb70: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FB70u;
    SET_GPR_U32(ctx, 31, 0x14FB78u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FB70u, 0x14FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB78u;
label_14fb78:
    // 0x14fb78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14fb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fb7c:
    // 0x14fb7c: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14fb80: 0x8c620c10  lw          $v0, 0xC10($v1)
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3088)));
    // 0x14fb84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB84u;
    {
        const bool branch_taken_0x14fb84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB84u;
        // 0x14fb88: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb84) {
            ctx->pc = 0x14FB98u;
            goto label_14fb98;
        }
    }
    ctx->pc = 0x14FB8Cu;
    // 0x14fb8c: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14fb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FB90u;
    {
        const bool branch_taken_0x14fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB90u;
        // 0x14fb94: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb90) {
            ctx->pc = 0x14FB9Cu;
            goto label_14fb9c;
        }
    }
    ctx->pc = 0x14FB98u;
label_14fb98:
    // 0x14fb98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fb9c:
    // 0x14fb9c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x14FB9Cu;
    {
        const bool branch_taken_0x14fb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB9Cu;
        // 0x14fba0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb9c) {
            ctx->pc = 0x14FD40u;
            goto label_14fd40;
        }
    }
    ctx->pc = 0x14FBA4u;
    // 0x14fba4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x14fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14fba8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fbac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FBACu;
    {
        const bool branch_taken_0x14fbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBACu;
        // 0x14fbb0: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbac) {
            ctx->pc = 0x14FBC8u;
            goto label_14fbc8;
        }
    }
    ctx->pc = 0x14FBB4u;
    // 0x14fbb4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x14fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14fbb8: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x14fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x14fbbc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14fbc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FBC0u;
    {
        const bool branch_taken_0x14fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBC0u;
        // 0x14fbc4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbc0) {
            ctx->pc = 0x14FBCCu;
            goto label_14fbcc;
        }
    }
    ctx->pc = 0x14FBC8u;
label_14fbc8:
    // 0x14fbc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fbcc:
    // 0x14fbcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fbd0: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x14FBD0u;
    SET_GPR_U32(ctx, 31, 0x14FBD8u);
    ctx->pc = 0x14FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBD0u;
    // 0x14fbd4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x14FBD0u, 0x14FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBD8u;
label_14fbd8:
    // 0x14fbd8: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x14fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x14fbdc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x14fbdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fbe0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x14fbe0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fbe4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14fbe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14fbe8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x14fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14fbec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x14fbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x14fbf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14fbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fbf4: 0xc6200364  lwc1        $f0, 0x364($s1)
    ctx->pc = 0x14fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbf8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x14fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fbfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14fbfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14fc00: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14fc00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc04: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
    ctx->pc = 0x14FC04u;
    {
        const bool branch_taken_0x14fc04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc04) {
            ctx->pc = 0x14FC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC04u;
            // 0x14fc08: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14FC0Cu;
    // 0x14fc0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x14fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fc10: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14fc10u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14fc14: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x14fc14u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x14fc18: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x14fc18u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fc1c: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x14fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fc20: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x14fc20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x14fc24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14fc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14fc28: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x14fc28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x14fc2c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x14fc2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc30: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x14FC30u;
    {
        const bool branch_taken_0x14fc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc30) {
            ctx->pc = 0x14FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC30u;
            // 0x14fc34: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14FC38u;
    // 0x14fc38: 0xc067a02  jal         func_19E808
    ctx->pc = 0x14FC38u;
    SET_GPR_U32(ctx, 31, 0x14FC40u);
    ctx->pc = 0x14FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC38u;
    // 0x14fc3c: 0x3c130002  lui         $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x14FC38u, 0x14FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC40u;
label_14fc40:
    // 0x14fc40: 0x8e240184  lw          $a0, 0x184($s1)
    ctx->pc = 0x14fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14fc44: 0x24121c71  addiu       $s2, $zero, 0x1C71
    ctx->pc = 0x14fc44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7281));
    // 0x14fc48: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x14fc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x14fc4c: 0x240511c7  addiu       $a1, $zero, 0x11C7
    ctx->pc = 0x14fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4551));
    // 0x14fc50: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x14fc50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc54: 0x28023  negu        $s0, $v0
    ctx->pc = 0x14fc54u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14fc58: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x14fc58u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x14fc5c: 0x70101068  pabsw       $v0, $s0
    ctx->pc = 0x14fc5cu;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x14fc60: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14fc64: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14fc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14fc68: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x14FC68u;
    {
        const bool branch_taken_0x14fc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC68u;
        // 0x14fc6c: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc68) {
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14FC70u;
    // 0x14fc70: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14fc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14fc74: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14fc78: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14FC78u;
    {
        const bool branch_taken_0x14fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC78u;
        // 0x14fc7c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc78) {
            ctx->pc = 0x14FCCCu;
            goto label_14fccc;
        }
    }
    ctx->pc = 0x14FC80u;
    // 0x14fc80: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x14fc80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x14fc84: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x14fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14fc88: 0x46006845  abs.s       $f1, $f13
    ctx->pc = 0x14fc88u;
    ctx->f[1] = FPU_ABS_S(ctx->f[13]);
    // 0x14fc8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14fc8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fc90: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x14fc90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc94: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x14FC94u;
    {
        const bool branch_taken_0x14fc94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc94) {
            ctx->pc = 0x14FC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC94u;
            // 0x14fc98: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14FC9Cu;
    // 0x14fc9c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x14FC9Cu;
    SET_GPR_U32(ctx, 31, 0x14FCA4u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x14FC9Cu, 0x14FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCA4u;
label_14fca4:
    // 0x14fca4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x14fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14fca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcac: 0x24050e38  addiu       $a1, $zero, 0xE38
    ctx->pc = 0x14fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3640));
    // 0x14fcb0: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x14fcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x14fcb4: 0xa3200a  movz        $a0, $a1, $v1
    ctx->pc = 0x14fcb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x14fcb8: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x14fcb8u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x14fcbc: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14fcc0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x14fcc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14fcc4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14FCC4u;
    {
        const bool branch_taken_0x14fcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fcc4) {
            ctx->pc = 0x14FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FCC4u;
            // 0x14fcc8: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14FCCCu;
label_14fccc:
    // 0x14fccc: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14FCCCu;
    SET_GPR_U32(ctx, 31, 0x14FCD4u);
    ctx->pc = 0x14FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCCCu;
    // 0x14fcd0: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14FCCCu, 0x14FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCD4u;
label_14fcd4:
    // 0x14fcd4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14fcd8: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14fcdc: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14fcdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14fce0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FCE0u;
    {
        const bool branch_taken_0x14fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fce0) {
            ctx->pc = 0x14FCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FCE0u;
            // 0x14fce4: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FCF8u;
            goto label_14fcf8;
        }
    }
    ctx->pc = 0x14FCE8u;
    // 0x14fce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcec: 0x720210c8  pmaxw       $v0, $s0, $v0
    ctx->pc = 0x14fcecu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x14fcf0: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14fcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14fcf4: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_14fcf8:
    // 0x14fcf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcfc: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14fd00: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14FD00u;
    SET_GPR_U32(ctx, 31, 0x14FD08u);
    ctx->pc = 0x14FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD00u;
    // 0x14fd04: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14FD00u, 0x14FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD08u;
label_14fd08:
    // 0x14fd08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14FD08u;
    {
        const bool branch_taken_0x14fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD08u;
        // 0x14fd0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd08) {
            ctx->pc = 0x14FD40u;
            goto label_14fd40;
        }
    }
    ctx->pc = 0x14FD10u;
label_14fd10:
    // 0x14fd10: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14fd14: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14fd18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FD18u;
    {
        const bool branch_taken_0x14fd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD18u;
        // 0x14fd1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd18) {
            ctx->pc = 0x14FD40u;
            goto label_14fd40;
        }
    }
    ctx->pc = 0x14FD20u;
    // 0x14fd20: 0xc066800  jal         func_19A000
    ctx->pc = 0x14FD20u;
    SET_GPR_U32(ctx, 31, 0x14FD28u);
    ctx->pc = 0x14FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD20u;
    // 0x14fd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x14FD20u, 0x14FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD28u;
label_14fd28:
    // 0x14fd28: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x14fd2c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x14fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_14fd30:
    // 0x14fd30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14fd34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14fd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fd38: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x14fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
    // 0x14fd3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14fd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14fd40:
    // 0x14fd40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14fd40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fd44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14fd44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fd48: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14fd48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14fd4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14fd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fd50: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x14fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fd54: 0x3e00008  jr          $ra
    ctx->pc = 0x14FD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD54u;
        // 0x14fd58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FD5Cu;
}
