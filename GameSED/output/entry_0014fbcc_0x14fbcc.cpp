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

// Function: entry_0014fbcc
// Address: 0x14fbcc - 0x14fccc
void entry_0014fbcc_0x14fbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fbcc_0x14fbcc");
#endif

    switch (ctx->pc) {
        case 0x14fbd8u: goto label_14fbd8;
        case 0x14fc40u: goto label_14fc40;
        case 0x14fca4u: goto label_14fca4;
        default: break;
    }

    ctx->pc = 0x14fbccu;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x14FCCCu;
}
