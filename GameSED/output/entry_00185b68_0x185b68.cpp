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

// Function: entry_00185b68
// Address: 0x185b68 - 0x185b78
void entry_00185b68_0x185b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b68_0x185b68");
#endif

    ctx->pc = 0x185b68u;

    // 0x185b68: 0x122200ed  beq         $s1, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x185B68u;
    {
        const bool branch_taken_0x185b68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B68u;
        // 0x185b6c: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b68) {
            ctx->pc = 0x185F20u;
            return;
        }
    }
    ctx->pc = 0x185B70u;
    // 0x185b70: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x185B70u;
    {
        const bool branch_taken_0x185b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B70u;
        // 0x185b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b70) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185B78u;
}
