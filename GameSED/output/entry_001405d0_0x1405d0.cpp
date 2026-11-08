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

// Function: entry_001405d0
// Address: 0x1405d0 - 0x1405dc
void entry_001405d0_0x1405d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405d0_0x1405d0");
#endif

    ctx->pc = 0x1405d0u;

    // 0x1405d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1405D0u;
    {
        const bool branch_taken_0x1405d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1405d0) {
            ctx->pc = 0x1405D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405D0u;
            // 0x1405d4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405E4u;
            return;
        }
    }
    ctx->pc = 0x1405D8u;
    // 0x1405d8: 0x24020aaa  addiu       $v0, $zero, 0xAAA
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
    ctx->pc = 0x1405dcu;
}
