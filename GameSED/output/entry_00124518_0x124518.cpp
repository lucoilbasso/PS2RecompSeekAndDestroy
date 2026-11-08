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

// Function: entry_00124518
// Address: 0x124518 - 0x124528
void entry_00124518_0x124518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124518_0x124518");
#endif

    ctx->pc = 0x124518u;

    // 0x124518: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124518u;
    {
        const bool branch_taken_0x124518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x124518) {
            ctx->pc = 0x12451Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124518u;
            // 0x12451c: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12452Cu;
            return;
        }
    }
    ctx->pc = 0x124520u;
    // 0x124520: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x124524: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x124524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    ctx->pc = 0x124528u;
}
