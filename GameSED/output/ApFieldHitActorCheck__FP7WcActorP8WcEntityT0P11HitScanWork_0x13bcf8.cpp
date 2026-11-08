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

// Function: ApFieldHitActorCheck__FP7WcActorP8WcEntityT0P11HitScanWork
// Address: 0x13bcf8 - 0x13be6c
void ApFieldHitActorCheck__FP7WcActorP8WcEntityT0P11HitScanWork_0x13bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldHitActorCheck__FP7WcActorP8WcEntityT0P11HitScanWork_0x13bcf8");
#endif

    switch (ctx->pc) {
        case 0x13bcf8u: goto label_13bcf8;
        case 0x13bcfcu: goto label_13bcfc;
        case 0x13bd00u: goto label_13bd00;
        case 0x13bd04u: goto label_13bd04;
        case 0x13bd08u: goto label_13bd08;
        case 0x13bd0cu: goto label_13bd0c;
        case 0x13bd10u: goto label_13bd10;
        case 0x13bd14u: goto label_13bd14;
        case 0x13bd18u: goto label_13bd18;
        case 0x13bd1cu: goto label_13bd1c;
        case 0x13bd20u: goto label_13bd20;
        case 0x13bd24u: goto label_13bd24;
        case 0x13bd28u: goto label_13bd28;
        case 0x13bd2cu: goto label_13bd2c;
        case 0x13bd30u: goto label_13bd30;
        case 0x13bd34u: goto label_13bd34;
        case 0x13bd38u: goto label_13bd38;
        case 0x13bd3cu: goto label_13bd3c;
        case 0x13bd40u: goto label_13bd40;
        case 0x13bd44u: goto label_13bd44;
        case 0x13bd48u: goto label_13bd48;
        case 0x13bd4cu: goto label_13bd4c;
        case 0x13bd50u: goto label_13bd50;
        case 0x13bd54u: goto label_13bd54;
        case 0x13bd58u: goto label_13bd58;
        case 0x13bd5cu: goto label_13bd5c;
        case 0x13bd60u: goto label_13bd60;
        case 0x13bd64u: goto label_13bd64;
        case 0x13bd68u: goto label_13bd68;
        case 0x13bd6cu: goto label_13bd6c;
        case 0x13bd70u: goto label_13bd70;
        case 0x13bd74u: goto label_13bd74;
        case 0x13bd78u: goto label_13bd78;
        case 0x13bd7cu: goto label_13bd7c;
        case 0x13bd80u: goto label_13bd80;
        case 0x13bd84u: goto label_13bd84;
        case 0x13bd88u: goto label_13bd88;
        case 0x13bd8cu: goto label_13bd8c;
        case 0x13bd90u: goto label_13bd90;
        case 0x13bd94u: goto label_13bd94;
        case 0x13bd98u: goto label_13bd98;
        case 0x13bd9cu: goto label_13bd9c;
        case 0x13bda0u: goto label_13bda0;
        case 0x13bda4u: goto label_13bda4;
        case 0x13bda8u: goto label_13bda8;
        case 0x13bdacu: goto label_13bdac;
        case 0x13bdb0u: goto label_13bdb0;
        case 0x13bdb4u: goto label_13bdb4;
        case 0x13bdb8u: goto label_13bdb8;
        case 0x13bdbcu: goto label_13bdbc;
        case 0x13bdc0u: goto label_13bdc0;
        case 0x13bdc4u: goto label_13bdc4;
        case 0x13bdc8u: goto label_13bdc8;
        case 0x13bdccu: goto label_13bdcc;
        case 0x13bdd0u: goto label_13bdd0;
        case 0x13bdd4u: goto label_13bdd4;
        case 0x13bdd8u: goto label_13bdd8;
        case 0x13bddcu: goto label_13bddc;
        case 0x13bde0u: goto label_13bde0;
        case 0x13bde4u: goto label_13bde4;
        case 0x13bde8u: goto label_13bde8;
        case 0x13bdecu: goto label_13bdec;
        case 0x13bdf0u: goto label_13bdf0;
        case 0x13bdf4u: goto label_13bdf4;
        case 0x13bdf8u: goto label_13bdf8;
        case 0x13bdfcu: goto label_13bdfc;
        case 0x13be00u: goto label_13be00;
        case 0x13be04u: goto label_13be04;
        case 0x13be08u: goto label_13be08;
        case 0x13be0cu: goto label_13be0c;
        case 0x13be10u: goto label_13be10;
        case 0x13be14u: goto label_13be14;
        case 0x13be18u: goto label_13be18;
        case 0x13be1cu: goto label_13be1c;
        case 0x13be20u: goto label_13be20;
        case 0x13be24u: goto label_13be24;
        case 0x13be28u: goto label_13be28;
        case 0x13be2cu: goto label_13be2c;
        case 0x13be30u: goto label_13be30;
        case 0x13be34u: goto label_13be34;
        case 0x13be38u: goto label_13be38;
        case 0x13be3cu: goto label_13be3c;
        case 0x13be40u: goto label_13be40;
        case 0x13be44u: goto label_13be44;
        case 0x13be48u: goto label_13be48;
        case 0x13be4cu: goto label_13be4c;
        case 0x13be50u: goto label_13be50;
        case 0x13be54u: goto label_13be54;
        case 0x13be58u: goto label_13be58;
        case 0x13be5cu: goto label_13be5c;
        case 0x13be60u: goto label_13be60;
        case 0x13be64u: goto label_13be64;
        case 0x13be68u: goto label_13be68;
        default: break;
    }

    ctx->pc = 0x13bcf8u;

