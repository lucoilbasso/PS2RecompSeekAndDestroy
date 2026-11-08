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

// Function: DrawFunc__6WcPolyP8WcEntity
// Address: 0x18f928 - 0x1901b4
void DrawFunc__6WcPolyP8WcEntity_0x18f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__6WcPolyP8WcEntity_0x18f928");
#endif

    switch (ctx->pc) {
        case 0x18f9acu: goto label_18f9ac;
        case 0x18f9b4u: goto label_18f9b4;
        case 0x18faf4u: goto label_18faf4;
        case 0x18fb8cu: goto label_18fb8c;
        case 0x18fb94u: goto label_18fb94;
        case 0x18fc40u: goto label_18fc40;
        case 0x18fc7cu: goto label_18fc7c;
        case 0x18fcb0u: goto label_18fcb0;
        case 0x18fcb8u: goto label_18fcb8;
        case 0x18fcdcu: goto label_18fcdc;
        case 0x18ff18u: goto label_18ff18;
        case 0x19007cu: goto label_19007c;
        case 0x190088u: goto label_190088;
        case 0x1900a8u: goto label_1900a8;
        case 0x1900b0u: goto label_1900b0;
        case 0x1900d8u: goto label_1900d8;
        case 0x190128u: goto label_190128;
        case 0x190150u: goto label_190150;
        case 0x190158u: goto label_190158;
        case 0x190168u: goto label_190168;
        default: break;
    }

    ctx->pc = 0x18f928u;

    // 0x18f928: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x18f92c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x18f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x18f930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f934: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x18f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x18f938: 0x26260150  addiu       $a2, $s1, 0x150
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18f93c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x18f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x18f940: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x18f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x18f944: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x18f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x18f948: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x18f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x18f94c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x18f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x18f950: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x18f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x18f954: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x18f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x18f958: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x18f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x18f95c: 0x94c50008  lhu         $a1, 0x8($a2)
    ctx->pc = 0x18f95cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x18f960: 0x96220158  lhu         $v0, 0x158($s1)
    ctx->pc = 0x18f960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x18f964: 0xafb100f4  sw          $s1, 0xF4($sp)
    ctx->pc = 0x18f964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 17));
    // 0x18f968: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18f96c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x18f96cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f970: 0x30a60100  andi        $a2, $a1, 0x100
    ctx->pc = 0x18f970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x18f974: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x18f974u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f978: 0x30a50800  andi        $a1, $a1, 0x800
    ctx->pc = 0x18f978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x18f97c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x18f97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x18f980: 0x5982b  sltu        $s3, $zero, $a1
    ctx->pc = 0x18f980u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x18f984: 0x3f02b  sltu        $fp, $zero, $v1
    ctx->pc = 0x18f984u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18f988: 0x12800079  beqz        $s4, . + 4 + (0x79 << 2)
    ctx->pc = 0x18F988u;
    {
        const bool branch_taken_0x18f988 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F988u;
        // 0x18f98c: 0x6b82b  sltu        $s7, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f988) {
            ctx->pc = 0x18FB70u;
            goto label_18fb70;
        }
    }
    ctx->pc = 0x18F990u;
    // 0x18f990: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x18f990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18f994: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x18f994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18f998: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18f99c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F99Cu;
    {
        const bool branch_taken_0x18f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f99c) {
            ctx->pc = 0x18F9ACu;
            goto label_18f9ac;
        }
    }
    ctx->pc = 0x18F9A4u;
    // 0x18f9a4: 0xc061920  jal         func_186480
    ctx->pc = 0x18F9A4u;
    SET_GPR_U32(ctx, 31, 0x18F9ACu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18F9A4u, 0x18F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9ACu;
label_18f9ac:
    // 0x18f9ac: 0xc061422  jal         func_185088
    ctx->pc = 0x18F9ACu;
    SET_GPR_U32(ctx, 31, 0x18F9B4u);
    ctx->pc = 0x18F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9ACu;
    // 0x18f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18F9ACu, 0x18F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9B4u;
label_18f9b4:
    // 0x18f9b4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x18f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x18f9b8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18f9bc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x18f9bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9c0: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x18f9c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18f9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18f9c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18f9c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x18f9cc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x18f9ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x18f9d0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18f9d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x18f9d4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18f9d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x18f9d8: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x18f9d8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f9dc: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x18f9dcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18f9e0: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x18f9e0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18f9e4: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x18f9e4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f9e8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18f9e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f9ec: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18f9ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f9f0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18f9f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f9f4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18f9f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18f9f8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x18f9f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18f9fc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x18f9fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa00: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x18fa00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa04: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x18fa04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18fa08: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18fa08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa0c: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x18fa0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa10: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x18fa10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa14: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18fa14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18fa18: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x18fa18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa1c: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x18fa1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa20: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x18fa20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa24: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18fa24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18fa28: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x18fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18fa2c: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x18fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x18fa30: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x18fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18fa34: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x18fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x18fa38: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18fa3c: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x18fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x18fa40: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18fa40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x18fa44: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18fa44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x18fa48: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18fa48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x18fa4c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18fa4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x18fa50: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x18fa50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fa54: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x18fa54u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18fa58: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x18fa58u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18fa5c: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x18fa5cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18fa60: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18fa60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa64: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18fa64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa68: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18fa68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa6c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18fa6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fa70: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x18fa70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa74: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x18fa74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa78: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x18fa78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa7c: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x18fa7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18fa80: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18fa80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa84: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x18fa84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa88: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x18fa88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa8c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18fa8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18fa90: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x18fa90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa94: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x18fa94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa98: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x18fa98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fa9c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18fa9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18faa0: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x18faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18faa4: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x18faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x18faa8: 0xf8ce0020  sqc2        $vf14, 0x20($a2)
    ctx->pc = 0x18faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18faac: 0xf8cf0030  sqc2        $vf15, 0x30($a2)
    ctx->pc = 0x18faacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x18fab0: 0x9628015a  lhu         $t0, 0x15A($s1)
    ctx->pc = 0x18fab0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x18fab4: 0x8e270174  lw          $a3, 0x174($s1)
    ctx->pc = 0x18fab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x18fab8: 0x8e250168  lw          $a1, 0x168($s1)
    ctx->pc = 0x18fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x18fabc: 0x8e2401d8  lw          $a0, 0x1D8($s1)
    ctx->pc = 0x18fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x18fac0: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x18fac0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18fac4: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x18fac4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x18fac8: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x18fac8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x18facc: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x18faccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x18fad0: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x18fad0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18fad4: 0xd8d50010  lqc2        $vf21, 0x10($a2)
    ctx->pc = 0x18fad4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18fad8: 0xd8d60020  lqc2        $vf22, 0x20($a2)
    ctx->pc = 0x18fad8u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x18fadc: 0xd8d70030  lqc2        $vf23, 0x30($a2)
    ctx->pc = 0x18fadcu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x18fae0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x18fae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fae4: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x18fae4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fae8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x18fae8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18faec: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x18faecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18faf0: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x18faf0u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
label_18faf4:
    // 0x18faf4: 0xd9a80000  lqc2        $vf8, 0x0($t5)
    ctx->pc = 0x18faf4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18faf8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18faf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fafc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18fafcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fb00: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18fb00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fb04: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18fb04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fb08: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x18fb08u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18fb0c: 0x4a2c033c  vmove.w     $vf12, $vf0
    ctx->pc = 0x18fb0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18fb10: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x18fb10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fb14: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x18fb14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fb18: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x18fb18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fb1c: 0x4be8bb4b  vmaddw.xyzw $vf13, $vf23, $vf8w
    ctx->pc = 0x18fb1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18fb20: 0x4a0003bf  vwaitq
    ctx->pc = 0x18fb20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18fb24: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x18fb24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fb28: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18fb28u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x18fb2c: 0x4bcc617d  vftoi4.xyz  $vf12, $vf12
    ctx->pc = 0x18fb2cu;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fb30: 0x4a0002ff  vnop
    ctx->pc = 0x18fb30u;
    // NOP operation, no action needed for VU0
    // 0x18fb34: 0x4a0002ff  vnop
    ctx->pc = 0x18fb34u;
    // NOP operation, no action needed for VU0
    // 0x18fb38: 0x4a0002ff  vnop
    ctx->pc = 0x18fb38u;
    // NOP operation, no action needed for VU0
    // 0x18fb3c: 0xf98c0000  sqc2        $vf12, 0x0($t4)
    ctx->pc = 0x18fb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18fb40: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x18fb40u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x18fb44: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x18fb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x18fb48: 0xa1c30000  sb          $v1, 0x0($t6)
    ctx->pc = 0x18fb48u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18fb4c: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x18fb4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x18fb50: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x18fb50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x18fb54: 0x21ce0001  addi        $t6, $t6, 0x1
    ctx->pc = 0x18fb54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x18fb58: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x18fb58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x18fb5c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x18FB5Cu;
    {
        const bool branch_taken_0x18fb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fb5c) {
            ctx->pc = 0x18FAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18faf4;
        }
    }
    ctx->pc = 0x18FB64u;
    // 0x18fb64: 0x0  nop
    ctx->pc = 0x18fb64u;
    // NOP
    // 0x18fb68: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18FB68u;
    {
        const bool branch_taken_0x18fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB68u;
        // 0x18fb6c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb68) {
            ctx->pc = 0x18FC7Cu;
            goto label_18fc7c;
        }
    }
    ctx->pc = 0x18FB70u;
