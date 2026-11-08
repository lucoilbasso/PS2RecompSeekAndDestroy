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

// Function: entry_001605d4
// Address: 0x1605d4 - 0x1605f0
void entry_001605d4_0x1605d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001605d4_0x1605d4");
#endif

    ctx->pc = 0x1605d4u;

    // 0x1605d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1605d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1605d8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1605d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1605dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1605DCu;
    {
        const bool branch_taken_0x1605dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1605E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605DCu;
        // 0x1605e0: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605dc) {
            ctx->pc = 0x1605B0u;
            return;
        }
    }
    ctx->pc = 0x1605E4u;
    // 0x1605e4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x1605E4u;
    {
        const bool branch_taken_0x1605e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605E4u;
        // 0x1605e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605e4) {
            ctx->pc = 0x160A3Cu;
            return;
        }
    }
    ctx->pc = 0x1605ECu;
    // 0x1605ec: 0x0  nop
    ctx->pc = 0x1605ecu;
    // NOP
    ctx->pc = 0x1605f0u;
}
