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

// Function: entry_0018c780
// Address: 0x18c780 - 0x18c790
void entry_0018c780_0x18c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c780_0x18c780");
#endif

    ctx->pc = 0x18c780u;

    // 0x18c780: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18C780u;
    {
        const bool branch_taken_0x18c780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c780) {
            ctx->pc = 0x18C7B8u;
            return;
        }
    }
    ctx->pc = 0x18C788u;
    // 0x18c788: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18C788u;
    {
        const bool branch_taken_0x18c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C788u;
        // 0x18c78c: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c788) {
            ctx->pc = 0x18C900u;
            return;
        }
    }
    ctx->pc = 0x18C790u;
}
