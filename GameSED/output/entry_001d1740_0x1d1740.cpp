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

// Function: entry_001d1740
// Address: 0x1d1740 - 0x1d1760
void entry_001d1740_0x1d1740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1740_0x1d1740");
#endif

    ctx->pc = 0x1d1740u;

    // 0x1d1740: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x1d1740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d1744: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x1d1744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x1d1748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1748u;
    {
        const bool branch_taken_0x1d1748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1748u;
        // 0x1d174c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1748) {
            ctx->pc = 0x1D1760u;
            return;
        }
    }
    ctx->pc = 0x1D1750u;
    // 0x1d1750: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x1d1750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d1754: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1754u;
    {
        const bool branch_taken_0x1d1754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1754) {
            ctx->pc = 0x1D1758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1754u;
            // 0x1d1758: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1770u;
            return;
        }
    }
    ctx->pc = 0x1D175Cu;
    // 0x1d175c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x1d175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->pc = 0x1d1760u;
}
