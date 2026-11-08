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

// Function: GeneratorMoveExec__20ST_ParticleGeneratorPP20ST_ParticleGenerator
// Address: 0x12ed38 - 0x12efc0
void GeneratorMoveExec__20ST_ParticleGeneratorPP20ST_ParticleGenerator_0x12ed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneratorMoveExec__20ST_ParticleGeneratorPP20ST_ParticleGenerator_0x12ed38");
#endif

    switch (ctx->pc) {
        case 0x12ed38u: goto label_12ed38;
        case 0x12ed3cu: goto label_12ed3c;
        case 0x12ed40u: goto label_12ed40;
        case 0x12ed44u: goto label_12ed44;
        case 0x12ed48u: goto label_12ed48;
        case 0x12ed4cu: goto label_12ed4c;
        case 0x12ed50u: goto label_12ed50;
        case 0x12ed54u: goto label_12ed54;
        case 0x12ed58u: goto label_12ed58;
        case 0x12ed5cu: goto label_12ed5c;
        case 0x12ed60u: goto label_12ed60;
        case 0x12ed64u: goto label_12ed64;
        case 0x12ed68u: goto label_12ed68;
        case 0x12ed6cu: goto label_12ed6c;
        case 0x12ed70u: goto label_12ed70;
        case 0x12ed74u: goto label_12ed74;
        case 0x12ed78u: goto label_12ed78;
        case 0x12ed7cu: goto label_12ed7c;
        case 0x12ed80u: goto label_12ed80;
        case 0x12ed84u: goto label_12ed84;
        case 0x12ed88u: goto label_12ed88;
        case 0x12ed8cu: goto label_12ed8c;
        case 0x12ed90u: goto label_12ed90;
        case 0x12ed94u: goto label_12ed94;
        case 0x12ed98u: goto label_12ed98;
        case 0x12ed9cu: goto label_12ed9c;
        case 0x12eda0u: goto label_12eda0;
        case 0x12eda4u: goto label_12eda4;
        case 0x12eda8u: goto label_12eda8;
        case 0x12edacu: goto label_12edac;
        case 0x12edb0u: goto label_12edb0;
        case 0x12edb4u: goto label_12edb4;
        case 0x12edb8u: goto label_12edb8;
        case 0x12edbcu: goto label_12edbc;
        case 0x12edc0u: goto label_12edc0;
        case 0x12edc4u: goto label_12edc4;
        case 0x12edc8u: goto label_12edc8;
        case 0x12edccu: goto label_12edcc;
        case 0x12edd0u: goto label_12edd0;
        case 0x12edd4u: goto label_12edd4;
        case 0x12edd8u: goto label_12edd8;
        case 0x12eddcu: goto label_12eddc;
        case 0x12ede0u: goto label_12ede0;
        case 0x12ede4u: goto label_12ede4;
        case 0x12ede8u: goto label_12ede8;
        case 0x12edecu: goto label_12edec;
        case 0x12edf0u: goto label_12edf0;
        case 0x12edf4u: goto label_12edf4;
        case 0x12edf8u: goto label_12edf8;
        case 0x12edfcu: goto label_12edfc;
        case 0x12ee00u: goto label_12ee00;
        case 0x12ee04u: goto label_12ee04;
        case 0x12ee08u: goto label_12ee08;
        case 0x12ee0cu: goto label_12ee0c;
        case 0x12ee10u: goto label_12ee10;
        case 0x12ee14u: goto label_12ee14;
        case 0x12ee18u: goto label_12ee18;
        case 0x12ee1cu: goto label_12ee1c;
        case 0x12ee20u: goto label_12ee20;
        case 0x12ee24u: goto label_12ee24;
        case 0x12ee28u: goto label_12ee28;
        case 0x12ee2cu: goto label_12ee2c;
        case 0x12ee30u: goto label_12ee30;
        case 0x12ee34u: goto label_12ee34;
        case 0x12ee38u: goto label_12ee38;
        case 0x12ee3cu: goto label_12ee3c;
        case 0x12ee40u: goto label_12ee40;
        case 0x12ee44u: goto label_12ee44;
        case 0x12ee48u: goto label_12ee48;
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12ee50u: goto label_12ee50;
        case 0x12ee54u: goto label_12ee54;
        case 0x12ee58u: goto label_12ee58;
        case 0x12ee5cu: goto label_12ee5c;
        case 0x12ee60u: goto label_12ee60;
        case 0x12ee64u: goto label_12ee64;
        case 0x12ee68u: goto label_12ee68;
        case 0x12ee6cu: goto label_12ee6c;
        case 0x12ee70u: goto label_12ee70;
        case 0x12ee74u: goto label_12ee74;
        case 0x12ee78u: goto label_12ee78;
        case 0x12ee7cu: goto label_12ee7c;
        case 0x12ee80u: goto label_12ee80;
        case 0x12ee84u: goto label_12ee84;
        case 0x12ee88u: goto label_12ee88;
        case 0x12ee8cu: goto label_12ee8c;
        case 0x12ee90u: goto label_12ee90;
        case 0x12ee94u: goto label_12ee94;
        case 0x12ee98u: goto label_12ee98;
        case 0x12ee9cu: goto label_12ee9c;
        case 0x12eea0u: goto label_12eea0;
        case 0x12eea4u: goto label_12eea4;
        case 0x12eea8u: goto label_12eea8;
        case 0x12eeacu: goto label_12eeac;
        case 0x12eeb0u: goto label_12eeb0;
        case 0x12eeb4u: goto label_12eeb4;
        case 0x12eeb8u: goto label_12eeb8;
        case 0x12eebcu: goto label_12eebc;
        case 0x12eec0u: goto label_12eec0;
        case 0x12eec4u: goto label_12eec4;
        case 0x12eec8u: goto label_12eec8;
        case 0x12eeccu: goto label_12eecc;
        case 0x12eed0u: goto label_12eed0;
        case 0x12eed4u: goto label_12eed4;
        case 0x12eed8u: goto label_12eed8;
        case 0x12eedcu: goto label_12eedc;
        case 0x12eee0u: goto label_12eee0;
        case 0x12eee4u: goto label_12eee4;
        case 0x12eee8u: goto label_12eee8;
        case 0x12eeecu: goto label_12eeec;
        case 0x12eef0u: goto label_12eef0;
        case 0x12eef4u: goto label_12eef4;
        case 0x12eef8u: goto label_12eef8;
        case 0x12eefcu: goto label_12eefc;
        case 0x12ef00u: goto label_12ef00;
        case 0x12ef04u: goto label_12ef04;
        case 0x12ef08u: goto label_12ef08;
        case 0x12ef0cu: goto label_12ef0c;
        case 0x12ef10u: goto label_12ef10;
        case 0x12ef14u: goto label_12ef14;
        case 0x12ef18u: goto label_12ef18;
        case 0x12ef1cu: goto label_12ef1c;
        case 0x12ef20u: goto label_12ef20;
        case 0x12ef24u: goto label_12ef24;
        case 0x12ef28u: goto label_12ef28;
        case 0x12ef2cu: goto label_12ef2c;
        case 0x12ef30u: goto label_12ef30;
        case 0x12ef34u: goto label_12ef34;
        case 0x12ef38u: goto label_12ef38;
        case 0x12ef3cu: goto label_12ef3c;
        case 0x12ef40u: goto label_12ef40;
        case 0x12ef44u: goto label_12ef44;
        case 0x12ef48u: goto label_12ef48;
        case 0x12ef4cu: goto label_12ef4c;
        case 0x12ef50u: goto label_12ef50;
        case 0x12ef54u: goto label_12ef54;
        case 0x12ef58u: goto label_12ef58;
        case 0x12ef5cu: goto label_12ef5c;
        case 0x12ef60u: goto label_12ef60;
        case 0x12ef64u: goto label_12ef64;
        case 0x12ef68u: goto label_12ef68;
        case 0x12ef6cu: goto label_12ef6c;
        case 0x12ef70u: goto label_12ef70;
        case 0x12ef74u: goto label_12ef74;
        case 0x12ef78u: goto label_12ef78;
        case 0x12ef7cu: goto label_12ef7c;
        case 0x12ef80u: goto label_12ef80;
        case 0x12ef84u: goto label_12ef84;
        case 0x12ef88u: goto label_12ef88;
        case 0x12ef8cu: goto label_12ef8c;
        case 0x12ef90u: goto label_12ef90;
        case 0x12ef94u: goto label_12ef94;
        case 0x12ef98u: goto label_12ef98;
        case 0x12ef9cu: goto label_12ef9c;
        case 0x12efa0u: goto label_12efa0;
        case 0x12efa4u: goto label_12efa4;
        case 0x12efa8u: goto label_12efa8;
        case 0x12efacu: goto label_12efac;
        case 0x12efb0u: goto label_12efb0;
        case 0x12efb4u: goto label_12efb4;
        case 0x12efb8u: goto label_12efb8;
        case 0x12efbcu: goto label_12efbc;
        default: break;
    }

    ctx->pc = 0x12ed38u;