label_18fb70:
    // 0x18fb70: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18fb74: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x18fb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18fb78: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18fb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18fb7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FB7Cu;
    {
        const bool branch_taken_0x18fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb7c) {
            ctx->pc = 0x18FB8Cu;
            goto label_18fb8c;
        }
    }
    ctx->pc = 0x18FB84u;
    // 0x18fb84: 0xc061920  jal         func_186480
    ctx->pc = 0x18FB84u;
    SET_GPR_U32(ctx, 31, 0x18FB8Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18FB84u, 0x18FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB8Cu;
label_18fb8c:
    // 0x18fb8c: 0xc061422  jal         func_185088
    ctx->pc = 0x18FB8Cu;
    SET_GPR_U32(ctx, 31, 0x18FB94u);
    ctx->pc = 0x18FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB8Cu;
    // 0x18fb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18FB8Cu, 0x18FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB94u;
label_18fb94:
    // 0x18fb94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18fb98: 0x2463e750  addiu       $v1, $v1, -0x18B0
    ctx->pc = 0x18fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960976));
    // 0x18fb9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18fba0: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x18fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x18fba4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18fba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21E750u));
    // 0x18fba8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x18fba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21E760u));
    // 0x18fbac: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18fbacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21E770u));
    // 0x18fbb0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18fbb0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21E780u));
    // 0x18fbb4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x18fbb4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fbb8: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x18fbb8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18fbbc: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x18fbbcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18fbc0: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x18fbc0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18fbc4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18fbc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbc8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18fbc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbcc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18fbccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbd0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18fbd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fbd4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x18fbd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbd8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x18fbd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbdc: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x18fbdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbe0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x18fbe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18fbe4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18fbe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbe8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x18fbe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbec: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x18fbecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbf0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18fbf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18fbf4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x18fbf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbf8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x18fbf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fbfc: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x18fbfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fc00: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18fc00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18fc04: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18fc04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18fc08: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x18fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x18fc0c: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x18fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18fc10: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x18fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x18fc14: 0x9626015a  lhu         $a2, 0x15A($s1)
    ctx->pc = 0x18fc14u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x18fc18: 0x8e250174  lw          $a1, 0x174($s1)
    ctx->pc = 0x18fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x18fc1c: 0x8e230168  lw          $v1, 0x168($s1)
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x18fc20: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x18fc20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fc24: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x18fc24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18fc28: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x18fc28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18fc2c: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x18fc2cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18fc30: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x18fc30u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fc34: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18fc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc38: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18fc38u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc3c: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x18fc3cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18fc40:
    // 0x18fc40: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18fc40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fc44: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18fc44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fc48: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18fc48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18fc4c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18fc4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fc50: 0xd9a80010  lqc2        $vf8, 0x10($t5)
    ctx->pc = 0x18fc50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x18fc54: 0x4a2c033c  vmove.w     $vf12, $vf0
    ctx->pc = 0x18fc54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18fc58: 0x4bcc617d  vftoi4.xyz  $vf12, $vf12
    ctx->pc = 0x18fc58u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18fc5c: 0xf98c0000  sqc2        $vf12, 0x0($t4)
    ctx->pc = 0x18fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18fc60: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x18fc60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x18fc64: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x18fc64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x18fc68: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x18fc68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x18fc6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18FC6Cu;
    {
        const bool branch_taken_0x18fc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc6c) {
            ctx->pc = 0x18FC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fc40;
        }
    }
    ctx->pc = 0x18FC74u;
    // 0x18fc74: 0x0  nop
    ctx->pc = 0x18fc74u;
    // NOP
    // 0x18fc78: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_18fc7c:
    // 0x18fc7c: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x18fc7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x18fc80: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x18fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x18fc84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FC84u;
    {
        const bool branch_taken_0x18fc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC84u;
        // 0x18fc88: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc84) {
            ctx->pc = 0x18FCA8u;
            goto label_18fca8;
        }
    }
    ctx->pc = 0x18FC8Cu;
    // 0x18fc8c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x18fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18fc90: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fc94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18fc98: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18fc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18fc9c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x18fc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18fca0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18FCA0u;
    {
        const bool branch_taken_0x18fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCA0u;
        // 0x18fca4: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fca0) {
            ctx->pc = 0x18FCDCu;
            goto label_18fcdc;
        }
    }
    ctx->pc = 0x18FCA8u;
