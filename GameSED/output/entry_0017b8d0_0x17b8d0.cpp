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

// Function: entry_0017b8d0
// Address: 0x17b8d0 - 0x17b8dc
void entry_0017b8d0_0x17b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b8d0_0x17b8d0");
#endif

    ctx->pc = 0x17b8d0u;

    // 0x17b8d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b8d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B8D4u;
    {
        const bool branch_taken_0x17b8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b8d4) {
            ctx->pc = 0x17B8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B8D4u;
            // 0x17b8d8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B8E8u;
            return;
        }
    }
    ctx->pc = 0x17B8DCu;
}
