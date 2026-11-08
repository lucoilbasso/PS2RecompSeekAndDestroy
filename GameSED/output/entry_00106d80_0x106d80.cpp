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

// Function: entry_00106d80
// Address: 0x106d80 - 0x106d90
void entry_00106d80_0x106d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d80_0x106d80");
#endif

    ctx->pc = 0x106d80u;

    // 0x106d80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x106d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106d84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x106d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106d88: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x106D88u;
    {
        const bool branch_taken_0x106d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106d88) {
            ctx->pc = 0x106D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106D88u;
            // 0x106d8c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106D60u;
            return;
        }
    }
    ctx->pc = 0x106D90u;
}
