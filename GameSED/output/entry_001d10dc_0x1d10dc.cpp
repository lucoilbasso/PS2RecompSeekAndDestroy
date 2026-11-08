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

// Function: entry_001d10dc
// Address: 0x1d10dc - 0x1d10ec
void entry_001d10dc_0x1d10dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d10dc_0x1d10dc");
#endif

    ctx->pc = 0x1d10dcu;

    // 0x1d10dc: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D10DCu;
    {
        const bool branch_taken_0x1d10dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10DCu;
        // 0x1d10e0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10dc) {
            ctx->pc = 0x1D10ECu;
            return;
        }
    }
    ctx->pc = 0x1D10E4u;
    // 0x1d10e4: 0x46a80b  movn        $s5, $v0, $a2
    ctx->pc = 0x1d10e4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x1d10e8: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x1d10e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    ctx->pc = 0x1d10ecu;
}
