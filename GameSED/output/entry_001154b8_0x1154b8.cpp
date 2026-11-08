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

// Function: entry_001154b8
// Address: 0x1154b8 - 0x1154c8
void entry_001154b8_0x1154b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001154b8_0x1154b8");
#endif

    ctx->pc = 0x1154b8u;

    // 0x1154b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1154b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1154bc: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1154bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1154c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1154C0u;
    {
        const bool branch_taken_0x1154c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1154C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154C0u;
        // 0x1154c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154c0) {
            ctx->pc = 0x115498u;
            return;
        }
    }
    ctx->pc = 0x1154C8u;
}
