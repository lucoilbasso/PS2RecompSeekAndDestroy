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

// Function: entry_001a6604
// Address: 0x1a6604 - 0x1a664c
void entry_001a6604_0x1a6604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6604_0x1a6604");
#endif

    switch (ctx->pc) {
        case 0x1a6648u: goto label_1a6648;
        default: break;
    }

    ctx->pc = 0x1a6604u;

    // 0x1a6604: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a6604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a6608: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a6608u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a660c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a660cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a6610: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a6610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a6614: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6618: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a661c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6620: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6628: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a662c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6630: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a6630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a6634: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6638: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6638u;
    {
        const bool branch_taken_0x1a6638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6638u;
        // 0x1a663c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6638) {
            ctx->pc = 0x1A664Cu;
            return;
        }
    }
    ctx->pc = 0x1A6640u;
    // 0x1a6640: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6640u;
    SET_GPR_U32(ctx, 31, 0x1A6648u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6640u, 0x1A6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6648u;
label_1a6648:
    // 0x1a6648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a664cu;
}
