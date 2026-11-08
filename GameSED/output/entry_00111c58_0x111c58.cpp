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

// Function: entry_00111c58
// Address: 0x111c58 - 0x111c64
void entry_00111c58_0x111c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c58_0x111c58");
#endif

    ctx->pc = 0x111c58u;

    // 0x111c58: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111C58u;
    {
        const bool branch_taken_0x111c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111c58) {
            ctx->pc = 0x111C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C58u;
            // 0x111c5c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C64u;
            return;
        }
    }
    ctx->pc = 0x111C60u;
    // 0x111c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111c64u;
}
