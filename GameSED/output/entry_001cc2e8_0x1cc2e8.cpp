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

// Function: entry_001cc2e8
// Address: 0x1cc2e8 - 0x1cc2f8
void entry_001cc2e8_0x1cc2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc2e8_0x1cc2e8");
#endif

    ctx->pc = 0x1cc2e8u;

    // 0x1cc2e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1cc2ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cc2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cc2f0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1CC2F0u;
    {
        const bool branch_taken_0x1cc2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F0u;
        // 0x1cc2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2f0) {
            ctx->pc = 0x1CC490u;
            return;
        }
    }
    ctx->pc = 0x1CC2F8u;
}
