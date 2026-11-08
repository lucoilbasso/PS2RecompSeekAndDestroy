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

// Function: GetLandPosition__8ApcRsc3DP9FVector32fPfP14ApDiagSurfInfob
// Address: 0x144c60 - 0x144d8c
void GetLandPosition__8ApcRsc3DP9FVector32fPfP14ApDiagSurfInfob_0x144c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLandPosition__8ApcRsc3DP9FVector32fPfP14ApDiagSurfInfob_0x144c60");
#endif

    switch (ctx->pc) {
        case 0x144cc0u: goto label_144cc0;
        case 0x144ce0u: goto label_144ce0;
        default: break;
    }

    ctx->pc = 0x144c60u;

    // 0x144c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x144c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x144c64: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x144c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c68: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x144c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x144c6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x144c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c70: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x144c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x144c74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x144c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c78: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x144c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x144c7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x144c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x144c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x144c84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x144c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c88: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x144c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x144c8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x144c8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x144c90: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x144c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x144c94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x144c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c98: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x144c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x144c9c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x144C9Cu;
    {
        const bool branch_taken_0x144c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C9Cu;
        // 0x144ca0: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c9c) {
            ctx->pc = 0x144CC4u;
            goto label_144cc4;
        }
    }
    ctx->pc = 0x144CA4u;
    // 0x144ca4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x144ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144ca8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x144ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x144cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144CACu;
    {
        const bool branch_taken_0x144cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CACu;
        // 0x144cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cac) {
            ctx->pc = 0x144CC4u;
            goto label_144cc4;
        }
    }
    ctx->pc = 0x144CB4u;
    // 0x144cb4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x144cb8: 0xc04fa80  jal         func_13EA00
    ctx->pc = 0x144CB8u;
    SET_GPR_U32(ctx, 31, 0x144CC0u);
    ctx->pc = 0x144CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CB8u;
    // 0x144cbc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EA00u, 0x144CB8u, 0x144CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CC0u;
label_144cc0:
    // 0x144cc0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x144cc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144cc4:
    // 0x144cc4: 0x5500000a  bnel        $t0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x144CC4u;
    {
        const bool branch_taken_0x144cc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x144cc4) {
            ctx->pc = 0x144CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144CC4u;
            // 0x144cc8: 0x8d060160  lw          $a2, 0x160($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144CF0u;
            goto label_144cf0;
        }
    }
    ctx->pc = 0x144CCCu;
    // 0x144ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x144cd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x144cd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd8: 0xc04ef9c  jal         func_13BE70
    ctx->pc = 0x144CD8u;
    SET_GPR_U32(ctx, 31, 0x144CE0u);
    ctx->pc = 0x144CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CD8u;
    // 0x144cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE70u, 0x144CD8u, 0x144CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CE0u;
label_144ce0:
    // 0x144ce0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x144ce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce4: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x144CE4u;
    {
        const bool branch_taken_0x144ce4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CE4u;
        // 0x144ce8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ce4) {
            ctx->pc = 0x144D68u;
            goto label_144d68;
        }
    }
    ctx->pc = 0x144CECu;
    // 0x144cec: 0x8d060160  lw          $a2, 0x160($t0)
    ctx->pc = 0x144cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
label_144cf0:
    // 0x144cf0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x144cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144cf4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x144cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144cf8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x144cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x144cfc: 0x8e650328  lw          $a1, 0x328($s3)
    ctx->pc = 0x144cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
    // 0x144d00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x144d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x144d04: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x144d08: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x144d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x144d0c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x144d0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144d10: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x144d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144d14: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x144d14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x144d18: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x144d18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x144d1c: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x144d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x144d20: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x144d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x144d24: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x144d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x144d28: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x144d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x144d2c: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x144d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x144d30: 0x24a34030  addiu       $v1, $a1, 0x4030
    ctx->pc = 0x144d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16432));
    // 0x144d34: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x144d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x144d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x144d3c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x144d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144d40: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x144d40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x144d44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x144d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144d48: 0x8ca24020  lw          $v0, 0x4020($a1)
    ctx->pc = 0x144d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16416)));
    // 0x144d4c: 0xaca4402c  sw          $a0, 0x402C($a1)
    ctx->pc = 0x144d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16428), GPR_U32(ctx, 4));
    // 0x144d50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x144d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x144d54: 0xaca84024  sw          $t0, 0x4024($a1)
    ctx->pc = 0x144d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16420), GPR_U32(ctx, 8));
    // 0x144d58: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x144d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x144d5c: 0xaca24020  sw          $v0, 0x4020($a1)
    ctx->pc = 0x144d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16416), GPR_U32(ctx, 2));
    // 0x144d60: 0xaca34028  sw          $v1, 0x4028($a1)
    ctx->pc = 0x144d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16424), GPR_U32(ctx, 3));
    // 0x144d64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x144d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144d68:
    // 0x144d68: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x144d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d6c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x144d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144d70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x144d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144d74: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x144d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144d78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x144d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144d7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x144d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144d80: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x144d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x144d84: 0x3e00008  jr          $ra
    ctx->pc = 0x144D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D84u;
        // 0x144d88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144D8Cu;
}
