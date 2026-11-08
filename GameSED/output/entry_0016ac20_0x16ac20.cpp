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

// Function: entry_0016ac20
// Address: 0x16ac20 - 0x16ac44
void entry_0016ac20_0x16ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac20_0x16ac20");
#endif

    ctx->pc = 0x16ac20u;

    // 0x16ac20: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ac24: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16ac28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16ac2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AC30u;
    {
        const bool branch_taken_0x16ac30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC30u;
        // 0x16ac34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac30) {
            ctx->pc = 0x16AC44u;
            return;
        }
    }
    ctx->pc = 0x16AC38u;
    // 0x16ac38: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x16ac38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16ac3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16AC3Cu;
    {
        const bool branch_taken_0x16ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC3Cu;
        // 0x16ac40: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac3c) {
            ctx->pc = 0x16ABF0u;
            return;
        }
    }
    ctx->pc = 0x16AC44u;
}
