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

// Function: entry_001d4068
// Address: 0x1d4068 - 0x1d4078
void entry_001d4068_0x1d4068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4068_0x1d4068");
#endif

    ctx->pc = 0x1d4068u;

    // 0x1d4068: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x1d4068u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d406c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D406Cu;
    {
        const bool branch_taken_0x1d406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D406Cu;
        // 0x1d4070: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d406c) {
            ctx->pc = 0x1D4118u;
            return;
        }
    }
    ctx->pc = 0x1D4074u;
    // 0x1d4074: 0x0  nop
    ctx->pc = 0x1d4074u;
    // NOP
    ctx->pc = 0x1d4078u;
}
