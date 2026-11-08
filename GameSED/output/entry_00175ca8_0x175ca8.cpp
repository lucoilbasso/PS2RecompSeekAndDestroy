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

// Function: entry_00175ca8
// Address: 0x175ca8 - 0x175cb0
void entry_00175ca8_0x175ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ca8_0x175ca8");
#endif

    ctx->pc = 0x175ca8u;

    // 0x175ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175CA8u;
    {
        const bool branch_taken_0x175ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ca8) {
            ctx->pc = 0x175CB4u;
            return;
        }
    }
    ctx->pc = 0x175CB0u;
}
