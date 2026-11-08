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

// Function: entry_001710c8
// Address: 0x1710c8 - 0x1710d4
void entry_001710c8_0x1710c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001710c8_0x1710c8");
#endif

    ctx->pc = 0x1710c8u;

    // 0x1710c8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1710c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1710cc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1710CCu;
    {
        const bool branch_taken_0x1710cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1710D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710CCu;
        // 0x1710d0: 0x8d220030  lw          $v0, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710cc) {
            ctx->pc = 0x1710F0u;
            return;
        }
    }
    ctx->pc = 0x1710D4u;
}
