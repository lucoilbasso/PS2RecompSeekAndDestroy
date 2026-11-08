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

// Function: entry_00136e90
// Address: 0x136e90 - 0x136eb0
void entry_00136e90_0x136e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136e90_0x136e90");
#endif

    ctx->pc = 0x136e90u;

    // 0x136e90: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136E90u;
    {
        const bool branch_taken_0x136e90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x136E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E90u;
        // 0x136e94: 0x8f828a30  lw          $v0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e90) {
            ctx->pc = 0x136EB4u;
            return;
        }
    }
    ctx->pc = 0x136E98u;
    // 0x136e98: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x136E98u;
    {
        const bool branch_taken_0x136e98 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x136E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E98u;
        // 0x136e9c: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e98) {
            ctx->pc = 0x136EB0u;
            return;
        }
    }
    ctx->pc = 0x136EA0u;
    // 0x136ea0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x136ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x136ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136EA8u;
    {
        const bool branch_taken_0x136ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA8u;
        // 0x136eac: 0x8c423630  lw          $v0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ea8) {
            ctx->pc = 0x136EB4u;
            return;
        }
    }
    ctx->pc = 0x136EB0u;
}
