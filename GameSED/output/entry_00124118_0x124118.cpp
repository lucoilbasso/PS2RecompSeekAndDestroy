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

// Function: entry_00124118
// Address: 0x124118 - 0x12412c
void entry_00124118_0x124118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124118_0x124118");
#endif

    ctx->pc = 0x124118u;

    // 0x124118: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x124118u;
    {
        const bool branch_taken_0x124118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124118) {
            ctx->pc = 0x12411Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124118u;
            // 0x12411c: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12412Cu;
            return;
        }
    }
    ctx->pc = 0x124120u;
    // 0x124120: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x124120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x124124: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x124124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x124128: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x124128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->pc = 0x12412cu;
}