label_13bcf8:
    // 0x13bcf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13bcfc:
    // 0x13bcfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bd00:
    // 0x13bd00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13bd04:
    // 0x13bd04: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13bd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13bd08:
    // 0x13bd08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_13bd0c:
    // 0x13bd0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13bd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13bd10:
    // 0x13bd10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_13bd14:
    // 0x13bd14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13bd14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13bd18:
    // 0x13bd18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_13bd1c:
    // 0x13bd1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13bd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13bd20:
    // 0x13bd20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13bd24:
    // 0x13bd24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13bd28:
    // 0x13bd28: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x13bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_13bd2c:
    // 0x13bd2c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_13bd30:
    // 0x13bd30: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
label_13bd34:
    if (ctx->pc == 0x13BD34u) {
        ctx->pc = 0x13BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD30u;
        // 0x13bd34: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD38u;
        goto label_13bd38;
    }
    ctx->pc = 0x13BD30u;
    {
        const bool branch_taken_0x13bd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD30u;
        // 0x13bd34: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd30) {
            ctx->pc = 0x13BE48u;
            goto label_13be48;
        }
    }
    ctx->pc = 0x13BD38u;
label_13bd38:
    // 0x13bd38: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x13bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_13bd3c:
    // 0x13bd3c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_13bd40:
    if (ctx->pc == 0x13BD40u) {
        ctx->pc = 0x13BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD3Cu;
        // 0x13bd40: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD44u;
        goto label_13bd44;
    }
    ctx->pc = 0x13BD3Cu;
    {
        const bool branch_taken_0x13bd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD3Cu;
        // 0x13bd40: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd3c) {
            ctx->pc = 0x13BD90u;
            goto label_13bd90;
        }
    }
    ctx->pc = 0x13BD44u;
label_13bd44:
    // 0x13bd44: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13bd44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_13bd48:
    // 0x13bd48: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_13bd4c:
    // 0x13bd4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13bd50:
    if (ctx->pc == 0x13BD50u) {
        ctx->pc = 0x13BD54u;
        goto label_13bd54;
    }
    ctx->pc = 0x13BD4Cu;
    {
        const bool branch_taken_0x13bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd4c) {
            ctx->pc = 0x13BD5Cu;
            goto label_13bd5c;
        }
    }
    ctx->pc = 0x13BD54u;
