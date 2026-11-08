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

// Function: entry_001c7098
// Address: 0x1c7098 - 0x1c70a8
void entry_001c7098_0x1c7098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7098_0x1c7098");
#endif

    ctx->pc = 0x1c7098u;

    // 0x1c7098: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c709c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c709cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c70a0: 0x1640fff3  bnez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C70A0u;
    {
        const bool branch_taken_0x1c70a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70A0u;
        // 0x1c70a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70a0) {
            ctx->pc = 0x1C7070u;
            return;
        }
    }
    ctx->pc = 0x1C70A8u;
}
