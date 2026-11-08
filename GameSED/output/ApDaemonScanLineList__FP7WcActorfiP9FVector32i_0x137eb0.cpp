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

// Function: ApDaemonScanLineList__FP7WcActorfiP9FVector32i
// Address: 0x137eb0 - 0x1382e8
void ApDaemonScanLineList__FP7WcActorfiP9FVector32i_0x137eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanLineList__FP7WcActorfiP9FVector32i_0x137eb0");
#endif

    switch (ctx->pc) {
        case 0x137f20u: goto label_137f20;
        case 0x137f2cu: goto label_137f2c;
        case 0x137f5cu: goto label_137f5c;
        case 0x137f64u: goto label_137f64;
        case 0x138000u: goto label_138000;
        case 0x138068u: goto label_138068;
        case 0x1380b0u: goto label_1380b0;
        case 0x13812cu: goto label_13812c;
        case 0x138134u: goto label_138134;
        default: break;
    }

    ctx->pc = 0x137eb0u;

    // 0x137eb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x137eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x137eb4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x137eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x137eb8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x137eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x137ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ec0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x137ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x137ec4: 0x3415e000  ori         $s5, $zero, 0xE000
    ctx->pc = 0x137ec4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x137ec8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x137ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x137ecc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x137eccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ed0: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x137ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x137ed4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x137ed4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ed8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x137ed8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x137edc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x137edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x137ee0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x137ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x137ee4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x137ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x137ee8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x137ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x137eec: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x137eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x137ef0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x137ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x137ef4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x137ef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x137ef8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x137ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x137efc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137f00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137f04: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x137f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x137f08: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x137f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137f0c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x137f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x137f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137F10u;
    {
        const bool branch_taken_0x137f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F10u;
        // 0x137f14: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f10) {
            ctx->pc = 0x137F20u;
            goto label_137f20;
        }
    }
    ctx->pc = 0x137F18u;
    // 0x137f18: 0xc061920  jal         func_186480
    ctx->pc = 0x137F18u;
    SET_GPR_U32(ctx, 31, 0x137F20u);
    ctx->pc = 0x137F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F18u;
    // 0x137f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137F18u, 0x137F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F20u;
label_137f20:
    // 0x137f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f24: 0xc061422  jal         func_185088
    ctx->pc = 0x137F24u;
    SET_GPR_U32(ctx, 31, 0x137F2Cu);
    ctx->pc = 0x137F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F24u;
    // 0x137f28: 0x261300e0  addiu       $s3, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137F24u, 0x137F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F2Cu;
label_137f2c:
    // 0x137f2c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x137f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x137f30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137f34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137f38: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x137f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137f3c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x137f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137f40: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x137f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x137f44: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x137f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137f48: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x137f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x137f4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137F4Cu;
    {
        const bool branch_taken_0x137f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F4Cu;
        // 0x137f50: 0x27b40060  addiu       $s4, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f4c) {
            ctx->pc = 0x137F5Cu;
            goto label_137f5c;
        }
    }
    ctx->pc = 0x137F54u;
    // 0x137f54: 0xc061920  jal         func_186480
    ctx->pc = 0x137F54u;
    SET_GPR_U32(ctx, 31, 0x137F5Cu);
    ctx->pc = 0x137F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F54u;
    // 0x137f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137F54u, 0x137F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F5Cu;
label_137f5c:
    // 0x137f5c: 0xc061422  jal         func_185088
    ctx->pc = 0x137F5Cu;
    SET_GPR_U32(ctx, 31, 0x137F64u);
    ctx->pc = 0x137F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F5Cu;
    // 0x137f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137F5Cu, 0x137F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F64u;
label_137f64:
    // 0x137f64: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x137f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x137f68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137f6c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x137f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x137f70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137f78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137f7c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x137f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137f80: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x137f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x137f84: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x137f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x137f88: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x137f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x137f8c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x137f8cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x137f90: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x137f90u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x137f94: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x137f94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x137f98: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x137f98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x137f9c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x137f9cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137fa0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x137fa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137fa4: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x137fa4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x137fa8: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x137fa8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x137fac: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x137facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x137fb0: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x137fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x137fb4: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x137fb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x137fb8: 0xf8c80000  sqc2        $vf8, 0x0($a2)
    ctx->pc = 0x137fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x137fbc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137fc0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x137fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137fc4: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x137fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137fc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x137fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x137fcc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x137fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137fd0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x137fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137fd4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x137fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137fd8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x137fd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137fdc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x137fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137fe0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x137fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137fe4: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x137fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x137fe8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137fec: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x137fecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x137ff0: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x137ff4: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x137ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x137ff8: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x137ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x137ffc: 0x0  nop
    ctx->pc = 0x137ffcu;
    // NOP
