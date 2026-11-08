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

// Function: entry_0014e60c
// Address: 0x14e60c - 0x14e650
void entry_0014e60c_0x14e60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e60c_0x14e60c");
#endif

    switch (ctx->pc) {
        case 0x14e620u: goto label_14e620;
        default: break;
    }

    ctx->pc = 0x14e60cu;

    // 0x14e60c: 0x564200f8  bnel        $s2, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x14E60Cu;
    {
        const bool branch_taken_0x14e60c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e60c) {
            ctx->pc = 0x14E610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E60Cu;
            // 0x14e610: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E614u;
    // 0x14e614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e618: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14E618u;
    SET_GPR_U32(ctx, 31, 0x14E620u);
    ctx->pc = 0x14E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E618u;
    // 0x14e61c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E618u, 0x14E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E620u;
label_14e620:
    // 0x14e620: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14e624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e628: 0x24054034  addiu       $a1, $zero, 0x4034
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16436));
    // 0x14e62c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14e630: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x14e630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x14e634: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14e634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x14e638: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14e638u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14e63c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14e63cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14e640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e644: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x14E644u;
    {
        const bool branch_taken_0x14e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E644u;
        // 0x14e648: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e644) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E64Cu;
    // 0x14e64c: 0x0  nop
    ctx->pc = 0x14e64cu;
    // NOP
    ctx->pc = 0x14e650u;
}
