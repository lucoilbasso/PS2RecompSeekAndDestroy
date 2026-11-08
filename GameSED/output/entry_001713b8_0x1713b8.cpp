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

// Function: entry_001713b8
// Address: 0x1713b8 - 0x1713c4
void entry_001713b8_0x1713b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713b8_0x1713b8");
#endif

    ctx->pc = 0x1713b8u;

    // 0x1713b8: 0xa9282a  slt         $a1, $a1, $t1
    ctx->pc = 0x1713b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1713bc: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1713BCu;
    {
        const bool branch_taken_0x1713bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713BCu;
        // 0x1713c0: 0x8d020044  lw          $v0, 0x44($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713bc) {
            ctx->pc = 0x1713E0u;
            return;
        }
    }
    ctx->pc = 0x1713C4u;
}
