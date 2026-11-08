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

// Function: entry_00169ca8
// Address: 0x169ca8 - 0x169cb0
void entry_00169ca8_0x169ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169ca8_0x169ca8");
#endif

    ctx->pc = 0x169ca8u;

    // 0x169ca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x169CA8u;
    {
        const bool branch_taken_0x169ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CA8u;
        // 0x169cac: 0x26d11200  addiu       $s1, $s6, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ca8) {
            ctx->pc = 0x169CC4u;
            return;
        }
    }
    ctx->pc = 0x169CB0u;
}
