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

// Function: entry_001546a8
// Address: 0x1546a8 - 0x1546b4
void entry_001546a8_0x1546a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001546a8_0x1546a8");
#endif

    ctx->pc = 0x1546a8u;

    // 0x1546a8: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1546A8u;
    {
        const bool branch_taken_0x1546a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546a8) {
            ctx->pc = 0x1546ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1546A8u;
            // 0x1546ac: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546B4u;
            return;
        }
    }
    ctx->pc = 0x1546B0u;
    // 0x1546b0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    ctx->pc = 0x1546b4u;
}