label_12ed38:
    // 0x12ed38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12ed3c:
    // 0x12ed3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12ed40:
    // 0x12ed40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ed40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ed44:
    // 0x12ed44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12ed48:
    // 0x12ed48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12ed4c:
    // 0x12ed4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12ed50:
    // 0x12ed50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12ed54:
    // 0x12ed54: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x12ed54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_12ed58:
    // 0x12ed58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_12ed5c:
    if (ctx->pc == 0x12ED5Cu) {
        ctx->pc = 0x12ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED58u;
        // 0x12ed5c: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED60u;
        goto label_12ed60;
    }
    ctx->pc = 0x12ED58u;
    {
        const bool branch_taken_0x12ed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED58u;
        // 0x12ed5c: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed58) {
            ctx->pc = 0x12ED88u;
            goto label_12ed88;
        }
    }
    ctx->pc = 0x12ED60u;
label_12ed60:
    // 0x12ed60: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x12ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_12ed64:
    // 0x12ed64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12ed68:
    // 0x12ed68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12ed6c:
    if (ctx->pc == 0x12ED6Cu) {
        ctx->pc = 0x12ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED68u;
        // 0x12ed6c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED70u;
        goto label_12ed70;
    }
    ctx->pc = 0x12ED68u;
    {
        const bool branch_taken_0x12ed68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED68u;
        // 0x12ed6c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed68) {
            ctx->pc = 0x12ED84u;
            goto label_12ed84;
        }
    }
    ctx->pc = 0x12ED70u;
