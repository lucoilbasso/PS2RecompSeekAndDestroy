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

// Function: ShadowPosition__9ApcShadowP7WcActor
// Address: 0x16b2f0 - 0x16b41c
void ShadowPosition__9ApcShadowP7WcActor_0x16b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShadowPosition__9ApcShadowP7WcActor_0x16b2f0");
#endif

    switch (ctx->pc) {
        case 0x16b320u: goto label_16b320;
        case 0x16b370u: goto label_16b370;
        case 0x16b390u: goto label_16b390;
        case 0x16b3acu: goto label_16b3ac;
        case 0x16b3bcu: goto label_16b3bc;
        case 0x16b3ccu: goto label_16b3cc;
        case 0x16b3dcu: goto label_16b3dc;
        case 0x16b3ecu: goto label_16b3ec;
        case 0x16b400u: goto label_16b400;
        default: break;
    }

    ctx->pc = 0x16b2f0u;

    // 0x16b2f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16b2f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x16b2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b2f8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x16b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x16b2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b300: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x16b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x16b304: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16b304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b308: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x16b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x16b30c: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x16b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x16b310: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x16b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x16b314: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x16b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16b318: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x16b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16b31c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_16b320:
    // 0x16b320: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x16b320u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b324: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b328: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16b328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16b32c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16b32cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16b330: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16b330u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16b334: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b338: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b33c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b33cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b340: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16b340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b344: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x16b344u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16b348: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x16b348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x16b34c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x16b350: 0x0  nop
    ctx->pc = 0x16b350u;
    // NOP
    // 0x16b354: 0x0  nop
    ctx->pc = 0x16b354u;
    // NOP
    // 0x16b358: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x16B358u;
    {
        const bool branch_taken_0x16b358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B358u;
        // 0x16b35c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b358) {
            ctx->pc = 0x16B320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b320;
        }
    }
    ctx->pc = 0x16B360u;
    // 0x16b360: 0x8cb30170  lw          $s3, 0x170($a1)
    ctx->pc = 0x16b360u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x16b364: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x16b364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b368: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b36c: 0x0  nop
    ctx->pc = 0x16b36cu;
    // NOP
label_16b370:
    // 0x16b370: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x16b374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b37c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16b37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16b384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b388: 0xc05129a  jal         func_144A68
    ctx->pc = 0x16B388u;
    SET_GPR_U32(ctx, 31, 0x16B390u);
    ctx->pc = 0x16B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B388u;
    // 0x16b38c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x16B388u, 0x16B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B390u;
label_16b390:
    // 0x16b390: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16b390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x16b394: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x16B394u;
    {
        const bool branch_taken_0x16b394 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x16B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B394u;
        // 0x16b398: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b394) {
            ctx->pc = 0x16B370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b370;
        }
    }
    ctx->pc = 0x16B39Cu;
    // 0x16b39c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3a4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3A4u;
    SET_GPR_U32(ctx, 31, 0x16B3ACu);
    ctx->pc = 0x16B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3A4u;
    // 0x16b3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3A4u, 0x16B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3ACu;
label_16b3ac:
    // 0x16b3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16b3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3b4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3B4u;
    SET_GPR_U32(ctx, 31, 0x16B3BCu);
    ctx->pc = 0x16B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3B4u;
    // 0x16b3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3B4u, 0x16B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3BCu;
label_16b3bc:
    // 0x16b3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3c0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b3c4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3C4u;
    SET_GPR_U32(ctx, 31, 0x16B3CCu);
    ctx->pc = 0x16B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3C4u;
    // 0x16b3c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3C4u, 0x16B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3CCu;
label_16b3cc:
    // 0x16b3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b3d4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3D4u;
    SET_GPR_U32(ctx, 31, 0x16B3DCu);
    ctx->pc = 0x16B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3D4u;
    // 0x16b3d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3D4u, 0x16B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3DCu;
label_16b3dc:
    // 0x16b3dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x16b3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b3e4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3E4u;
    SET_GPR_U32(ctx, 31, 0x16B3ECu);
    ctx->pc = 0x16B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3E4u;
    // 0x16b3e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3E4u, 0x16B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3ECu;
label_16b3ec:
    // 0x16b3ec: 0x8e2601c8  lw          $a2, 0x1C8($s1)
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x16b3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b3f8: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3F8u;
    SET_GPR_U32(ctx, 31, 0x16B400u);
    ctx->pc = 0x16B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3F8u;
    // 0x16b3fc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3F8u, 0x16B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B400u;
label_16b400:
    // 0x16b400: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x16b400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b404: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16b408: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x16b408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b40c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16b410: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b414: 0x3e00008  jr          $ra
    ctx->pc = 0x16B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B414u;
        // 0x16b418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B41Cu;
}
