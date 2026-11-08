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

// Function: entry_001a1e50
// Address: 0x1a1e50 - 0x1a1e98
void entry_001a1e50_0x1a1e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1e50_0x1a1e50");
#endif

    ctx->pc = 0x1a1e50u;

label_1a1e50:
    // 0x1a1e50: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a1e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1e54:
    // 0x1a1e54: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1a1e54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a1e58:
    // 0x1a1e58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a1e58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a1e5c:
    // 0x1a1e5c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a1e60:
    // 0x1a1e60: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x1a1e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1a1e64:
    // 0x1a1e64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1a1e68:
    if (ctx->pc == 0x1A1E68u) {
        ctx->pc = 0x1A1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E64u;
        // 0x1a1e68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E6Cu;
        goto label_1a1e6c;
    }
    ctx->pc = 0x1A1E64u;
    {
        const bool branch_taken_0x1a1e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E64u;
        // 0x1a1e68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e64) {
            ctx->pc = 0x1A1F00u;
            return;
        }
    }
    ctx->pc = 0x1A1E6Cu;
label_1a1e6c:
    // 0x1a1e6c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a1e70:
    // 0x1a1e70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a1e74:
    // 0x1a1e74: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a1e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a1e78:
    // 0x1a1e78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a1e7c:
    if (ctx->pc == 0x1A1E7Cu) {
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E80u;
        goto label_1a1e80;
    }
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1EFCu;
            return;
        }
    }
    ctx->pc = 0x1A1E80u;
label_1a1e80:
    // 0x1a1e80: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a1e84:
    // 0x1a1e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a1e88:
    // 0x1a1e88: 0x8c6391c0  lw          $v1, -0x6E40($v1)
    ctx->pc = 0x1a1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
label_1a1e8c:
    // 0x1a1e8c: 0x600008  jr          $v1
label_1a1e90:
    if (ctx->pc == 0x1A1E90u) {
        ctx->pc = 0x1A1E94u;
        goto label_1a1e94;
    }
    ctx->pc = 0x1A1E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E94u;
label_1a1e94:
    // 0x1a1e94: 0x0  nop
    ctx->pc = 0x1a1e94u;
    // NOP
    ctx->pc = 0x1a1e98u;
}
