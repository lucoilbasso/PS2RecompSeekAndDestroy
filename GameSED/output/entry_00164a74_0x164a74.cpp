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

// Function: entry_00164a74
// Address: 0x164a74 - 0x164a80
void entry_00164a74_0x164a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a74_0x164a74");
#endif

    ctx->pc = 0x164a74u;

    // 0x164a74: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x164a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164A78u;
    {
        const bool branch_taken_0x164a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A78u;
        // 0x164a7c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a78) {
            ctx->pc = 0x164A84u;
            return;
        }
    }
    ctx->pc = 0x164A80u;
}
