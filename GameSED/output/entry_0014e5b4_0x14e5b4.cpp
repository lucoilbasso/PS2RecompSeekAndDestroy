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

// Function: entry_0014e5b4
// Address: 0x14e5b4 - 0x14e60c
void entry_0014e5b4_0x14e5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e5b4_0x14e5b4");
#endif

    switch (ctx->pc) {
        case 0x14e5e0u: goto label_14e5e0;
        default: break;
    }

    ctx->pc = 0x14e5b4u;

    // 0x14e5b4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14e5b8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x14e5bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e5c0: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x14E5C0u;
    {
        const bool branch_taken_0x14e5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C0u;
        // 0x14e5c4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5c0) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E5C8u;
    // 0x14e5c8: 0x2402030f  addiu       $v0, $zero, 0x30F
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x14e5cc: 0x5642000f  bnel        $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14E5CCu;
    {
        const bool branch_taken_0x14e5cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e5cc) {
            ctx->pc = 0x14E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E5CCu;
            // 0x14e5d0: 0x24020310  addiu       $v0, $zero, 0x310 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E60Cu;
            return;
        }
    }
    ctx->pc = 0x14E5D4u;
    // 0x14e5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5d8: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14E5D8u;
    SET_GPR_U32(ctx, 31, 0x14E5E0u);
    ctx->pc = 0x14E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5D8u;
    // 0x14e5dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E5D8u, 0x14E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5E0u;
label_14e5e0:
    // 0x14e5e0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14e5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5e8: 0x24054035  addiu       $a1, $zero, 0x4035
    ctx->pc = 0x14e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16437));
    // 0x14e5ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14e5f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x14e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x14e5f4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14e5f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x14e5f8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14e5f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14e5fc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14e5fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14e600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e604: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14e604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14e608: 0x24020310  addiu       $v0, $zero, 0x310
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->pc = 0x14e60cu;
}
