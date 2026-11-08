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

// Function: entry_00139a00
// Address: 0x139a00 - 0x139a38
void entry_00139a00_0x139a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139a00_0x139a00");
#endif

    switch (ctx->pc) {
        case 0x139a08u: goto label_139a08;
        case 0x139a34u: goto label_139a34;
        default: break;
    }

    ctx->pc = 0x139a00u;

    // 0x139a00: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x139A00u;
    SET_GPR_U32(ctx, 31, 0x139A08u);
    ctx->pc = 0x139A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A00u;
    // 0x139a04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x139A00u, 0x139A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A08u;
label_139a08:
    // 0x139a08: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x139a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139a0c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139a0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139a10: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139a14: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x139a14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139a18: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x139a1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139A24u;
    {
        const bool branch_taken_0x139a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A24u;
        // 0x139a28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a24) {
            ctx->pc = 0x139A38u;
            return;
        }
    }
    ctx->pc = 0x139A2Cu;
    // 0x139a2c: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139A2Cu;
    SET_GPR_U32(ctx, 31, 0x139A34u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139A2Cu, 0x139A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A34u;
label_139a34:
    // 0x139a34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x139a38u;
}
