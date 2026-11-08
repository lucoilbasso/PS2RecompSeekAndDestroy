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

// Function: GeneretorCompuleMove__20ST_ParticleGeneratorP9FVector32
// Address: 0x130c20 - 0x130f74
void GeneretorCompuleMove__20ST_ParticleGeneratorP9FVector32_0x130c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneretorCompuleMove__20ST_ParticleGeneratorP9FVector32_0x130c20");
#endif

    switch (ctx->pc) {
        case 0x130c44u: goto label_130c44;
        case 0x130cb0u: goto label_130cb0;
        case 0x130d18u: goto label_130d18;
        case 0x130d88u: goto label_130d88;
        case 0x130d9cu: goto label_130d9c;
        case 0x130df8u: goto label_130df8;
        case 0x130e0cu: goto label_130e0c;
        case 0x130e70u: goto label_130e70;
        case 0x130ec0u: goto label_130ec0;
        case 0x130f20u: goto label_130f20;
        default: break;
    }

    ctx->pc = 0x130c20u;

    // 0x130c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130c30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x130c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130c38: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x130c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x130c3c: 0xc04844a  jal         func_121128
    ctx->pc = 0x130C3Cu;
    SET_GPR_U32(ctx, 31, 0x130C44u);
    ctx->pc = 0x130C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C3Cu;
    // 0x130c40: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130C3Cu, 0x130C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C44u;
label_130c44:
    // 0x130c44: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x130C44u;
    {
        const bool branch_taken_0x130c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c44) {
            ctx->pc = 0x130C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C44u;
            // 0x130c48: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D48u;
            goto label_130d48;
        }
    }
    ctx->pc = 0x130C4Cu;
    // 0x130c4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x130c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c54: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x130C54u;
    {
        const bool branch_taken_0x130c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x130C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C54u;
        // 0x130c58: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c54) {
            ctx->pc = 0x130D48u;
            goto label_130d48;
        }
    }
    ctx->pc = 0x130C5Cu;
    // 0x130c5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130C5Cu;
    {
        const bool branch_taken_0x130c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130c5c) {
            ctx->pc = 0x130C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C5Cu;
            // 0x130c60: 0x8e04013c  lw          $a0, 0x13C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130C78u;
            goto label_130c78;
        }
    }
    ctx->pc = 0x130C64u;
    // 0x130c64: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x130c64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130c68: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x130c68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130c6c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130c70: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x130c70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130c74: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x130c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_130c78:
    // 0x130c78: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x130C78u;
    {
        const bool branch_taken_0x130c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C78u;
        // 0x130c7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c78) {
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130C80u;
    // 0x130c80: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x130c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x130c84: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130c88: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x130C88u;
    {
        const bool branch_taken_0x130c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x130C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C88u;
        // 0x130c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c88) {
            ctx->pc = 0x130CF8u;
            goto label_130cf8;
        }
    }
    ctx->pc = 0x130C90u;
    // 0x130c90: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x130c94: 0x508000b4  beql        $a0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x130C94u;
    {
        const bool branch_taken_0x130c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c94) {
            ctx->pc = 0x130C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C94u;
            // 0x130c98: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F68u;
            goto label_130f68;
        }
    }
    ctx->pc = 0x130C9Cu;
    // 0x130c9c: 0x8c820480  lw          $v0, 0x480($a0)
    ctx->pc = 0x130c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x130ca0: 0x184000b0  blez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x130CA0u;
    {
        const bool branch_taken_0x130ca0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x130CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA0u;
        // 0x130ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ca0) {
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130CA8u;
    // 0x130ca8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x130cac: 0x0  nop
    ctx->pc = 0x130cacu;
    // NOP
label_130cb0:
    // 0x130cb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x130cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130cb4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130cb8: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x130cb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130cbc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130cc0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130cc4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x130cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x130cc8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130ccc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x130cccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130cd0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130cd4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130cd8: 0x8c830480  lw          $v1, 0x480($a0)
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x130cdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x130cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x130ce0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x130ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x130ce4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x130CE4u;
    {
        const bool branch_taken_0x130ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CE4u;
        // 0x130ce8: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ce4) {
            ctx->pc = 0x130CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130cb0;
        }
    }
    ctx->pc = 0x130CECu;
    // 0x130cec: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x130CECu;
    {
        const bool branch_taken_0x130cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CECu;
        // 0x130cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cec) {
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130CF4u;
    // 0x130cf4: 0x0  nop
    ctx->pc = 0x130cf4u;
    // NOP
label_130cf8:
    // 0x130cf8: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x130cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x130cfc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x130d00: 0x14620098  bne         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x130D00u;
    {
        const bool branch_taken_0x130d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x130D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D00u;
        // 0x130d04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d00) {
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130D08u;
    // 0x130d08: 0x8c8401f8  lw          $a0, 0x1F8($a0)
    ctx->pc = 0x130d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x130d0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x130d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d10: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x130d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130d14: 0x0  nop
    ctx->pc = 0x130d14u;
    // NOP
label_130d18:
    // 0x130d18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130d1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130d20: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x130d20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130d24: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130d28: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130d28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130d2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130d30: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x130d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x130d34: 0x0  nop
    ctx->pc = 0x130d34u;
    // NOP
    // 0x130d38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130D38u;
    {
        const bool branch_taken_0x130d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D38u;
        // 0x130d3c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d38) {
            ctx->pc = 0x130D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130d18;
        }
    }
    ctx->pc = 0x130D40u;
    // 0x130d40: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x130D40u;
    {
        const bool branch_taken_0x130d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D40u;
        // 0x130d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d40) {
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130D48u;
label_130d48:
    // 0x130d48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130D48u;
    {
        const bool branch_taken_0x130d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130d48) {
            ctx->pc = 0x130D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130D48u;
            // 0x130d4c: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D64u;
            goto label_130d64;
        }
    }
    ctx->pc = 0x130D50u;
    // 0x130d50: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x130d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130d54: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x130d54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130d58: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130d5c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x130d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130d60: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_130d64:
    // 0x130d64: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x130D64u;
    {
        const bool branch_taken_0x130d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D64u;
        // 0x130d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d64) {
            ctx->pc = 0x130DD0u;
            goto label_130dd0;
        }
    }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x130d70: 0x5450007c  bnel        $v0, $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x130D70u;
    {
        const bool branch_taken_0x130d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130d70) {
            ctx->pc = 0x130D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130D70u;
            // 0x130d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130D78u;
    // 0x130d78: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x130d7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130d80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130D80u;
    {
        const bool branch_taken_0x130d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x130D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D80u;
        // 0x130d84: 0x24a40080  addiu       $a0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d80) {
            ctx->pc = 0x130D98u;
            goto label_130d98;
        }
    }
    ctx->pc = 0x130D88u;