label_12ed70:
    // 0x12ed70: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_12ed74:
    // 0x12ed74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12ed78:
    // 0x12ed78: 0x8c63a230  lw          $v1, -0x5DD0($v1)
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943280)));
label_12ed7c:
    // 0x12ed7c: 0x60f809  jalr        $v1
label_12ed80:
    if (ctx->pc == 0x12ED80u) {
        ctx->pc = 0x12ED84u;
        goto label_12ed84;
    }
    ctx->pc = 0x12ED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12ED84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED7Cu, 0x12ED84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ED84u;
label_12ed84:
    // 0x12ed84: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_12ed88:
    // 0x12ed88: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_12ed8c:
    // 0x12ed8c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12ed8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12ed90:
    // 0x12ed90: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x12ed90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12ed94:
    // 0x12ed94: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ed94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ed98:
    // 0x12ed98: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_12ed9c:
    // 0x12ed9c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x12ed9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12eda0:
    // 0x12eda0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x12eda0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12eda4:
    // 0x12eda4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12eda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12eda8:
    // 0x12eda8: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x12eda8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_12edac:
    // 0x12edac: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x12edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_12edb0:
    // 0x12edb0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_12edb4:
    // 0x12edb4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12edb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_12edb8:
    // 0x12edb8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12edb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_12edbc:
    // 0x12edbc: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x12edbcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_12edc0:
    // 0x12edc0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_12edc4:
    // 0x12edc4: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x12edc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_12edc8:
    // 0x12edc8: 0xc067a86  jal         func_19EA18
label_12edcc:
    if (ctx->pc == 0x12EDCCu) {
        ctx->pc = 0x12EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDC8u;
        // 0x12edcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDD0u;
        goto label_12edd0;
    }
    ctx->pc = 0x12EDC8u;
    SET_GPR_U32(ctx, 31, 0x12EDD0u);
    ctx->pc = 0x12EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDC8u;
    // 0x12edcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x12EDC8u, 0x12EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x12edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_12edd4:
    // 0x12edd4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x12edd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12edd8:
    // 0x12edd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_12eddc:
    // 0x12eddc: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x12eddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_12ede0:
    // 0x12ede0: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
label_12ede4:
    if (ctx->pc == 0x12EDE4u) {
        ctx->pc = 0x12EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDE0u;
        // 0x12ede4: 0x96030130  lhu         $v1, 0x130($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDE8u;
        goto label_12ede8;
    }
    ctx->pc = 0x12EDE0u;
    {
        const bool branch_taken_0x12ede0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ede0) {
            ctx->pc = 0x12EDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EDE0u;
            // 0x12ede4: 0x96030130  lhu         $v1, 0x130($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EE84u;
            goto label_12ee84;
        }
    }
    ctx->pc = 0x12EDE8u;