label_13bd54:
    // 0x13bd54: 0xc061920  jal         func_186480
label_13bd58:
    if (ctx->pc == 0x13BD58u) {
        ctx->pc = 0x13BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD54u;
        // 0x13bd58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD5Cu;
        goto label_13bd5c;
    }
    ctx->pc = 0x13BD54u;
    SET_GPR_U32(ctx, 31, 0x13BD5Cu);
    ctx->pc = 0x13BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD54u;
    // 0x13bd58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13BD54u, 0x13BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD5Cu;
label_13bd5c:
    // 0x13bd5c: 0xc061422  jal         func_185088
label_13bd60:
    if (ctx->pc == 0x13BD60u) {
        ctx->pc = 0x13BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD5Cu;
        // 0x13bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD64u;
        goto label_13bd64;
    }
    ctx->pc = 0x13BD5Cu;
    SET_GPR_U32(ctx, 31, 0x13BD64u);
    ctx->pc = 0x13BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD5Cu;
    // 0x13bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13BD5Cu, 0x13BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD64u;
label_13bd64:
    // 0x13bd64: 0x26630110  addiu       $v1, $s3, 0x110
    ctx->pc = 0x13bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_13bd68:
    // 0x13bd68: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13bd68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_13bd6c:
    // 0x13bd6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13bd6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13bd70:
    // 0x13bd70: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13bd70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_13bd74:
    // 0x13bd74: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13bd74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_13bd78:
    // 0x13bd78: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13bd78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_13bd7c:
    // 0x13bd7c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13bd7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_13bd80:
    // 0x13bd80: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13bd80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_13bd84:
    // 0x13bd84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13bd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13bd88:
    // 0x13bd88: 0x10000021  b           . + 4 + (0x21 << 2)
label_13bd8c:
    if (ctx->pc == 0x13BD8Cu) {
        ctx->pc = 0x13BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD88u;
        // 0x13bd8c: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD90u;
        goto label_13bd90;
    }
    ctx->pc = 0x13BD88u;
    {
        const bool branch_taken_0x13bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD88u;
        // 0x13bd8c: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd88) {
            ctx->pc = 0x13BE10u;
            goto label_13be10;
        }
    }
    ctx->pc = 0x13BD90u;
label_13bd90:
    // 0x13bd90: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_13bd94:
    // 0x13bd94: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13bd98:
    // 0x13bd98: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x13bd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_13bd9c:
    // 0x13bd9c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x13bd9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_13bda0:
    // 0x13bda0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_13bda4:
    // 0x13bda4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13bda8:
    if (ctx->pc == 0x13BDA8u) {
        ctx->pc = 0x13BDACu;
        goto label_13bdac;
    }
    ctx->pc = 0x13BDA4u;
    {
        const bool branch_taken_0x13bda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bda4) {
            ctx->pc = 0x13BDB4u;
            goto label_13bdb4;
        }
    }
    ctx->pc = 0x13BDACu;
label_13bdac:
    // 0x13bdac: 0xc061920  jal         func_186480
label_13bdb0:
    if (ctx->pc == 0x13BDB0u) {
        ctx->pc = 0x13BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDACu;
        // 0x13bdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BDB4u;
        goto label_13bdb4;
    }
    ctx->pc = 0x13BDACu;
    SET_GPR_U32(ctx, 31, 0x13BDB4u);
    ctx->pc = 0x13BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDACu;
    // 0x13bdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13BDACu, 0x13BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDB4u;
label_13bdb4:
    // 0x13bdb4: 0xc061422  jal         func_185088
