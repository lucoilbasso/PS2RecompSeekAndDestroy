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

// Function: entry_001c56dc
// Address: 0x1c56dc - 0x1c5700
void entry_001c56dc_0x1c56dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c56dc_0x1c56dc");
#endif

    ctx->pc = 0x1c56dcu;

    // 0x1c56dc: 0x2662eec0  addiu       $v0, $s3, -0x1140
    ctx->pc = 0x1c56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962880));
    // 0x1c56e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c56e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56e4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c56e8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C56E8u;
    {
        const bool branch_taken_0x1c56e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56E8u;
        // 0x1c56ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56e8) {
            ctx->pc = 0x1C5728u;
            return;
        }
    }
    ctx->pc = 0x1C56F0u;
    // 0x1c56f0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1c56f4: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1c56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1c56f8: 0x24e4eec0  addiu       $a0, $a3, -0x1140
    ctx->pc = 0x1c56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962880));
    // 0x1c56fc: 0x0  nop
    ctx->pc = 0x1c56fcu;
    // NOP
    ctx->pc = 0x1c5700u;
}
