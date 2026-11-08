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

// Function: entry_001323ec
// Address: 0x1323ec - 0x1323f8
void entry_001323ec_0x1323ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001323ec_0x1323ec");
#endif

    ctx->pc = 0x1323ecu;

    // 0x1323ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1323ECu;
    {
        const bool branch_taken_0x1323ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ECu;
        // 0x1323f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323ec) {
            ctx->pc = 0x1323F8u;
            return;
        }
    }
    ctx->pc = 0x1323F4u;
    // 0x1323f4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1323f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    ctx->pc = 0x1323f8u;
}
