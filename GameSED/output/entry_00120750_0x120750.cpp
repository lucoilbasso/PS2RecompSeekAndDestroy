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

// Function: entry_00120750
// Address: 0x120750 - 0x120838
void entry_00120750_0x120750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120750_0x120750");
#endif

    switch (ctx->pc) {
        case 0x12075cu: goto label_12075c;
        case 0x1207a0u: goto label_1207a0;
        default: break;
    }

    ctx->pc = 0x120750u;

label_120750:
    // 0x120750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120754: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x120754u;
    SET_GPR_U32(ctx, 31, 0x12075Cu);
    ctx->pc = 0x120758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120754u;
    // 0x120758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x120754u, 0x12075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12075Cu;
label_12075c:
    // 0x12075c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x120760: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120764: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x120768: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x120768u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12076c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x12076cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120770: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x120770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x120774: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x120774u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x120778: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x120778u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x12077c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12077cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120780: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x120780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120784: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120788: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x120788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12078c: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x12078cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x120790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120794: 0x142823  negu        $a1, $s4
    ctx->pc = 0x120794u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x120798: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x120798u;
    SET_GPR_U32(ctx, 31, 0x1207A0u);
    ctx->pc = 0x12079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120798u;
    // 0x12079c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x120798u, 0x1207A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207A0u;
label_1207a0:
    // 0x1207a0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1207a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1207a4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1207a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1207a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1207ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1207acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1207b0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1207b4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1207b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1207b8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1207b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1207bc: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x1207bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1207c0: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x1207c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1207c4: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x1207c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1207c8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1207c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1207cc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1207ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1207d0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1207d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1207d4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1207d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1207d8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1207d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1207dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1207e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1207e4: 0x2e420015  sltiu       $v0, $s2, 0x15
    ctx->pc = 0x1207e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1207e8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1207E8u;
    {
        const bool branch_taken_0x1207e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207E8u;
        // 0x1207ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207e8) {
            ctx->pc = 0x120750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120750;
        }
    }
    ctx->pc = 0x1207F0u;
    // 0x1207f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1207f4: 0x26d60150  addiu       $s6, $s6, 0x150
    ctx->pc = 0x1207f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
    // 0x1207f8: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x1207f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1207fc: 0x27de0150  addiu       $fp, $fp, 0x150
    ctx->pc = 0x1207fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x120800: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x120800u;
    {
        const bool branch_taken_0x120800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120800u;
        // 0x120804: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120800) {
            ctx->pc = 0x120740u;
            return;
        }
    }
    ctx->pc = 0x120808u;
    // 0x120808: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x120808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12080c: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x12080cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x120810: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x120810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x120814: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x120814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x120818: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x120818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12081c: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x12081cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x120820: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x120820u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x120824: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x120824u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x120828: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x120828u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x12082c: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x12082cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x120830: 0x3e00008  jr          $ra
    ctx->pc = 0x120830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120830u;
        // 0x120834: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120838u;
}
