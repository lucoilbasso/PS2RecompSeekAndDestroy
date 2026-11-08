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

// Function: entry_001154c8
// Address: 0x1154c8 - 0x1154d8
void entry_001154c8_0x1154c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001154c8_0x1154c8");
#endif

    ctx->pc = 0x1154c8u;

    // 0x1154c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1154c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1154cc: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1154ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1154d0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1154D0u;
    {
        const bool branch_taken_0x1154d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1154D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154D0u;
        // 0x1154d4: 0x240224d0  addiu       $v0, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154d0) {
            ctx->pc = 0x1153C0u;
            return;
        }
    }
    ctx->pc = 0x1154D8u;
}
