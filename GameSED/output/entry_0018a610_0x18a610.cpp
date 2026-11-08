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

// Function: entry_0018a610
// Address: 0x18a610 - 0x18a640
void entry_0018a610_0x18a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a610_0x18a610");
#endif

    switch (ctx->pc) {
        case 0x18a63cu: goto label_18a63c;
        default: break;
    }

    ctx->pc = 0x18a610u;

    // 0x18a610: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18A610u;
    {
        const bool branch_taken_0x18a610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a610) {
            ctx->pc = 0x18A614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A610u;
            // 0x18a614: 0x96020200  lhu         $v0, 0x200($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A640u;
            return;
        }
    }
    ctx->pc = 0x18A618u;
    // 0x18a618: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x18a618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a61c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a61cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18a620: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x18a620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18a624: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x18a624u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a628: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x18a628u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a62c: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x18a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x18a630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18a630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a634: 0xc061372  jal         func_184DC8
    ctx->pc = 0x18A634u;
    SET_GPR_U32(ctx, 31, 0x18A63Cu);
    ctx->pc = 0x18A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A634u;
    // 0x18a638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x18A634u, 0x18A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A63Cu;
label_18a63c:
    // 0x18a63c: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    ctx->pc = 0x18a640u;
}