label_18fca8:
    // 0x18fca8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18FCA8u;
    SET_GPR_U32(ctx, 31, 0x18FCB0u);
    ctx->pc = 0x18FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCA8u;
    // 0x18fcac: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18FCA8u, 0x18FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCB0u;
label_18fcb0:
    // 0x18fcb0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18FCB0u;
    SET_GPR_U32(ctx, 31, 0x18FCB8u);
    ctx->pc = 0x18FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCB0u;
    // 0x18fcb4: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18FCB0u, 0x18FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCB8u;
label_18fcb8:
    // 0x18fcb8: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x18fcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x18fcbc: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x18fcc0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18fcc4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18fcc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fccc: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x18fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x18fcd0: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x18fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x18fcd4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18FCD4u;
    SET_GPR_U32(ctx, 31, 0x18FCDCu);
    ctx->pc = 0x18FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCD4u;
    // 0x18fcd8: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18FCD4u, 0x18FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCDCu;
label_18fcdc:
    // 0x18fcdc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x18fcdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fce0: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fce4: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18fce8: 0x240d04e2  addiu       $t5, $zero, 0x4E2
    ctx->pc = 0x18fce8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x18fcec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18fcf0: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18fcf4: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x18fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
    // 0x18fcf8: 0x73680a  movz        $t5, $v1, $s3
    ctx->pc = 0x18fcf8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x18fcfc: 0xaea80008  sw          $t0, 0x8($s5)
    ctx->pc = 0x18fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 8));
    // 0x18fd00: 0x53600a  movz        $t4, $v0, $s3
    ctx->pc = 0x18fd00u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
    // 0x18fd04: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x18fd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x18fd08: 0xde270178  ld          $a3, 0x178($s1)
    ctx->pc = 0x18fd08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x18fd0c: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FD0Cu;
    {
        const bool branch_taken_0x18fd0c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD0Cu;
        // 0x18fd10: 0x92300158  lbu         $s0, 0x158($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd0c) {
            ctx->pc = 0x18FD1Cu;
            goto label_18fd1c;
        }
    }
    ctx->pc = 0x18FD14u;
    // 0x18fd14: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18fd18: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18fd18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_18fd1c:
    // 0x18fd1c: 0x262a0150  addiu       $t2, $s1, 0x150
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18fd20: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x18fd20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18fd24: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x18fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x18fd28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD28u;
    {
        const bool branch_taken_0x18fd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD28u;
        // 0x18fd2c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd28) {
            ctx->pc = 0x18FD3Cu;
            goto label_18fd3c;
        }
    }
    ctx->pc = 0x18FD30u;
    // 0x18fd30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x18fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18fd34: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18fd34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18fd38: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x18fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_18fd3c:
    // 0x18fd3c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x18fd3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18FD40u;
    {
        const bool branch_taken_0x18fd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD40u;
        // 0x18fd44: 0x25090020  addiu       $t1, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd40) {
            ctx->pc = 0x18FD88u;
            goto label_18fd88;
        }
    }
    ctx->pc = 0x18FD48u;
    // 0x18fd48: 0x91420007  lbu         $v0, 0x7($t2)
    ctx->pc = 0x18fd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x18fd4c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x18fd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18fd50: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x18fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18fd54: 0x25030030  addiu       $v1, $t0, 0x30
    ctx->pc = 0x18fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x18fd58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fd5c: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x18fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x18fd60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18fd64: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x18fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18fd68: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x18fd68u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x18fd6c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x18fd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x18fd70: 0x91440003  lbu         $a0, 0x3($t2)
    ctx->pc = 0x18fd70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x18fd74: 0x91420002  lbu         $v0, 0x2($t2)
    ctx->pc = 0x18fd74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x18fd78: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18fd7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18fd80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FD80u;
    {
        const bool branch_taken_0x18fd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD80u;
        // 0x18fd84: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd80) {
            ctx->pc = 0x18FDB8u;
            goto label_18fdb8;
        }
    }
    ctx->pc = 0x18FD88u;
