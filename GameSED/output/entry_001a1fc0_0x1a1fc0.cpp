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

// Function: entry_001a1fc0
// Address: 0x1a1fc0 - 0x1a2008
void entry_001a1fc0_0x1a1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1fc0_0x1a1fc0");
#endif

    ctx->pc = 0x1a1fc0u;

label_1a1fc0:
    // 0x1a1fc0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a1fc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1fc4:
    // 0x1a1fc4: 0x4bc2113f  vitof15.xyz $vf2, $vf2
    ctx->pc = 0x1a1fc4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a1fc8:
    // 0x1a1fc8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a1fc8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a1fcc:
    // 0x1a1fcc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a1fd0:
    // 0x1a1fd0: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x1a1fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1a1fd4:
    // 0x1a1fd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1a1fd8:
    if (ctx->pc == 0x1A1FD8u) {
        ctx->pc = 0x1A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FD4u;
        // 0x1a1fd8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FDCu;
        goto label_1a1fdc;
    }
    ctx->pc = 0x1A1FD4u;
    {
        const bool branch_taken_0x1a1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FD4u;
        // 0x1a1fd8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fd4) {
            ctx->pc = 0x1A2070u;
            return;
        }
    }
    ctx->pc = 0x1A1FDCu;
label_1a1fdc:
    // 0x1a1fdc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a1fe0:
    // 0x1a1fe0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a1fe4:
    // 0x1a1fe4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a1fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a1fe8:
    // 0x1a1fe8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a1fec:
    if (ctx->pc == 0x1A1FECu) {
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FF0u;
        goto label_1a1ff0;
    }
    ctx->pc = 0x1A1FE8u;
    {
        const bool branch_taken_0x1a1fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fe8) {
            ctx->pc = 0x1A206Cu;
            return;
        }
    }
    ctx->pc = 0x1A1FF0u;
label_1a1ff0:
    // 0x1a1ff0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a1ff4:
    // 0x1a1ff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a1ff8:
    // 0x1a1ff8: 0x8c639200  lw          $v1, -0x6E00($v1)
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939136)));
label_1a1ffc:
    // 0x1a1ffc: 0x600008  jr          $v1
label_1a2000:
    if (ctx->pc == 0x1A2000u) {
        ctx->pc = 0x1A2004u;
        goto label_1a2004;
    }
    ctx->pc = 0x1A1FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2004u;
label_1a2004:
    // 0x1a2004: 0x0  nop
    ctx->pc = 0x1a2004u;
    // NOP
    ctx->pc = 0x1a2008u;
}
