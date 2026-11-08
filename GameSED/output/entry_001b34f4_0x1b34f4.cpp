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

// Function: entry_001b34f4
// Address: 0x1b34f4 - 0x1b3508
void entry_001b34f4_0x1b34f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b34f4_0x1b34f4");
#endif

    ctx->pc = 0x1b34f4u;

    // 0x1b34f4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B34F4u;
    {
        const bool branch_taken_0x1b34f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34F4u;
        // 0x1b34f8: 0x8e839a48  lw          $v1, -0x65B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34f4) {
            ctx->pc = 0x1B3508u;
            return;
        }
    }
    ctx->pc = 0x1B34FCu;
    // 0x1b34fc: 0x8e829a48  lw          $v0, -0x65B8($s4)
    ctx->pc = 0x1b34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941256)));
    // 0x1b3500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3500u;
    {
        const bool branch_taken_0x1b3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3500u;
        // 0x1b3504: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3500) {
            ctx->pc = 0x1B3510u;
            return;
        }
    }
    ctx->pc = 0x1B3508u;
}