label_18fd88:
    // 0x18fd88: 0x25050030  addiu       $a1, $t0, 0x30
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x18fd8c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x18fd90: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18fd94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18fd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18fd98: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x18fd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x18fd9c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x18fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18fda0: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18fda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18fda4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18fda8: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x18fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x18fdac: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x18fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x18fdb0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x18fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x18fdb4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_18fdb8:
    // 0x18fdb8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FDB8u;
    {
        const bool branch_taken_0x18fdb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDB8u;
        // 0x18fdbc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdb8) {
            ctx->pc = 0x18FDE0u;
            goto label_18fde0;
        }
    }
    ctx->pc = 0x18FDC0u;
    // 0x18fdc0: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FDC0u;
    {
        const bool branch_taken_0x18fdc0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC0u;
        // 0x18fdc4: 0xdf848c90  ld          $a0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdc0) {
            ctx->pc = 0x18FDE4u;
            goto label_18fde4;
        }
    }
    ctx->pc = 0x18FDC8u;
    // 0x18fdc8: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x18fdc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x18fdcc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fdd0: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x18fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x18fdd4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fdd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FDD8u;
    {
        const bool branch_taken_0x18fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDD8u;
        // 0x18fddc: 0xfd030000  sd          $v1, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdd8) {
            ctx->pc = 0x18FDF8u;
            goto label_18fdf8;
        }
    }
    ctx->pc = 0x18FDE0u;
