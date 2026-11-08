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

// Function: entry_00121948
// Address: 0x121948 - 0x1219b0
void entry_00121948_0x121948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121948_0x121948");
#endif

    switch (ctx->pc) {
        case 0x121954u: goto label_121954;
        case 0x121968u: goto label_121968;
        case 0x12199cu: goto label_12199c;
        default: break;
    }

    ctx->pc = 0x121948u;

    // 0x121948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x121948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12194c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12194Cu;
    SET_GPR_U32(ctx, 31, 0x121954u);
    ctx->pc = 0x121950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12194Cu;
    // 0x121950: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12194Cu, 0x121954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121954u;
label_121954:
    // 0x121954: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x121954u;
    {
        const bool branch_taken_0x121954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121954u;
        // 0x121958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121954) {
            ctx->pc = 0x1219B0u;
            return;
        }
    }
    ctx->pc = 0x12195Cu;
    // 0x12195c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x121960: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x121960u;
    SET_GPR_U32(ctx, 31, 0x121968u);
    ctx->pc = 0x121964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121960u;
    // 0x121964: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x121960u, 0x121968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121968u;
label_121968:
    // 0x121968: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12196c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12196cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121970: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121970u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121974: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121974u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12197c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x121988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12198c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12198Cu;
    {
        const bool branch_taken_0x12198c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x121990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12198Cu;
        // 0x121990: 0xe60000f0  swc1        $f0, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12198c) {
            ctx->pc = 0x1219B0u;
            return;
        }
    }
    ctx->pc = 0x121994u;
    // 0x121994: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x121994u;
    SET_GPR_U32(ctx, 31, 0x12199Cu);
    ctx->pc = 0x121998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121994u;
    // 0x121998: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x121994u, 0x12199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12199Cu;
label_12199c:
    // 0x12199c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12199Cu;
    {
        const bool branch_taken_0x12199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12199c) {
            ctx->pc = 0x1219B0u;
            return;
        }
    }
    ctx->pc = 0x1219A4u;
    // 0x1219a4: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x1219a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1219a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1219a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1219ac: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1219acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    ctx->pc = 0x1219b0u;
}
