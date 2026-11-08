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

// Function: entry_001613ec
// Address: 0x1613ec - 0x161400
void entry_001613ec_0x1613ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613ec_0x1613ec");
#endif

    ctx->pc = 0x1613ecu;

    // 0x1613ec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1613ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1613f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1613f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1613F4u;
    {
        const bool branch_taken_0x1613f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613F4u;
        // 0x1613f8: 0xad220008  sw          $v0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613f4) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x1613FCu;
    // 0x1613fc: 0x0  nop
    ctx->pc = 0x1613fcu;
    // NOP
    ctx->pc = 0x161400u;
}
