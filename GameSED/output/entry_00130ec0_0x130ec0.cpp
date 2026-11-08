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

// Function: entry_00130ec0
// Address: 0x130ec0 - 0x130f08
void entry_00130ec0_0x130ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ec0_0x130ec0");
#endif

    ctx->pc = 0x130ec0u;

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
            return;
        }
    }
    ctx->pc = 0x130F04u;
    // 0x130f04: 0x0  nop
    ctx->pc = 0x130f04u;
    // NOP
    ctx->pc = 0x130f08u;
}
