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

// Function: entry_00186668
// Address: 0x186668 - 0x186670
void entry_00186668_0x186668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186668_0x186668");
#endif

    ctx->pc = 0x186668u;

    // 0x186668: 0x14670002  bne         $v1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x186668u;
    {
        const bool branch_taken_0x186668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186668u;
        // 0x18666c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186668) {
            ctx->pc = 0x186674u;
            return;
        }
    }
    ctx->pc = 0x186670u;
}
