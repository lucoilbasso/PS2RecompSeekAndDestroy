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

// Function: entry_001d3e30
// Address: 0x1d3e30 - 0x1d3e48
void entry_001d3e30_0x1d3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e30_0x1d3e30");
#endif

    ctx->pc = 0x1d3e30u;

    // 0x1d3e30: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1d3e34: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d3e34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3e38: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1d3e38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3e3c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D3E3Cu;
    {
        const bool branch_taken_0x1d3e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E3Cu;
        // 0x1d3e40: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e3c) {
            ctx->pc = 0x1D4194u;
            return;
        }
    }
    ctx->pc = 0x1D3E44u;
    // 0x1d3e44: 0x0  nop
    ctx->pc = 0x1d3e44u;
    // NOP
    ctx->pc = 0x1d3e48u;
}
