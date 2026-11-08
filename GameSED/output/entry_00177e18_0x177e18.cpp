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

// Function: entry_00177e18
// Address: 0x177e18 - 0x177e20
void entry_00177e18_0x177e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e18_0x177e18");
#endif

    ctx->pc = 0x177e18u;

    // 0x177e18: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x177E18u;
    {
        const bool branch_taken_0x177e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x177e18) {
            ctx->pc = 0x177E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177E18u;
            // 0x177e1c: 0x8ce3001c  lw          $v1, 0x1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177E30u;
            return;
        }
    }
    ctx->pc = 0x177E20u;
}
