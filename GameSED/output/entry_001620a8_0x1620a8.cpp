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

// Function: entry_001620a8
// Address: 0x1620a8 - 0x1620b8
void entry_001620a8_0x1620a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620a8_0x1620a8");
#endif

    ctx->pc = 0x1620a8u;

    // 0x1620a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1620ac: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1620acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1620b0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1620B0u;
    {
        const bool branch_taken_0x1620b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B0u;
        // 0x1620b4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b0) {
            ctx->pc = 0x162018u;
            return;
        }
    }
    ctx->pc = 0x1620B8u;
}