label_18fde0:
    // 0x18fde0: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x18fde0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_18fde4:
    // 0x18fde4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x18fde4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fde8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fdec: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fdecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fdf0: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x18fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x18fdf4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x18fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_18fdf8:
    // 0x18fdf8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FDF8u;
    {
        const bool branch_taken_0x18fdf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDF8u;
        // 0x18fdfc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdf8) {
            ctx->pc = 0x18FE10u;
            goto label_18fe10;
        }
    }
    ctx->pc = 0x18FE00u;
    // 0x18fe00: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x18fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x18fe04: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x18fe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x18fe08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FE08u;
    {
        const bool branch_taken_0x18fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE08u;
        // 0x18fe0c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe08) {
            ctx->pc = 0x18FE1Cu;
            goto label_18fe1c;
        }
    }
    ctx->pc = 0x18FE10u;
label_18fe10:
    // 0x18fe10: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fe14: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x18fe18: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
label_18fe1c:
    // 0x18fe1c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x18fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18fe20: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x18fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x18fe24: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x18FE24u;
    {
        const bool branch_taken_0x18fe24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE24u;
        // 0x18fe28: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe24) {
            ctx->pc = 0x18FE68u;
            goto label_18fe68;
        }
    }
    ctx->pc = 0x18FE2Cu;
    // 0x18fe2c: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x18fe2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x18fe30: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18fe34: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x18fe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe38: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fe3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x18fe40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18fe44: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x18fe44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x18fe48: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x18fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x18fe4c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x18fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x18fe50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18fe54: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x18fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe58: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fe58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fe5c: 0xde220160  ld          $v0, 0x160($s1)
    ctx->pc = 0x18fe5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x18fe60: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x18fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x18fe64: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x18fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_18fe68:
    // 0x18fe68: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x18fe6c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x18fe6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18fe70: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x18fe70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x18fe74: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18fe78: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18fe7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18fe80: 0xfd630008  sd          $v1, 0x8($t3)
    ctx->pc = 0x18fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 3));
    // 0x18fe84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18fe88: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x18fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe8c: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x18fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x18fe90: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x18fe90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18fe94: 0xc373c  dsll32      $a2, $t4, 28
    ctx->pc = 0x18fe94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 28));
    // 0x18fe98: 0x73bfc  dsll32      $a3, $a3, 15
    ctx->pc = 0x18fe98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 15));
    // 0x18fe9c: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x18fe9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x18fea0: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x18fea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18fea4: 0x847f8  dsll        $t0, $t0, 31
    ctx->pc = 0x18fea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 31);
    // 0x18fea8: 0x8faa00f4  lw          $t2, 0xF4($sp)
    ctx->pc = 0x18fea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x18feac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x18feacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18feb0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18feb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18feb4: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x18feb8: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x18febc: 0x8ed6ee58  lw          $s6, -0x11A8($s6)
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962776)));
    // 0x18fec0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18fec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18fec4: 0x8e260174  lw          $a2, 0x174($s1)
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x18fec8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18fecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18feccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fed0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x18fed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x18fed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18fed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fed8: 0x8d4c01d8  lw          $t4, 0x1D8($t2)
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 472)));
    // 0x18fedc: 0x8e2b016c  lw          $t3, 0x16C($s1)
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x18fee0: 0x8e2a0170  lw          $t2, 0x170($s1)
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x18fee4: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x18fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x18fee8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x18fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x18feec: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x18feecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x18fef0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x18FEF0u;
    {
        const bool branch_taken_0x18fef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEF0u;
        // 0x18fef4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fef0) {
            ctx->pc = 0x190020u;
            goto label_190020;
        }
    }
    ctx->pc = 0x18FEF8u;
    // 0x18fef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18fefc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18fefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ff00: 0x262f0150  addiu       $t7, $s1, 0x150
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18ff04: 0x27b900c0  addiu       $t9, $sp, 0xC0
    ctx->pc = 0x18ff04u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18ff08: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x18ff08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ff0c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x18ff0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18ff10: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x18ff10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ff14: 0x0  nop
    ctx->pc = 0x18ff14u;
    // NOP