label_12ede8:
    // 0x12ede8: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x12ede8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_12edec:
    // 0x12edec: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x12edecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_12edf0:
    // 0x12edf0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_12edf4:
    // 0x12edf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12edf8:
    if (ctx->pc == 0x12EDF8u) {
        ctx->pc = 0x12EDFCu;
        goto label_12edfc;
    }
    ctx->pc = 0x12EDF4u;
    {
        const bool branch_taken_0x12edf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12edf4) {
            ctx->pc = 0x12EE04u;
            goto label_12ee04;
        }
    }
    ctx->pc = 0x12EDFCu;
label_12edfc:
    // 0x12edfc: 0xc061920  jal         func_186480
label_12ee00:
    if (ctx->pc == 0x12EE00u) {
        ctx->pc = 0x12EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDFCu;
        // 0x12ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE04u;
        goto label_12ee04;
    }
    ctx->pc = 0x12EDFCu;
    SET_GPR_U32(ctx, 31, 0x12EE04u);
    ctx->pc = 0x12EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDFCu;
    // 0x12ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x12EDFCu, 0x12EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE04u;
label_12ee04:
    // 0x12ee04: 0xc061422  jal         func_185088
label_12ee08:
    if (ctx->pc == 0x12EE08u) {
        ctx->pc = 0x12EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE04u;
        // 0x12ee08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE0Cu;
        goto label_12ee0c;
    }
    ctx->pc = 0x12EE04u;
    SET_GPR_U32(ctx, 31, 0x12EE0Cu);
    ctx->pc = 0x12EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE04u;
    // 0x12ee08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x12EE04u, 0x12EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE0Cu;
label_12ee0c:
    // 0x12ee0c: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x12ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_12ee10:
    // 0x12ee10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12ee10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12ee14:
    // 0x12ee14: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12ee14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_12ee18:
    // 0x12ee18: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12ee18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_12ee1c:
    // 0x12ee1c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12ee1cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_12ee20:
    // 0x12ee20: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x12ee20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_12ee24:
    // 0x12ee24: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x12ee24u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_12ee28:
    // 0x12ee28: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x12ee28u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_12ee2c:
    // 0x12ee2c: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x12ee2cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_12ee30:
    // 0x12ee30: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12ee30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee34:
    // 0x12ee34: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12ee34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee38:
    // 0x12ee38: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12ee38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee3c:
    // 0x12ee3c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12ee3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_12ee40:
    // 0x12ee40: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12ee40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee44:
    // 0x12ee44: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12ee44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee48:
    // 0x12ee48: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12ee48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee4c:
    // 0x12ee4c: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12ee4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_12ee50:
    // 0x12ee50: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12ee50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee54:
    // 0x12ee54: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12ee54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee58:
    // 0x12ee58: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12ee58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee5c:
    // 0x12ee5c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12ee5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_12ee60:
    // 0x12ee60: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12ee60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee64:
    // 0x12ee64: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12ee64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee68:
    // 0x12ee68: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12ee68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_12ee6c:
    // 0x12ee6c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12ee6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_12ee70:
    // 0x12ee70: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x12ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_12ee74:
    // 0x12ee74: 0xfa4d0010  sqc2        $vf13, 0x10($s2)
    ctx->pc = 0x12ee74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[13]));
label_12ee78:
    // 0x12ee78: 0xfa4e0020  sqc2        $vf14, 0x20($s2)
    ctx->pc = 0x12ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[14]));
label_12ee7c:
    // 0x12ee7c: 0xfa4f0030  sqc2        $vf15, 0x30($s2)
    ctx->pc = 0x12ee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[15]));
label_12ee80:
    // 0x12ee80: 0x96030130  lhu         $v1, 0x130($s0)
    ctx->pc = 0x12ee80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
