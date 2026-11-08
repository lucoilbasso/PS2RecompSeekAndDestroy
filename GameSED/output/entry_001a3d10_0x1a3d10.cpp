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

// Function: entry_001a3d10
// Address: 0x1a3d10 - 0x1a3d1c
void entry_001a3d10_0x1a3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d10_0x1a3d10");
#endif

    ctx->pc = 0x1a3d10u;

    // 0x1a3d10: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3D10u;
    {
        const bool branch_taken_0x1a3d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d10) {
            ctx->pc = 0x1A3D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3D10u;
            // 0x1a3d14: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D4Cu;
            return;
        }
    }
    ctx->pc = 0x1A3D18u;
    // 0x1a3d18: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x1a3d1cu;
}
