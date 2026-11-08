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

// Function: entry_00183e58
// Address: 0x183e58 - 0x183e6c
void entry_00183e58_0x183e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183e58_0x183e58");
#endif

    ctx->pc = 0x183e58u;

    // 0x183e58: 0x0  nop
    ctx->pc = 0x183e58u;
    // NOP
    // 0x183e5c: 0x0  nop
    ctx->pc = 0x183e5cu;
    // NOP
    // 0x183e60: 0x0  nop
    ctx->pc = 0x183e60u;
    // NOP
    // 0x183e64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183E64u;
    {
        const bool branch_taken_0x183e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E64u;
        // 0x183e68: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e64) {
            ctx->pc = 0x183E50u;
            return;
        }
    }
    ctx->pc = 0x183E6Cu;
}