label_130d88:
    // 0x130d88: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x130d88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130d8c: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x130d8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130d90: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130d94: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x130d94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_130d98:
    // 0x130d98: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x130d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_130d9c:
    // 0x130d9c: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x130D9Cu;
    {
        const bool branch_taken_0x130d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D9Cu;
        // 0x130da0: 0x24a40080  addiu       $a0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d9c) {
            ctx->pc = 0x130F60u;
            goto label_130f60;
        }
    }
    ctx->pc = 0x130DA4u;
    // 0x130da4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x130da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x130da8: 0x5450006e  bnel        $v0, $s0, . + 4 + (0x6E << 2)
    ctx->pc = 0x130DA8u;
    {
        const bool branch_taken_0x130da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130da8) {
            ctx->pc = 0x130DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130DA8u;
            // 0x130dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130DB0u;
    // 0x130db0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x130db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x130db4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130db8: 0x0  nop
    ctx->pc = 0x130db8u;
    // NOP
    // 0x130dbc: 0x0  nop
    ctx->pc = 0x130dbcu;
    // NOP
    // 0x130dc0: 0x5062fff6  beql        $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x130DC0u;
    {
        const bool branch_taken_0x130dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130dc0) {
            ctx->pc = 0x130DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130DC0u;
            // 0x130dc4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130d9c;
        }
    }
    ctx->pc = 0x130DC8u;
    // 0x130dc8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x130DC8u;
    {
        const bool branch_taken_0x130dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130dc8) {
            ctx->pc = 0x130D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130d88;
        }
    }
    ctx->pc = 0x130DD0u;
