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

// Function: entry_00100490
// Address: 0x100490 - 0x10049c
void entry_00100490_0x100490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100490_0x100490");
#endif

    ctx->pc = 0x100490u;

    // 0x100490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100494: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x100494u;
    {
        const bool branch_taken_0x100494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100494) {
            ctx->pc = 0x100498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100494u;
            // 0x100498: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100448u;
            return;
        }
    }
    ctx->pc = 0x10049Cu;
}
