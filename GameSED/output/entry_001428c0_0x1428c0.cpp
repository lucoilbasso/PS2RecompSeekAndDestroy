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

// Function: entry_001428c0
// Address: 0x1428c0 - 0x1428d0
void entry_001428c0_0x1428c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001428c0_0x1428c0");
#endif

    ctx->pc = 0x1428c0u;

    // 0x1428c0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1428c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1428c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1428C4u;
    {
        const bool branch_taken_0x1428c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428C4u;
        // 0x1428c8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428c4) {
            ctx->pc = 0x1428F0u;
            return;
        }
    }
    ctx->pc = 0x1428CCu;
    // 0x1428cc: 0x0  nop
    ctx->pc = 0x1428ccu;
    // NOP
    ctx->pc = 0x1428d0u;
}
