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

// Function: entry_00161e70
// Address: 0x161e70 - 0x161e80
void entry_00161e70_0x161e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161e70_0x161e70");
#endif

    ctx->pc = 0x161e70u;

    // 0x161e70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x161e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x161e74: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x161e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161e78: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x161E78u;
    {
        const bool branch_taken_0x161e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E78u;
        // 0x161e7c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e78) {
            ctx->pc = 0x161DE0u;
            return;
        }
    }
    ctx->pc = 0x161E80u;
}