label_18ff18:
    // 0x18ff18: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x18FF18u;
    {
        const bool branch_taken_0x18ff18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0xc4c2000c  lwc1        $f2, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff18) {
            ctx->pc = 0x18FF54u;
            goto label_18ff54;
        }
    }
    ctx->pc = 0x18FF20u;
    // 0x18ff20: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x18ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ff24: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x18ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x18ff28: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x18ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff2c: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x18ff2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x18ff30: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x18ff30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x18ff34: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FF34u;
    {
        const bool branch_taken_0x18ff34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF34u;
        // 0x18ff38: 0xad20000c  sw          $zero, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff34) {
            ctx->pc = 0x18FF50u;
            goto label_18ff50;
        }
    }
    ctx->pc = 0x18FF3Cu;
    // 0x18ff3c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x18ff3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18ff40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x18ff40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ff44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18ff44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18ff48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18ff48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ff4c: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x18ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18ff50:
    // 0x18ff50: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_18ff54:
    // 0x18ff54: 0x52e00011  beql        $s7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18FF54u;
    {
        const bool branch_taken_0x18ff54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff54) {
            ctx->pc = 0x18FF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FF54u;
            // 0x18ff58: 0x8d630000  lw          $v1, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FF9Cu;
            goto label_18ff9c;
        }
    }
    ctx->pc = 0x18FF5Cu;
    // 0x18ff5c: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x18FF5Cu;
    {
        const bool branch_taken_0x18ff5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF5Cu;
        // 0x18ff60: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff5c) {
            ctx->pc = 0x18FF98u;
            goto label_18ff98;
        }
    }
    ctx->pc = 0x18FF64u;
    // 0x18ff64: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x18ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18ff68: 0x91e50007  lbu         $a1, 0x7($t7)
    ctx->pc = 0x18ff68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 7)));
    // 0x18ff6c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18ff6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18ff70: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x18ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x18ff74: 0x93a200c3  lbu         $v0, 0xC3($sp)
    ctx->pc = 0x18ff74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x18ff78: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x18ff78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ff7c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x18ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x18ff80: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x18ff80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ff84: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x18ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x18ff88: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x18ff88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18ff8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18ff90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FF90u;
    {
        const bool branch_taken_0x18ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF90u;
        // 0x18ff94: 0xfc8e0008  sd          $t6, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff90) {
            ctx->pc = 0x18FFB0u;
            goto label_18ffb0;
        }
    }
    ctx->pc = 0x18FF98u;
label_18ff98:
    // 0x18ff98: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x18ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_18ff9c:
    // 0x18ff9c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x18ff9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffa0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18ffa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18ffa4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18ffa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18ffa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18ffac: 0xfc4e0008  sd          $t6, 0x8($v0)
    ctx->pc = 0x18ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 14));