label_13bdb8:
    if (ctx->pc == 0x13BDB8u) {
        ctx->pc = 0x13BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BDB4u;
        // 0x13bdb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BDBCu;
        goto label_13bdbc;
    }
    ctx->pc = 0x13BDB4u;
    SET_GPR_U32(ctx, 31, 0x13BDBCu);
    ctx->pc = 0x13BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDB4u;
    // 0x13bdb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13BDB4u, 0x13BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDBCu;
label_13bdbc:
    // 0x13bdbc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_13bdc0:
    // 0x13bdc0: 0x268300a0  addiu       $v1, $s4, 0xA0
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_13bdc4:
    // 0x13bdc4: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x13bdc4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13bdc8:
    // 0x13bdc8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13bdc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_13bdcc:
    // 0x13bdcc: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x13bdccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_13bdd0:
    // 0x13bdd0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x13bdd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_13bdd4:
    // 0x13bdd4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x13bdd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_13bdd8:
    // 0x13bdd8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13bdd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13bddc:
    // 0x13bddc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13bddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13bde0:
    // 0x13bde0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13bde0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13bde4:
    // 0x13bde4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13bde4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_13bde8:
    // 0x13bde8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x13bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_13bdec:
    // 0x13bdec: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13bdecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_13bdf0:
    // 0x13bdf0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x13bdf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13bdf4:
    // 0x13bdf4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13bdf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_13bdf8:
    // 0x13bdf8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13bdf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_13bdfc:
    // 0x13bdfc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13bdfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_13be00:
    // 0x13be00: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13be00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_13be04:
    // 0x13be04: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13be04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_13be08:
    // 0x13be08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13be08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13be0c:
    // 0x13be0c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x13be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13be10:
    // 0x13be10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13be10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13be14:
    // 0x13be14: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_13be18:
    if (ctx->pc == 0x13BE18u) {
        ctx->pc = 0x13BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE14u;
        // 0x13be18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE1Cu;
        goto label_13be1c;
    }
    ctx->pc = 0x13BE14u;
    {
        const bool branch_taken_0x13be14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE14u;
        // 0x13be18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be14) {
            ctx->pc = 0x13BE48u;
            goto label_13be48;
        }
    }
    ctx->pc = 0x13BE1Cu;
label_13be1c:
    // 0x13be1c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x13be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_13be20:
    // 0x13be20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13be20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13be24:
    // 0x13be24: 0xae93007c  sw          $s3, 0x7C($s4)
    ctx->pc = 0x13be24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 19));
label_13be28:
    // 0x13be28: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_13be2c:
    // 0x13be2c: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_13be30:
    // 0x13be30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13be34:
    // 0x13be34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13be38:
    // 0x13be38: 0x60f809  jalr        $v1
label_13be3c:
    if (ctx->pc == 0x13BE3Cu) {
        ctx->pc = 0x13BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE38u;
        // 0x13be3c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE40u;
        goto label_13be40;
    }
    ctx->pc = 0x13BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13BE40u);
        ctx->pc = 0x13BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE38u;
        // 0x13be3c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE38u, 0x13BE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BE40u;
label_13be40:
    // 0x13be40: 0x8ea20134  lw          $v0, 0x134($s5)
    ctx->pc = 0x13be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_13be44:
    // 0x13be44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13be44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13be48:
    // 0x13be48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13be48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13be4c:
    // 0x13be4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13be4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13be50:
    // 0x13be50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13be50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13be54:
    // 0x13be54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13be54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13be58:
    // 0x13be58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13be58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13be5c:
    // 0x13be5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13be5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_13be60:
    // 0x13be60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13be60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13be64:
    // 0x13be64: 0x3e00008  jr          $ra
label_13be68:
    if (ctx->pc == 0x13BE68u) {
        ctx->pc = 0x13BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE64u;
        // 0x13be68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE6Cu;
        goto label_fallthrough_0x13be64;
    }
    ctx->pc = 0x13BE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE64u;
        // 0x13be68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13be64:
    ctx->pc = 0x13BE6Cu;
}
