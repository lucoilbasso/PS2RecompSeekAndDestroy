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

// Function: entry_00145138
// Address: 0x145138 - 0x145140
void entry_00145138_0x145138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145138_0x145138");
#endif

    ctx->pc = 0x145138u;

    // 0x145138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145138u;
    {
        const bool branch_taken_0x145138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145138u;
        // 0x14513c: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145138) {
            ctx->pc = 0x145154u;
            return;
        }
    }
    ctx->pc = 0x145140u;
}