label_138000:
    // 0x138000: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x138004: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x138004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x138008: 0x0  nop
    ctx->pc = 0x138008u;
    // NOP
    // 0x13800c: 0x0  nop
    ctx->pc = 0x13800cu;
    // NOP
    // 0x138010: 0x0  nop
    ctx->pc = 0x138010u;
    // NOP
    // 0x138014: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138014u;
    {
        const bool branch_taken_0x138014 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x138018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138014u;
        // 0x138018: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138014) {
            ctx->pc = 0x138000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138000;
        }
    }
    ctx->pc = 0x13801Cu;
    // 0x13801c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x138020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138024: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x138028: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13802c: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x13802cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x138030: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x138030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138034: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x138034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x138038: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x138038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13803c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13803cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138040: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x138040u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138044: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x138044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x138048: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x138048u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13804c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13804cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138050: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x138050u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138058: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x138058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13805c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x13805cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138060: 0xc04dd4a  jal         func_137528
    ctx->pc = 0x138060u;
    SET_GPR_U32(ctx, 31, 0x138068u);
    ctx->pc = 0x138064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138060u;
    // 0x138064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137528u, 0x138060u, 0x138068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138068u;
label_138068:
    // 0x138068: 0x18400090  blez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x138068u;
    {
        const bool branch_taken_0x138068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138068u;
        // 0x13806c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138068) {
            ctx->pc = 0x1382ACu;
            goto label_1382ac;
        }
    }
    ctx->pc = 0x138070u;
    // 0x138070: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138074: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x138074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x138078: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13807c: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x138080: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x138080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x138084: 0x18400087  blez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x138088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138084u;
        // 0x138088: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138084) {
            ctx->pc = 0x1382A4u;
            goto label_1382a4;
        }
    }
    ctx->pc = 0x13808Cu;
    // 0x13808c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138090: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x138090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x138094: 0x245ea390  addiu       $fp, $v0, -0x5C70
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x138098: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13809c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13809cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1380a0: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1380a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1380a4: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x1380a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x1380a8: 0x2694bc50  addiu       $s4, $s4, -0x43B0
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949968));
    // 0x1380ac: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1380acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FBC50u));
label_1380b0:
    // 0x1380b0: 0xc4a000ec  lwc1        $f0, 0xEC($a1)
    ctx->pc = 0x1380b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1380b4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1380b8: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1380b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1380bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1380BCu;
    {
        const bool branch_taken_0x1380bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1380C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380BCu;
        // 0x1380c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380bc) {
            ctx->pc = 0x1380C8u;
            goto label_1380c8;
        }
    }
    ctx->pc = 0x1380C4u;
    // 0x1380c4: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x1380c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1380c8:
    // 0x1380c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1380cc: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x1380d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1380d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1380d4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1380D4u;
    {
        const bool branch_taken_0x1380d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1380D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380D4u;
        // 0x1380d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380d4) {
            ctx->pc = 0x138100u;
            goto label_138100;
        }
    }
    ctx->pc = 0x1380DCu;
    // 0x1380dc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1380e0: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x1380e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x1380e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1380E4u;
    {
        const bool branch_taken_0x1380e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1380E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E4u;
        // 0x1380e8: 0x8e0201c4  lw          $v0, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e4) {
            ctx->pc = 0x1380F4u;
            goto label_1380f4;
        }
    }
    ctx->pc = 0x1380ECu;
    // 0x1380ec: 0xc7808120  lwc1        $f0, -0x7EE0($gp)
    ctx->pc = 0x1380ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1380f0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1380f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1380f4:
    // 0x1380f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1380F4u;
    {
        const bool branch_taken_0x1380f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380F4u;
        // 0x1380f8: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380f4) {
            ctx->pc = 0x13810Cu;
            goto label_13810c;
        }
    }
    ctx->pc = 0x1380FCu;
    // 0x1380fc: 0x0  nop
    ctx->pc = 0x1380fcu;
    // NOP
label_138100:
    // 0x138100: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x138100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x138104: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x138108: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_13810c:
    // 0x13810c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138110: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x138114: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x138114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x138118: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x138118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13811c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13811Cu;
    {
        const bool branch_taken_0x13811c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13811c) {
            ctx->pc = 0x13812Cu;
            goto label_13812c;
        }
    }
    ctx->pc = 0x138124u;
    // 0x138124: 0xc061920  jal         func_186480
    ctx->pc = 0x138124u;
    SET_GPR_U32(ctx, 31, 0x13812Cu);
    ctx->pc = 0x138128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138124u;
    // 0x138128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x138124u, 0x13812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13812Cu;
label_13812c:
    // 0x13812c: 0xc061422  jal         func_185088
    ctx->pc = 0x13812Cu;
    SET_GPR_U32(ctx, 31, 0x138134u);
    ctx->pc = 0x138130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13812Cu;
    // 0x138130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13812Cu, 0x138134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138134u;
