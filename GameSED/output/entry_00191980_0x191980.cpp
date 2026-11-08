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

// Function: entry_00191980
// Address: 0x191980 - 0x19198c
void entry_00191980_0x191980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191980_0x191980");
#endif

    ctx->pc = 0x191980u;

    // 0x191980: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x191980u;
    {
        const bool branch_taken_0x191980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x191980) {
            ctx->pc = 0x191984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191980u;
            // 0x191984: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19198Cu;
            return;
        }
    }
    ctx->pc = 0x191988u;
    // 0x191988: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x19198cu;
}
