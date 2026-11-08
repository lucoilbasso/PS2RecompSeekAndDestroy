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

// Function: entry_001203b0
// Address: 0x1203b0 - 0x1204f4
void entry_001203b0_0x1203b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001203b0_0x1203b0");
#endif

    switch (ctx->pc) {
        case 0x1203bcu: goto label_1203bc;
        case 0x120488u: goto label_120488;
        case 0x120494u: goto label_120494;
        case 0x1204a0u: goto label_1204a0;
        case 0x1204acu: goto label_1204ac;
        case 0x1204b8u: goto label_1204b8;
        case 0x1204c4u: goto label_1204c4;
        default: break;
    }

    ctx->pc = 0x1203b0u;

label_1203b0:
    // 0x1203b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1203b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203b4: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x1203B4u;
    SET_GPR_U32(ctx, 31, 0x1203BCu);
    ctx->pc = 0x1203B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203B4u;
    // 0x1203b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x1203B4u, 0x1203BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203BCu;
label_1203bc:
    // 0x1203bc: 0x21e1821  addu        $v1, $s0, $fp
    ctx->pc = 0x1203bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x1203c0: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x1203c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1203c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1203c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1203c8: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x1203c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1203cc: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x1203ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1203d0: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x1203d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1203d4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1203d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1203d8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1203d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1203dc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1203dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1203e0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1203e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1203e4: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x1203e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1203e8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1203e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1203ec: 0x246374f0  addiu       $v1, $v1, 0x74F0
    ctx->pc = 0x1203ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29936));
    // 0x1203f0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1203f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1203f4: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x1203f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1203f8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1203f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1203fc: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x1203fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x120400: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x120400u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x120404: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x120404u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x120408: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x120408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12040c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12040cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120410: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120414: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x120414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x120418: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x120418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12041c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x12041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x120420: 0x24847500  addiu       $a0, $a0, 0x7500
    ctx->pc = 0x120420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29952));
    // 0x120424: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x120424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x120428: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x120428u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12042c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x12042cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120430: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x120430u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x120434: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x120434u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x120438: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x120438u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x12043c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12043cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120440: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x120440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120444: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120448: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x120448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12044c: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x12044cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x120450: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x120450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x120454: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x120454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x120458: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x120458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x12045c: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x12045cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x120460: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x120460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x120464: 0x641ffd2  bgez        $s2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x120464u;
    {
        const bool branch_taken_0x120464 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x120468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120464u;
        // 0x120468: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120464) {
            ctx->pc = 0x1203B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1203b0;
        }
    }
    ctx->pc = 0x12046Cu;
    // 0x12046c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12046cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x120470: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x120470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x120474: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x120474u;
    {
        const bool branch_taken_0x120474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120474u;
        // 0x120478: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120474) {
            ctx->pc = 0x120398u;
            return;
        }
    }
    ctx->pc = 0x12047Cu;
    // 0x12047c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120480: 0xc0480a2  jal         func_120288
    ctx->pc = 0x120480u;
    SET_GPR_U32(ctx, 31, 0x120488u);
    ctx->pc = 0x120484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120480u;
    // 0x120484: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120288u, 0x120480u, 0x120488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120488u;
label_120488:
    // 0x120488: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x120488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12048c: 0xc0480a2  jal         func_120288
    ctx->pc = 0x12048Cu;
    SET_GPR_U32(ctx, 31, 0x120494u);
    ctx->pc = 0x120490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12048Cu;
    // 0x120490: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120288u, 0x12048Cu, 0x120494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120494u;
label_120494:
    // 0x120494: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x120494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x120498: 0xc0480a2  jal         func_120288
    ctx->pc = 0x120498u;
    SET_GPR_U32(ctx, 31, 0x1204A0u);
    ctx->pc = 0x12049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120498u;
    // 0x12049c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120288u, 0x120498u, 0x1204A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204A0u;
label_1204a0:
    // 0x1204a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1204a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1204a4: 0xc0480a2  jal         func_120288
    ctx->pc = 0x1204A4u;
    SET_GPR_U32(ctx, 31, 0x1204ACu);
    ctx->pc = 0x1204A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204A4u;
    // 0x1204a8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120288u, 0x1204A4u, 0x1204ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204ACu;
label_1204ac:
    // 0x1204ac: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1204acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1204b0: 0xc0480a2  jal         func_120288
    ctx->pc = 0x1204B0u;
    SET_GPR_U32(ctx, 31, 0x1204B8u);
    ctx->pc = 0x1204B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204B0u;
    // 0x1204b4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120288u, 0x1204B0u, 0x1204B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204B8u;
label_1204b8:
    // 0x1204b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1204b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1204bc: 0xc0480a2  jal         func_120288
    ctx->pc = 0x1204BCu;
    SET_GPR_U32(ctx, 31, 0x1204C4u);
    ctx->pc = 0x1204C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204BCu;
    // 0x1204c0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120288u, 0x1204BCu, 0x1204C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204C4u;
label_1204c4:
    // 0x1204c4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1204c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1204c8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1204c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1204cc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1204ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1204d0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1204d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1204d4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1204d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1204d8: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1204d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1204dc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1204dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1204e0: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1204e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1204e4: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1204e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1204e8: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1204e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1204ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1204ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1204F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204ECu;
        // 0x1204f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204F4u;
}
