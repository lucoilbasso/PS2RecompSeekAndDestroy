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

// Function: $L17
// Address: 0x1d096c - 0x1d0978
void ps2__L17_0x1d096c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L17_0x1d096c");
#endif

    ctx->pc = 0x1d096cu;

    // 0x1d096c: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D096Cu;
    {
        const bool branch_taken_0x1d096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d096c) {
            ctx->pc = 0x1D0970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D096Cu;
            // 0x1d0970: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0988u;
            return;
        }
    }
    ctx->pc = 0x1D0974u;
    // 0x1d0974: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d0974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1d0978u;
}
