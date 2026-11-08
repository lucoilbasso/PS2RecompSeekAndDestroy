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

// Function: entry_00185b30
// Address: 0x185b30 - 0x185b40
void entry_00185b30_0x185b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b30_0x185b30");
#endif

    ctx->pc = 0x185b30u;

    // 0x185b30: 0x1222009b  beq         $s1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x185B30u;
    {
        const bool branch_taken_0x185b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B30u;
        // 0x185b34: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b30) {
            ctx->pc = 0x185DA0u;
            return;
        }
    }
    ctx->pc = 0x185B38u;
    // 0x185b38: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x185B38u;
    {
        const bool branch_taken_0x185b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B38u;
        // 0x185b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b38) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185B40u;
}