label_18ffb0:
    // 0x18ffb0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x18ffb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ffb4: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x18ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x18ffb8: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x18FFB8u;
    {
        const bool branch_taken_0x18ffb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFB8u;
        // 0x18ffbc: 0xad20000c  sw          $zero, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffb8) {
            ctx->pc = 0x18FFF4u;
            goto label_18fff4;
        }
    }
    ctx->pc = 0x18FFC0u;
    // 0x18ffc0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x18ffc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x18ffc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FFC4u;
    {
        const bool branch_taken_0x18ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFC4u;
        // 0x18ffc8: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffc4) {
            ctx->pc = 0x18FFE8u;
            goto label_18ffe8;
        }
    }
    ctx->pc = 0x18FFCCu;
    // 0x18ffcc: 0xad2d000c  sw          $t5, 0xC($t1)
    ctx->pc = 0x18ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 13));
    // 0x18ffd0: 0x16180008  bne         $s0, $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FFD0u;
    {
        const bool branch_taken_0x18ffd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 24));
        ctx->pc = 0x18FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFD0u;
        // 0x18ffd4: 0x34e70001  ori         $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffd0) {
            ctx->pc = 0x18FFF4u;
            goto label_18fff4;
        }
    }
    ctx->pc = 0x18FFD8u;
    // 0x18ffd8: 0x55000007  bnel        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FFD8u;
    {
        const bool branch_taken_0x18ffd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ffd8) {
            ctx->pc = 0x18FFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FFD8u;
            // 0x18ffdc: 0x9622015a  lhu         $v0, 0x15A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FFF8u;
            goto label_18fff8;
        }
    }
    ctx->pc = 0x18FFE0u;
    // 0x18ffe0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x18FFE0u;
    {
        const bool branch_taken_0x18ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFE0u;
        // 0x18ffe4: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffe0) {
            ctx->pc = 0x190118u;
            goto label_190118;
        }
    }
    ctx->pc = 0x18FFE8u;
label_18ffe8:
    // 0x18ffe8: 0xf61024  and         $v0, $a3, $s6
    ctx->pc = 0x18ffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 22));
    // 0x18ffec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18FFECu;
    {
        const bool branch_taken_0x18ffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ffec) {
            ctx->pc = 0x18FFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FFECu;
            // 0x18fff0: 0xad2d000c  sw          $t5, 0xC($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FFF4u;
            goto label_18fff4;
        }
    }
    ctx->pc = 0x18FFF4u;
label_18fff4:
    // 0x18fff4: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x18fff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
label_18fff8:
    // 0x18fff8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18fff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18fffc: 0x25630004  addiu       $v1, $t3, 0x4
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x190000: 0x25440008  addiu       $a0, $t2, 0x8
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x190004: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x190004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190008: 0x77580b  movn        $t3, $v1, $s7
    ctx->pc = 0x190008u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x19000c: 0x93500b  movn        $t2, $a0, $s3
    ctx->pc = 0x19000cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x190010: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x190014: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x190014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x190018: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x190018u;
    {
        const bool branch_taken_0x190018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190018u;
        // 0x19001c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190018) {
            ctx->pc = 0x18FF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ff18;
        }
    }
    ctx->pc = 0x190020u;
label_190020:
    // 0x190020: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x190020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190024: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x190028: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19002c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x190030: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x190034: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x190034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x190038: 0x1251823  subu        $v1, $t1, $a1
    ctx->pc = 0x190038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x19003c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x19003cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190040: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x190040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x190044: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x190044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x190048: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x190048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x19004c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x19004cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190050: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x190050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x190054: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x190054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x190058: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x190058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19005c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190060: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x190060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x190064: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x190064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190068: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19006c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x19006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x190070: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x190070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x190074: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190074u;
    SET_GPR_U32(ctx, 31, 0x19007Cu);
    ctx->pc = 0x190078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190074u;
    // 0x190078: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190074u, 0x19007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19007Cu;
label_19007c:
    // 0x19007c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x190080: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x190080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x190084: 0x0  nop
    ctx->pc = 0x190084u;
    // NOP
label_190088:
    // 0x190088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19008c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190090: 0x0  nop
    ctx->pc = 0x190090u;
    // NOP
    // 0x190094: 0x0  nop
    ctx->pc = 0x190094u;
    // NOP
    // 0x190098: 0x0  nop
    ctx->pc = 0x190098u;
    // NOP
    // 0x19009c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19009Cu;
    {
        const bool branch_taken_0x19009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19009c) {
            ctx->pc = 0x190088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190088;
        }
    }
    ctx->pc = 0x1900A4u;
    // 0x1900a4: 0x0  nop
    ctx->pc = 0x1900a4u;
    // NOP
