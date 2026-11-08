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

// Function: entry_0011109c
// Address: 0x11109c - 0x1110a8
void entry_0011109c_0x11109c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011109c_0x11109c");
#endif

    ctx->pc = 0x11109cu;

    // 0x11109c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1110a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1110A0u;
    {
        const bool branch_taken_0x1110a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110A0u;
        // 0x1110a4: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110a0) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x1110A8u;
}