label_12ee84:
    // 0x12ee84: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_12ee88:
    if (ctx->pc == 0x12EE88u) {
        ctx->pc = 0x12EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE84u;
        // 0x12ee88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE8Cu;
        goto label_12ee8c;
    }
    ctx->pc = 0x12EE84u;
    {
        const bool branch_taken_0x12ee84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE84u;
        // 0x12ee88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee84) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EE8Cu;
label_12ee8c:
    // 0x12ee8c: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x12ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_12ee90:
    // 0x12ee90: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_12ee94:
    if (ctx->pc == 0x12EE94u) {
        ctx->pc = 0x12EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE90u;
        // 0x12ee94: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE98u;
        goto label_12ee98;
    }
    ctx->pc = 0x12EE90u;
    {
        const bool branch_taken_0x12ee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ee90) {
            ctx->pc = 0x12EE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE90u;
            // 0x12ee94: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EECCu;
            goto label_12eecc;
        }
    }
    ctx->pc = 0x12EE98u;
label_12ee98:
    // 0x12ee98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_12ee9c:
    if (ctx->pc == 0x12EE9Cu) {
        ctx->pc = 0x12EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE98u;
        // 0x12ee9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEA0u;
        goto label_12eea0;
    }
    ctx->pc = 0x12EE98u;
    {
        const bool branch_taken_0x12ee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE98u;
        // 0x12ee9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee98) {
            ctx->pc = 0x12EEB0u;
            goto label_12eeb0;
        }
    }
    ctx->pc = 0x12EEA0u;
label_12eea0:
    // 0x12eea0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_12eea4:
    if (ctx->pc == 0x12EEA4u) {
        ctx->pc = 0x12EEA8u;
        goto label_12eea8;
    }
    ctx->pc = 0x12EEA0u;
    {
        const bool branch_taken_0x12eea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12eea0) {
            ctx->pc = 0x12EEC0u;
            goto label_12eec0;
        }
    }
    ctx->pc = 0x12EEA8u;
label_12eea8:
    // 0x12eea8: 0x10000008  b           . + 4 + (0x8 << 2)
label_12eeac:
    if (ctx->pc == 0x12EEACu) {
        ctx->pc = 0x12EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEA8u;
        // 0x12eeac: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEB0u;
        goto label_12eeb0;
    }
    ctx->pc = 0x12EEA8u;
    {
        const bool branch_taken_0x12eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEA8u;
        // 0x12eeac: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eea8) {
            ctx->pc = 0x12EECCu;
            goto label_12eecc;
        }
    }
    ctx->pc = 0x12EEB0u;
label_12eeb0:
    // 0x12eeb0: 0xc04c928  jal         func_1324A0
label_12eeb4:
    if (ctx->pc == 0x12EEB4u) {
        ctx->pc = 0x12EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB0u;
        // 0x12eeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEB8u;
        goto label_12eeb8;
    }
    ctx->pc = 0x12EEB0u;
    SET_GPR_U32(ctx, 31, 0x12EEB8u);
    ctx->pc = 0x12EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EEB0u;
    // 0x12eeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324A0u, 0x12EEB0u, 0x12EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEB8u;
label_12eeb8:
    // 0x12eeb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_12eebc:
    if (ctx->pc == 0x12EEBCu) {
        ctx->pc = 0x12EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB8u;
        // 0x12eebc: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEC0u;
        goto label_12eec0;
    }
    ctx->pc = 0x12EEB8u;
    {
        const bool branch_taken_0x12eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB8u;
        // 0x12eebc: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eeb8) {
            ctx->pc = 0x12EECCu;
            goto label_12eecc;
        }
    }
    ctx->pc = 0x12EEC0u;
label_12eec0:
    // 0x12eec0: 0xc04c92a  jal         func_1324A8
label_12eec4:
    if (ctx->pc == 0x12EEC4u) {
        ctx->pc = 0x12EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEC0u;
        // 0x12eec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEC8u;
        goto label_12eec8;
    }
    ctx->pc = 0x12EEC0u;
    SET_GPR_U32(ctx, 31, 0x12EEC8u);
    ctx->pc = 0x12EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EEC0u;
    // 0x12eec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324A8u, 0x12EEC0u, 0x12EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEC8u;
