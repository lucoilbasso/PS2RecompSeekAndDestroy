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

// Function: entry_001889b4
// Address: 0x1889b4 - 0x1889c4
void entry_001889b4_0x1889b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889b4_0x1889b4");
#endif

    ctx->pc = 0x1889b4u;

    // 0x1889b4: 0x0  nop
    ctx->pc = 0x1889b4u;
    // NOP
    // 0x1889b8: 0x0  nop
    ctx->pc = 0x1889b8u;
    // NOP
    // 0x1889bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1889BCu;
    {
        const bool branch_taken_0x1889bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889BCu;
        // 0x1889c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889bc) {
            ctx->pc = 0x1889A8u;
            return;
        }
    }
    ctx->pc = 0x1889C4u;
}