label_130dd0:
    // 0x130dd0: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x130dd4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x130DD4u;
    {
        const bool branch_taken_0x130dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DD4u;
        // 0x130dd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dd4) {
            ctx->pc = 0x130E40u;
            goto label_130e40;
        }
    }
    ctx->pc = 0x130DDCu;
    // 0x130ddc: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x130ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x130de0: 0x54500060  bnel        $v0, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x130DE0u;
    {
        const bool branch_taken_0x130de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130de0) {
            ctx->pc = 0x130DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130DE0u;
            // 0x130de4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130DE8u;
    // 0x130de8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x130de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x130dec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130df0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130DF0u;
    {
        const bool branch_taken_0x130df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x130DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DF0u;
        // 0x130df4: 0x24a40070  addiu       $a0, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130df0) {
            ctx->pc = 0x130E08u;
            goto label_130e08;
        }
    }
    ctx->pc = 0x130DF8u;
label_130df8:
    // 0x130df8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x130df8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130dfc: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x130dfcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130e00: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130e04: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x130e04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_130e08:
    // 0x130e08: 0x8ca500c4  lw          $a1, 0xC4($a1)
    ctx->pc = 0x130e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_130e0c:
    // 0x130e0c: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x130E0Cu;
    {
        const bool branch_taken_0x130e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E0Cu;
        // 0x130e10: 0x24a40070  addiu       $a0, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e0c) {
            ctx->pc = 0x130F60u;
            goto label_130f60;
        }
    }
    ctx->pc = 0x130E14u;
    // 0x130e14: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x130e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x130e18: 0x54500052  bnel        $v0, $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x130E18u;
    {
        const bool branch_taken_0x130e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130e18) {
            ctx->pc = 0x130E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E18u;
            // 0x130e1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130E20u;
    // 0x130e20: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x130e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x130e24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130e28: 0x0  nop
    ctx->pc = 0x130e28u;
    // NOP
    // 0x130e2c: 0x0  nop
    ctx->pc = 0x130e2cu;
    // NOP
    // 0x130e30: 0x5062fff6  beql        $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x130E30u;
    {
        const bool branch_taken_0x130e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130e30) {
            ctx->pc = 0x130E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E30u;
            // 0x130e34: 0x8ca500c4  lw          $a1, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130e0c;
        }
    }
    ctx->pc = 0x130E38u;
    // 0x130e38: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x130E38u;
    {
        const bool branch_taken_0x130e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e38) {
            ctx->pc = 0x130DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130df8;
        }
    }
    ctx->pc = 0x130E40u;
label_130e40:
    // 0x130e40: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x130e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x130e44: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x130E44u;
    {
        const bool branch_taken_0x130e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e44) {
            ctx->pc = 0x130E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E44u;
            // 0x130e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130E4Cu;
    // 0x130e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x130e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e50: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x130e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x130e54: 0x54500043  bnel        $v0, $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x130E54u;
    {
        const bool branch_taken_0x130e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130e54) {
            ctx->pc = 0x130E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E54u;
            // 0x130e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130E5Cu;
    // 0x130e5c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130e60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x130e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e64: 0x240b000b  addiu       $t3, $zero, 0xB
    ctx->pc = 0x130e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130e68: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x130e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x130e6c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x130e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_130e70:
    // 0x130e70: 0x504c0036  beql        $v0, $t4, . + 4 + (0x36 << 2)
    ctx->pc = 0x130E70u;
    {
        const bool branch_taken_0x130e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x130e70) {
            ctx->pc = 0x130E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E70u;
            // 0x130e74: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F4Cu;
            goto label_130f4c;
        }
    }
    ctx->pc = 0x130E78u;
    // 0x130e78: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x130e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x130e7c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130e80: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x130e80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x130e84: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130e88: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130e88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130e8c: 0x8cc30114  lw          $v1, 0x114($a2)
    ctx->pc = 0x130e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
    // 0x130e90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x130e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e94: 0x146b001c  bne         $v1, $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x130E94u;
    {
        const bool branch_taken_0x130e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x130E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E94u;
        // 0x130e98: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e94) {
            ctx->pc = 0x130F08u;
            goto label_130f08;
        }
    }
    ctx->pc = 0x130E9Cu;
    // 0x130e9c: 0x8cc501c0  lw          $a1, 0x1C0($a2)
    ctx->pc = 0x130e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x130ea0: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x130EA0u;
    {
        const bool branch_taken_0x130ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ea0) {
            ctx->pc = 0x130EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130EA0u;
            // 0x130ea4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F4Cu;
            goto label_130f4c;
        }
    }
    ctx->pc = 0x130EA8u;
    // 0x130ea8: 0x8ca20480  lw          $v0, 0x480($a1)
    ctx->pc = 0x130ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1152)));
    // 0x130eac: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x130EACu;
    {
        const bool branch_taken_0x130eac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x130EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EACu;
        // 0x130eb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130eac) {
            ctx->pc = 0x130F48u;
            goto label_130f48;
        }
    }
    ctx->pc = 0x130EB4u;
    // 0x130eb4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x130eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x130eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x130ebc: 0x0  nop
    ctx->pc = 0x130ebcu;
    // NOP