label_12eec8:
    // 0x12eec8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x12eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_12eecc:
    // 0x12eecc: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_12eed0:
    if (ctx->pc == 0x12EED0u) {
        ctx->pc = 0x12EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EECCu;
        // 0x12eed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EED4u;
        goto label_12eed4;
    }
    ctx->pc = 0x12EECCu;
    {
        const bool branch_taken_0x12eecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EECCu;
        // 0x12eed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eecc) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EED4u;
label_12eed4:
    // 0x12eed4: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_12eed8:
    // 0x12eed8: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
label_12eedc:
    if (ctx->pc == 0x12EEDCu) {
        ctx->pc = 0x12EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED8u;
        // 0x12eedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEE0u;
        goto label_12eee0;
    }
    ctx->pc = 0x12EED8u;
    {
        const bool branch_taken_0x12eed8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED8u;
        // 0x12eedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eed8) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EEE0u;
label_12eee0:
    // 0x12eee0: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_12eee4:
    // 0x12eee4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_12eee8:
    if (ctx->pc == 0x12EEE8u) {
        ctx->pc = 0x12EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEE4u;
        // 0x12eee8: 0x96040126  lhu         $a0, 0x126($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEECu;
        goto label_12eeec;
    }
    ctx->pc = 0x12EEE4u;
    {
        const bool branch_taken_0x12eee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12eee4) {
            ctx->pc = 0x12EEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EEE4u;
            // 0x12eee8: 0x96040126  lhu         $a0, 0x126($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF08u;
            goto label_12ef08;
        }
    }
    ctx->pc = 0x12EEECu;
label_12eeec:
    // 0x12eeec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12eef0:
    // 0x12eef0: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
label_12eef4:
    if (ctx->pc == 0x12EEF4u) {
        ctx->pc = 0x12EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEF0u;
        // 0x12eef4: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEF8u;
        goto label_12eef8;
    }
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEF0u;
        // 0x12eef4: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EFA0u;
            goto label_12efa0;
        }
    }
    ctx->pc = 0x12EEF8u;
label_12eef8:
    // 0x12eef8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12eefc:
    // 0x12eefc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12ef00:
    // 0x12ef00: 0x10000027  b           . + 4 + (0x27 << 2)
label_12ef04:
    if (ctx->pc == 0x12EF04u) {
        ctx->pc = 0x12EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF00u;
        // 0x12ef04: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF08u;
        goto label_12ef08;
    }
    ctx->pc = 0x12EF00u;
    {
        const bool branch_taken_0x12ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF00u;
        // 0x12ef04: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef00) {
            ctx->pc = 0x12EFA0u;
            goto label_12efa0;
        }
    }
    ctx->pc = 0x12EF08u;
label_12ef08:
    // 0x12ef08: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
label_12ef0c:
    if (ctx->pc == 0x12EF0Cu) {
        ctx->pc = 0x12EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF08u;
        // 0x12ef0c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF10u;
        goto label_12ef10;
    }
    ctx->pc = 0x12EF08u;
    {
        const bool branch_taken_0x12ef08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef08) {
            ctx->pc = 0x12EF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF08u;
            // 0x12ef0c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF48u;
            goto label_12ef48;
        }
    }
    ctx->pc = 0x12EF10u;
label_12ef10:
    // 0x12ef10: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x12ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_12ef14:
    // 0x12ef14: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12ef18:
    // 0x12ef18: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_12ef1c:
    if (ctx->pc == 0x12EF1Cu) {
        ctx->pc = 0x12EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF18u;
        // 0x12ef1c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF20u;
        goto label_12ef20;
    }
    ctx->pc = 0x12EF18u;
    {
        const bool branch_taken_0x12ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef18) {
            ctx->pc = 0x12EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF18u;
            // 0x12ef1c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF48u;
            goto label_12ef48;
        }
    }
    ctx->pc = 0x12EF20u;
label_12ef20:
    // 0x12ef20: 0x96020124  lhu         $v0, 0x124($s0)
    ctx->pc = 0x12ef20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
label_12ef24:
    // 0x12ef24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12ef28:
    // 0x12ef28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x12ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12ef2c:
    // 0x12ef2c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x12ef2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_12ef30:
    // 0x12ef30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_12ef34:
    if (ctx->pc == 0x12EF34u) {
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0xa6020124  sh          $v0, 0x124($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF38u;
        goto label_12ef38;
    }
    ctx->pc = 0x12EF30u;
    {
        const bool branch_taken_0x12ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0xa6020124  sh          $v0, 0x124($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef30) {
            ctx->pc = 0x12EF44u;
            goto label_12ef44;
        }
    }
    ctx->pc = 0x12EF38u;
label_12ef38:
    // 0x12ef38: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x12ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_12ef3c:
    // 0x12ef3c: 0xa6000124  sh          $zero, 0x124($s0)
    ctx->pc = 0x12ef3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 0));
