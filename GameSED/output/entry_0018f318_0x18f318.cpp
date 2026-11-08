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

// Function: entry_0018f318
// Address: 0x18f318 - 0x18f334
void entry_0018f318_0x18f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f318_0x18f318");
#endif

    ctx->pc = 0x18f318u;

label_18f318:
    // 0x18f318: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18f31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f320: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x18f320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f324: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18f328: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x18f328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18f32c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18F32Cu;
    {
        const bool branch_taken_0x18f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f32c) {
            ctx->pc = 0x18F330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F32Cu;
            // 0x18f330: 0x8e0201c8  lw          $v0, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f318;
        }
    }
    ctx->pc = 0x18F334u;
}