label_1900a8:
    // 0x1900a8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1900A8u;
    SET_GPR_U32(ctx, 31, 0x1900B0u);
    ctx->pc = 0x1900ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900A8u;
    // 0x1900ac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1900A8u, 0x1900B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900B0u;
label_1900b0:
    // 0x1900b0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1900b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1900b4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1900B4u;
    {
        const bool branch_taken_0x1900b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1900B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900B4u;
        // 0x1900b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900b4) {
            ctx->pc = 0x1900A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1900a8;
        }
    }
    ctx->pc = 0x1900BCu;
    // 0x1900bc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1900bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1900c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1900c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1900c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1900C4u;
    {
        const bool branch_taken_0x1900c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1900C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C4u;
        // 0x1900c8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900c4) {
            ctx->pc = 0x1900D8u;
            goto label_1900d8;
        }
    }
    ctx->pc = 0x1900CCu;
    // 0x1900cc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1900ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1900d0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1900D0u;
    SET_GPR_U32(ctx, 31, 0x1900D8u);
    ctx->pc = 0x1900D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900D0u;
    // 0x1900d4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1900D0u, 0x1900D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900D8u;
label_1900d8:
    // 0x1900d8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1900d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1900dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1900dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1900e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1900e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1900e4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1900e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1900e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1900ec: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1900ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1900f0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1900f4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1900f8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1900f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1900fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1900fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190100: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x190100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x190104: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x190104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x190108: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x190108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x19010c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19010Cu;
    {
        const bool branch_taken_0x19010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19010Cu;
        // 0x190110: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19010c) {
            ctx->pc = 0x190184u;
            goto label_190184;
        }
    }
    ctx->pc = 0x190114u;
    // 0x190114: 0x0  nop
    ctx->pc = 0x190114u;
    // NOP
label_190118:
    // 0x190118: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190118u;
    {
        const bool branch_taken_0x190118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190118u;
        // 0x19011c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190118) {
            ctx->pc = 0x190160u;
            goto label_190160;
        }
    }
    ctx->pc = 0x190120u;
    // 0x190120: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190120u;
    SET_GPR_U32(ctx, 31, 0x190128u);
    ctx->pc = 0x190124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190120u;
    // 0x190124: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190120u, 0x190128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190128u;
label_190128:
    // 0x190128: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x19012c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x19012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x190130: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x190130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x190134: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x190134u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x190138: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x190138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x19013c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19013cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x190140: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x190140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x190144: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x190144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x190148: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190148u;
    SET_GPR_U32(ctx, 31, 0x190150u);
    ctx->pc = 0x19014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190148u;
    // 0x19014c: 0xae55008c  sw          $s5, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190148u, 0x190150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190150u;
label_190150:
    // 0x190150: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190150u;
    SET_GPR_U32(ctx, 31, 0x190158u);
    ctx->pc = 0x190154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190150u;
    // 0x190154: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190150u, 0x190158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190158u;
label_190158:
    // 0x190158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x190158u;
    {
        const bool branch_taken_0x190158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190158u;
        // 0x19015c: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190158) {
            ctx->pc = 0x190188u;
            goto label_190188;
        }
    }
    ctx->pc = 0x190160u;
label_190160:
    // 0x190160: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x190160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x190164: 0x0  nop
    ctx->pc = 0x190164u;
    // NOP
label_190168:
    // 0x190168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19016c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190170: 0x0  nop
    ctx->pc = 0x190170u;
    // NOP
    // 0x190174: 0x0  nop
    ctx->pc = 0x190174u;
    // NOP
    // 0x190178: 0x0  nop
    ctx->pc = 0x190178u;
    // NOP
    // 0x19017c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19017Cu;
    {
        const bool branch_taken_0x19017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19017c) {
            ctx->pc = 0x190168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190168;
        }
    }
    ctx->pc = 0x190184u;
label_190184:
    // 0x190184: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x190184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_190188:
    // 0x190188: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x190188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x19018c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x19018cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x190190: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x190190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x190194: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x190194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x190198: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x190198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x19019c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x19019cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1901a0: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1901a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1901a4: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1901a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1901a8: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x1901a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1901ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1901ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901ACu;
        // 0x1901b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901B4u;
}