label_12ef40:
    // 0x12ef40: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x12ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_12ef44:
    // 0x12ef44: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x12ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_12ef48:
    // 0x12ef48: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_12ef4c:
    // 0x12ef4c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12ef50:
    // 0x12ef50: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_12ef54:
    if (ctx->pc == 0x12EF54u) {
        ctx->pc = 0x12EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF50u;
        // 0x12ef54: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF58u;
        goto label_12ef58;
    }
    ctx->pc = 0x12EF50u;
    {
        const bool branch_taken_0x12ef50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF50u;
        // 0x12ef54: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef50) {
            ctx->pc = 0x12EFA0u;
            goto label_12efa0;
        }
    }
    ctx->pc = 0x12EF58u;
label_12ef58:
    // 0x12ef58: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_12ef5c:
    // 0x12ef5c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x12ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_12ef60:
    // 0x12ef60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12ef60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12ef64:
    // 0x12ef64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12ef68:
    if (ctx->pc == 0x12EF68u) {
        ctx->pc = 0x12EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF64u;
        // 0x12ef68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF6Cu;
        goto label_12ef6c;
    }
    ctx->pc = 0x12EF64u;
    {
        const bool branch_taken_0x12ef64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF64u;
        // 0x12ef68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef64) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EF6Cu;
label_12ef6c:
    // 0x12ef6c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x12ef6cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_12ef70:
    // 0x12ef70: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_12ef74:
    if (ctx->pc == 0x12EF74u) {
        ctx->pc = 0x12EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF70u;
        // 0x12ef74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF78u;
        goto label_12ef78;
    }
    ctx->pc = 0x12EF70u;
    {
        const bool branch_taken_0x12ef70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef70) {
            ctx->pc = 0x12EF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF70u;
            // 0x12ef74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF78u;
            goto label_12ef78;
        }
    }
    ctx->pc = 0x12EF78u;
label_12ef78:
    // 0x12ef78: 0x1010  mfhi        $v0
    ctx->pc = 0x12ef78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_12ef7c:
    // 0x12ef7c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_12ef80:
    if (ctx->pc == 0x12EF80u) {
        ctx->pc = 0x12EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF7Cu;
        // 0x12ef80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF84u;
        goto label_12ef84;
    }
    ctx->pc = 0x12EF7Cu;
    {
        const bool branch_taken_0x12ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef7c) {
            ctx->pc = 0x12EF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF7Cu;
            // 0x12ef80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EF84u;
label_12ef84:
    // 0x12ef84: 0xc066f72  jal         func_19BDC8
label_12ef88:
    if (ctx->pc == 0x12EF88u) {
        ctx->pc = 0x12EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF84u;
        // 0x12ef88: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF8Cu;
        goto label_12ef8c;
    }
    ctx->pc = 0x12EF84u;
    SET_GPR_U32(ctx, 31, 0x12EF8Cu);
    ctx->pc = 0x12EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF84u;
    // 0x12ef88: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12EF84u, 0x12EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF8Cu;
label_12ef8c:
    // 0x12ef8c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_12ef90:
    // 0x12ef90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ef94:
    // 0x12ef94: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x12ef94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_12ef98:
    // 0x12ef98: 0xc04bc46  jal         func_12F118
label_12ef9c:
    if (ctx->pc == 0x12EF9Cu) {
        ctx->pc = 0x12EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF98u;
        // 0x12ef9c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFA0u;
        goto label_12efa0;
    }
    ctx->pc = 0x12EF98u;
    SET_GPR_U32(ctx, 31, 0x12EFA0u);
    ctx->pc = 0x12EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF98u;
    // 0x12ef9c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F118u, 0x12EF98u, 0x12EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFA0u;
label_12efa0:
    // 0x12efa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12efa4:
    // 0x12efa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12efa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12efa8:
    // 0x12efa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12efa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12efac:
    // 0x12efac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12efacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12efb0:
    // 0x12efb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12efb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12efb4:
    // 0x12efb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12efb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12efb8:
    // 0x12efb8: 0x3e00008  jr          $ra
label_12efbc:
    if (ctx->pc == 0x12EFBCu) {
        ctx->pc = 0x12EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFB8u;
        // 0x12efbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFC0u;
        goto label_fallthrough_0x12efb8;
    }
    ctx->pc = 0x12EFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFB8u;
        // 0x12efbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12efb8:
    ctx->pc = 0x12EFC0u;
}
