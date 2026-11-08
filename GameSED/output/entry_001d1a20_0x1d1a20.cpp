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

// Function: entry_001d1a20
// Address: 0x1d1a20 - 0x1d1a30
void entry_001d1a20_0x1d1a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a20_0x1d1a20");
#endif

    ctx->pc = 0x1d1a20u;

    // 0x1d1a20: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A20u;
    {
        const bool branch_taken_0x1d1a20 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A20u;
        // 0x1d1a24: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a20) {
            ctx->pc = 0x1D1A30u;
            return;
        }
    }
    ctx->pc = 0x1D1A28u;
    // 0x1d1a28: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1d1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1d1a2c: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x1d1a2cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    ctx->pc = 0x1d1a30u;
}