label_130ec0:
    // 0x130ec0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x130ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x130ec4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130ec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130ec8: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x130ec8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130ecc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130ed0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130ed4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x130ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x130ed8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130edc: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x130edcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130ee0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130ee4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130ee8: 0x8ca30480  lw          $v1, 0x480($a1)
    ctx->pc = 0x130ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1152)));
    // 0x130eec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x130eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x130ef0: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x130ef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x130ef4: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x130EF4u;
    {
        const bool branch_taken_0x130ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130ef4) {
            ctx->pc = 0x130EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130EF4u;
            // 0x130ef8: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130ec0;
        }
    }
    ctx->pc = 0x130EFCu;
    // 0x130efc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x130EFCu;
    {
        const bool branch_taken_0x130efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EFCu;
        // 0x130f00: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130efc) {
            ctx->pc = 0x130F4Cu;
            goto label_130f4c;
        }
    }
    ctx->pc = 0x130F04u;
    // 0x130f04: 0x0  nop
    ctx->pc = 0x130f04u;
    // NOP
label_130f08:
    // 0x130f08: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x130f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x130f0c: 0x544a000f  bnel        $v0, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x130F0Cu;
    {
        const bool branch_taken_0x130f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x130f0c) {
            ctx->pc = 0x130F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F0Cu;
            // 0x130f10: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F4Cu;
            goto label_130f4c;
        }
    }
    ctx->pc = 0x130F14u;
    // 0x130f14: 0x8c8201f8  lw          $v0, 0x1F8($a0)
    ctx->pc = 0x130f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x130f18: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x130f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x130f1c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x130f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_130f20:
    // 0x130f20: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130f24: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x130f24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130f28: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130f2c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130f30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x130f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x130f34: 0x0  nop
    ctx->pc = 0x130f34u;
    // NOP
    // 0x130f38: 0x0  nop
    ctx->pc = 0x130f38u;
    // NOP
    // 0x130f3c: 0x0  nop
    ctx->pc = 0x130f3cu;
    // NOP
    // 0x130f40: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130F40u;
    {
        const bool branch_taken_0x130f40 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x130F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F40u;
        // 0x130f44: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f40) {
            ctx->pc = 0x130F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130f20;
        }
    }
    ctx->pc = 0x130F48u;
label_130f48:
    // 0x130f48: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x130f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_130f4c:
    // 0x130f4c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130F4Cu;
    {
        const bool branch_taken_0x130f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f4c) {
            ctx->pc = 0x130F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F4Cu;
            // 0x130f50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            goto label_130f64;
        }
    }
    ctx->pc = 0x130F54u;
    // 0x130f54: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x130f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x130f58: 0x5050ffc5  beql        $v0, $s0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x130F58u;
    {
        const bool branch_taken_0x130f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x130f58) {
            ctx->pc = 0x130F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F58u;
            // 0x130f5c: 0x8cc20024  lw          $v0, 0x24($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130e70;
        }
    }
    ctx->pc = 0x130F60u;
label_130f60:
    // 0x130f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130f64:
    // 0x130f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_130f68:
    // 0x130f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x130F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F6Cu;
        // 0x130f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130F74u;
}
