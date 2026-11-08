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

// Function: entry_0014bc74
// Address: 0x14bc74 - 0x14bc7c
void entry_0014bc74_0x14bc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc74_0x14bc74");
#endif

    ctx->pc = 0x14bc74u;

    // 0x14bc74: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BC74u;
    {
        const bool branch_taken_0x14bc74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bc74) {
            ctx->pc = 0x14BC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BC74u;
            // 0x14bc78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BC88u;
            return;
        }
    }
    ctx->pc = 0x14BC7Cu;
}
