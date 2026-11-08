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

// Function: entry_0019fd60
// Address: 0x19fd60 - 0x19fd78
void entry_0019fd60_0x19fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd60_0x19fd60");
#endif

    ctx->pc = 0x19fd60u;

    // 0x19fd60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x19fd64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fd68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fd6c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x19fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x19fd70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19FD70u;
    {
        const bool branch_taken_0x19fd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD70u;
        // 0x19fd74: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd70) {
            ctx->pc = 0x19FD48u;
            return;
        }
    }
    ctx->pc = 0x19FD78u;
}
