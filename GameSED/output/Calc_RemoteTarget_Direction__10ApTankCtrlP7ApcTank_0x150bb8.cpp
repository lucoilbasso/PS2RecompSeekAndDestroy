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

// Function: Calc_RemoteTarget_Direction__10ApTankCtrlP7ApcTank
// Address: 0x150bb8 - 0x150da0
void Calc_RemoteTarget_Direction__10ApTankCtrlP7ApcTank_0x150bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Calc_RemoteTarget_Direction__10ApTankCtrlP7ApcTank_0x150bb8");
#endif

    switch (ctx->pc) {
        case 0x150c84u: goto label_150c84;
        case 0x150cfcu: goto label_150cfc;
        case 0x150d70u: goto label_150d70;
        default: break;
    }

    ctx->pc = 0x150bb8u;

    // 0x150bb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150bbc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x150bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x150bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x150bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x150bc8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x150bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x150bcc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x150bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x150bd0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x150bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x150bd4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x150bd8: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x150BD8u;
    {
        const bool branch_taken_0x150bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BD8u;
        // 0x150bdc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bd8) {
            ctx->pc = 0x150D80u;
            goto label_150d80;
        }
    }
    ctx->pc = 0x150BE0u;
    // 0x150be0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150be4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150BE4u;
    {
        const bool branch_taken_0x150be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BE4u;
        // 0x150be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150be4) {
            ctx->pc = 0x150BF8u;
            goto label_150bf8;
        }
    }
    ctx->pc = 0x150BECu;
    // 0x150bec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150bf0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150BF0u;
    {
        const bool branch_taken_0x150bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BF0u;
        // 0x150bf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bf0) {
            ctx->pc = 0x150C00u;
            goto label_150c00;
        }
    }
    ctx->pc = 0x150BF8u;
label_150bf8:
    // 0x150bf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x150BF8u;
    {
        const bool branch_taken_0x150bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BF8u;
        // 0x150bfc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bf8) {
            ctx->pc = 0x150C28u;
            goto label_150c28;
        }
    }
    ctx->pc = 0x150C00u;
label_150c00:
    // 0x150c00: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150C00u;
    {
        const bool branch_taken_0x150c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150c00) {
            ctx->pc = 0x150C28u;
            goto label_150c28;
        }
    }
    ctx->pc = 0x150C08u;
    // 0x150c08: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x150c0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C0Cu;
    {
        const bool branch_taken_0x150c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150c0c) {
            ctx->pc = 0x150C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C0Cu;
            // 0x150c10: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C20u;
            goto label_150c20;
        }
    }
    ctx->pc = 0x150C14u;
    // 0x150c14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x150C14u;
    {
        const bool branch_taken_0x150c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C14u;
        // 0x150c18: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c14) {
            ctx->pc = 0x150C28u;
            goto label_150c28;
        }
    }
    ctx->pc = 0x150C1Cu;
    // 0x150c1c: 0x0  nop
    ctx->pc = 0x150c1cu;
    // NOP
label_150c20:
    // 0x150c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c24: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x150c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_150c28:
    // 0x150c28: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x150C28u;
    {
        const bool branch_taken_0x150c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C28u;
        // 0x150c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c28) {
            ctx->pc = 0x150D84u;
            goto label_150d84;
        }
    }
    ctx->pc = 0x150C30u;
    // 0x150c30: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c38: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x150c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x150c3c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x150c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150c40: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x150c40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150c44: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x150c44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150c48: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150c4c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x150c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x150c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x150c54: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x150c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150c58: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C58u;
            // 0x150c5c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C70u;
            goto label_150c70;
        }
    }
    ctx->pc = 0x150C60u;
    // 0x150c60: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150c64: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x150c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150c68: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150c6c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_150c70:
    // 0x150c70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150c74: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x150C74u;
    {
        const bool branch_taken_0x150c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C74u;
        // 0x150c78: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c74) {
            ctx->pc = 0x150D68u;
            goto label_150d68;
        }
    }
    ctx->pc = 0x150C7Cu;
    // 0x150c7c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x150C7Cu;
    SET_GPR_U32(ctx, 31, 0x150C84u);
    ctx->pc = 0x150C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C7Cu;
    // 0x150c80: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x150C7Cu, 0x150C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C84u;
label_150c84:
    // 0x150c84: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x150c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x150c90: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x150c94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150c98: 0x24474000  addiu       $a3, $v0, 0x4000
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x150c9c: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x150ca0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x150ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x150ca4: 0x30e77fff  andi        $a3, $a3, 0x7FFF
    ctx->pc = 0x150ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x150ca8: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x150cac: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x150cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150cb4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150cbc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x150cc0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x150cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150cc4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cc8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x150cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x150ccc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x150cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x150cd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x150cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x150cd4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x150cd8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x150cd8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x150cdc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x150cdcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x150ce0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x150ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x150ce4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x150ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x150ce8: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150cec: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x150cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x150cf0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150cf4: 0xc0449ae  jal         func_1126B8
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x150CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CF4u;
    // 0x150cf8: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126B8u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x150d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150d04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x150d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150d08: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x150D08u;
    {
        const bool branch_taken_0x150d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D08u;
        // 0x150d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d08) {
            ctx->pc = 0x150D40u;
            goto label_150d40;
        }
    }
    ctx->pc = 0x150D10u;
    // 0x150d10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150d14: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x150d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x150d18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150d1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150d20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x150d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x150d24: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x150d24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150d28: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x150d28u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150d2c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x150d2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150d30: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x150d34: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x150d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150d38: 0x706418e8  pminw       $v1, $v1, $a0
    ctx->pc = 0x150d38u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x150d3c: 0x32000  sll         $a0, $v1, 0
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_150d40:
    // 0x150d40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x150d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150d44: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x150d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x150d48: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x150d4c: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x150d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x150d50: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x150d50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x150d54: 0x70008830  pmfhl.lw    $s1
    ctx->pc = 0x150d54u;
    SET_GPR_VEC(ctx, 17, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x150d58: 0x118bfb  dsra        $s1, $s1, 15
    ctx->pc = 0x150d58u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> 15);
    // 0x150d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150D5Cu;
    {
        const bool branch_taken_0x150d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D5Cu;
        // 0x150d60: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d5c) {
            ctx->pc = 0x150D74u;
            goto label_150d74;
        }
    }
    ctx->pc = 0x150D64u;
    // 0x150d64: 0x0  nop
    ctx->pc = 0x150d64u;
    // NOP
label_150d68:
    // 0x150d68: 0xc067a02  jal         func_19E808
    ctx->pc = 0x150D68u;
    SET_GPR_U32(ctx, 31, 0x150D70u);
    ctx->pc = 0x150D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D68u;
    // 0x150d6c: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x150D68u, 0x150D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D70u;
label_150d70:
    // 0x150d70: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x150d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_150d74:
    // 0x150d74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150D74u;
    {
        const bool branch_taken_0x150d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D74u;
        // 0x150d78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d74) {
            ctx->pc = 0x150D84u;
            goto label_150d84;
        }
    }
    ctx->pc = 0x150D7Cu;
    // 0x150d7c: 0x0  nop
    ctx->pc = 0x150d7cu;
    // NOP
label_150d80:
    // 0x150d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150d84:
    // 0x150d84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x150d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150d88: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x150d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x150d8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x150d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150d90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x150d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x150d94: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x150d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150d98: 0x3e00008  jr          $ra
    ctx->pc = 0x150D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D98u;
        // 0x150d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150DA0u;
}
