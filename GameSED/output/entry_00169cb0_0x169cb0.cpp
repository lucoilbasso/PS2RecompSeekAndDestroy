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

// Function: entry_00169cb0
// Address: 0x169cb0 - 0x169cb8
void entry_00169cb0_0x169cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169cb0_0x169cb0");
#endif

    ctx->pc = 0x169cb0u;

    // 0x169cb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169CB0u;
    {
        const bool branch_taken_0x169cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CB0u;
        // 0x169cb4: 0x26d11218  addiu       $s1, $s6, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cb0) {
            ctx->pc = 0x169CC4u;
            return;
        }
    }
    ctx->pc = 0x169CB8u;
}