label_138134:
    // 0x138134: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x138138: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x138138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13813c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x13813cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x138140: 0x4615a280  add.s       $f10, $f20, $f21
    ctx->pc = 0x138140u;
    ctx->f[10] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x138144: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x138144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x138148: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x138148u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x13814c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x13814cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x138150: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x138150u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x138154: 0x460a5082  mul.s       $f2, $f10, $f10
    ctx->pc = 0x138154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x138158: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13815c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x13815cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x138160: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x138160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x138164: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x138164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x138168: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x138168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13816c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13816cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138170: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x138170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138174: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x138174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138178: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x138178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13817c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13817cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x138180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138184: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x138184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x138188: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x138188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13818c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13818cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138190: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x138190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138194: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x138194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138198: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x138198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13819c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13819cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1381a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1381a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1381a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1381a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1381a8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1381a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1381ac: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1381acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1381b0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1381b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1381b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1381b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1381b8: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x1381b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1381bc: 0x4602b036  c.le.s      $f22, $f2
    ctx->pc = 0x1381bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1381c0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1381c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1381c4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1381c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1381c8: 0x46012281  sub.s       $f10, $f4, $f1
    ctx->pc = 0x1381c8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1381cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1381ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1381d0: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1381d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1381d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1381d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1381d8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1381d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1381dc: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x1381dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1381e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1381e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1381e4: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x1381e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1381e8: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x1381e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1381ec: 0x46003a07  neg.s       $f8, $f7
    ctx->pc = 0x1381ecu;
    ctx->f[8] = FPU_NEG_S(ctx->f[7]);
    // 0x1381f0: 0x460a3082  mul.s       $f2, $f6, $f10
    ctx->pc = 0x1381f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x1381f4: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x1381f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x1381f8: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1381f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1381fc: 0x460a2a42  mul.s       $f9, $f5, $f10
    ctx->pc = 0x1381fcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x138200: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x138200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x138204: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x138204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x138208: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x138208u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x13820c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13820cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x138210: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x138210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x138214: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x138214u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x138218: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x138218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x13821c: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x13821cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x138220: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x138220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x138224: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x138224u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x138228: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x138228u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x13822c: 0x46024501  sub.s       $f20, $f8, $f2
    ctx->pc = 0x13822cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x138230: 0x46070881  sub.s       $f2, $f1, $f7
    ctx->pc = 0x138230u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x138234: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x138234u;
    {
        const bool branch_taken_0x138234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138234u;
        // 0x138238: 0x46053040  add.s       $f1, $f6, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138234) {
            ctx->pc = 0x13827Cu;
            goto label_13827c;
        }
    }
    ctx->pc = 0x13823Cu;
    // 0x13823c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13823cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x138240: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x138244: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x138244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x138248: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x138248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x13824c: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x13824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138250: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x138250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x138254: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x138254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x138258: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x138258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13825c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13825cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138260: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x138260u;
    {
        const bool branch_taken_0x138260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138260) {
            ctx->pc = 0x138264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138260u;
            // 0x138264: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138280u;
            goto label_138280;
        }
    }
    ctx->pc = 0x138268u;
    // 0x138268: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x138268u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x13826c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x13826cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x138270: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x138270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138278: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x138278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_13827c:
    // 0x13827c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13827cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_138280:
    // 0x138280: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x138280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x138284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138284u;
    {
        const bool branch_taken_0x138284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138284u;
        // 0x138288: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138284) {
            ctx->pc = 0x1382A4u;
            goto label_1382a4;
        }
    }
    ctx->pc = 0x13828Cu;
    // 0x13828c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x138290: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x138290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x138294: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x138298: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x138298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13829c: 0x5440ff84  bnel        $v0, $zero, . + 4 + (-0x7C << 2)
    ctx->pc = 0x13829Cu;
    {
        const bool branch_taken_0x13829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13829c) {
            ctx->pc = 0x1382A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13829Cu;
            // 0x1382a0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1380B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1380b0;
        }
    }
    ctx->pc = 0x1382A4u;
label_1382a4:
    // 0x1382a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1382a8: 0xaf828a1c  sw          $v0, -0x75E4($gp)
    ctx->pc = 0x1382a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 2));
label_1382ac:
    // 0x1382ac: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1382acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1382b0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1382b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1382b4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1382b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1382b8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1382b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1382bc: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1382bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1382c0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1382c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1382c4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1382c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1382c8: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1382c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1382cc: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1382ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1382d0: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1382d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1382d4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1382d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1382d8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1382d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1382dc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1382dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1382e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1382E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1382E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382E0u;
        // 0x1382e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1382E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1382E8u;
}
