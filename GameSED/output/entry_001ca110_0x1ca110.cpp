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

// Function: entry_001ca110
// Address: 0x1ca110 - 0x1ca11c
void entry_001ca110_0x1ca110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca110_0x1ca110");
#endif

    ctx->pc = 0x1ca110u;

    // 0x1ca110: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA110u;
    {
        const bool branch_taken_0x1ca110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA110u;
        // 0x1ca114: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca110) {
            ctx->pc = 0x1CA138u;
            return;
        }
    }
    ctx->pc = 0x1CA118u;
    // 0x1ca118: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x1ca11cu;
}
