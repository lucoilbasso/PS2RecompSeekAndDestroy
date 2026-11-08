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

// Function: WingPartsEffectRequest__9ApcCqpartiP9FVector32
// Address: 0x1651e0 - 0x165328
void WingPartsEffectRequest__9ApcCqpartiP9FVector32_0x1651e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WingPartsEffectRequest__9ApcCqpartiP9FVector32_0x1651e0");
#endif

    switch (ctx->pc) {
        case 0x165268u: goto label_165268;
        case 0x165278u: goto label_165278;
        case 0x165280u: goto label_165280;
        case 0x1652a8u: goto label_1652a8;
        case 0x1652bcu: goto label_1652bc;
        case 0x1652d0u: goto label_1652d0;
        default: break;
    }

    ctx->pc = 0x1651e0u;

    // 0x1651e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1651e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1651e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1651e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1651e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1651ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1651f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1651f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1651f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1651f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1651f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651fc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1651fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x165200: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x165200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x165204: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x165204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x165208: 0x8e221218  lw          $v0, 0x1218($s1)
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4632)));
    // 0x16520c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16520Cu;
    {
        const bool branch_taken_0x16520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16520Cu;
        // 0x165210: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16520c) {
            ctx->pc = 0x165268u;
            goto label_165268;
        }
    }
    ctx->pc = 0x165214u;
    // 0x165214: 0x8e30121c  lw          $s0, 0x121C($s1)
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
    // 0x165218: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16521c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x165220: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x165220u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165224: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x165224u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165228: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x165228u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16522c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16522cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x165230: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x165230u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x165234: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x165234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x165238: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x165238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16523c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16523cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x165240: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x165240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x165244: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x165244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x165248: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x165248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16524c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16524cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x165250: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x165254: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x165254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x165258: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x165258u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16525c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165260: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x165260u;
    SET_GPR_U32(ctx, 31, 0x165268u);
    ctx->pc = 0x165264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165260u;
    // 0x165264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x165260u, 0x165268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165268u;
label_165268:
    // 0x165268: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x165268u;
    {
        const bool branch_taken_0x165268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165268u;
        // 0x16526c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165268) {
            ctx->pc = 0x165308u;
            goto label_165308;
        }
    }
    ctx->pc = 0x165270u;
    // 0x165270: 0x26311258  addiu       $s1, $s1, 0x1258
    ctx->pc = 0x165270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4696));
    // 0x165274: 0x0  nop
    ctx->pc = 0x165274u;
    // NOP
label_165278:
    // 0x165278: 0xc04c99a  jal         func_132668
    ctx->pc = 0x165278u;
    SET_GPR_U32(ctx, 31, 0x165280u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x165278u, 0x165280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165280u;
label_165280:
    // 0x165280: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x165280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165284: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x165284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x165288: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x165288u;
    {
        const bool branch_taken_0x165288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x165288) {
            ctx->pc = 0x1652A0u;
            goto label_1652a0;
        }
    }
    ctx->pc = 0x165290u;
    // 0x165290: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x165290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165294: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x165294u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x165298: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x165298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16529c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1652a0:
    // 0x1652a0: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x1652A0u;
    SET_GPR_U32(ctx, 31, 0x1652A8u);
    ctx->pc = 0x1652A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652A0u;
    // 0x1652a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x1652A0u, 0x1652A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652A8u;
label_1652a8:
    // 0x1652a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1652a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652ac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1652acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1652b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1652b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652b4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1652B4u;
    SET_GPR_U32(ctx, 31, 0x1652BCu);
    ctx->pc = 0x1652B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652B4u;
    // 0x1652b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1652B4u, 0x1652BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652BCu;
label_1652bc:
    // 0x1652bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1652bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1652C0u;
    {
        const bool branch_taken_0x1652c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C0u;
        // 0x1652c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652c0) {
            ctx->pc = 0x1652ECu;
            goto label_1652ec;
        }
    }
    ctx->pc = 0x1652C8u;
    // 0x1652c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1652cc: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x1652ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_1652d0:
    // 0x1652d0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1652d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1652d4: 0x0  nop
    ctx->pc = 0x1652d4u;
    // NOP
    // 0x1652d8: 0x0  nop
    ctx->pc = 0x1652d8u;
    // NOP
    // 0x1652dc: 0x0  nop
    ctx->pc = 0x1652dcu;
    // NOP
    // 0x1652e0: 0x0  nop
    ctx->pc = 0x1652e0u;
    // NOP
    // 0x1652e4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1652E4u;
    {
        const bool branch_taken_0x1652e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652e4) {
            ctx->pc = 0x1652E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1652E4u;
            // 0x1652e8: 0xac6200e0  sw          $v0, 0xE0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1652D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1652d0;
        }
    }
    ctx->pc = 0x1652ECu;
label_1652ec:
    // 0x1652ec: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1652f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1652f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1652f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1652F4u;
    {
        const bool branch_taken_0x1652f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F4u;
        // 0x1652f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652f4) {
            ctx->pc = 0x165308u;
            goto label_165308;
        }
    }
    ctx->pc = 0x1652FCu;
    // 0x1652fc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1652fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165300: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x165300u;
    {
        const bool branch_taken_0x165300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165300) {
            ctx->pc = 0x165278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165278;
        }
    }
    ctx->pc = 0x165308u;
label_165308:
    // 0x165308: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x165308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16530c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16530cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165310: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x165310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165314: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x165314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165318: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x165318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16531c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16531cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165320: 0x3e00008  jr          $ra
    ctx->pc = 0x165320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165320u;
        // 0x165324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165328u;
}
