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

// Function: entry_001a03b0
// Address: 0x1a03b0 - 0x1a03c8
void entry_001a03b0_0x1a03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a03b0_0x1a03b0");
#endif

    ctx->pc = 0x1a03b0u;

    // 0x1a03b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a03b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1a03b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a03b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a03bc: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x1a03bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a03c0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A03C0u;
    {
        const bool branch_taken_0x1a03c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a03c0) {
            ctx->pc = 0x1A03C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A03C0u;
            // 0x1a03c4: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0398u;
            return;
        }
    }
    ctx->pc = 0x1A03C8u;
}
