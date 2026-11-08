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

// Function: entry_001a0150
// Address: 0x1a0150 - 0x1a0164
void entry_001a0150_0x1a0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0150_0x1a0150");
#endif

    ctx->pc = 0x1a0150u;

    // 0x1a0150: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1a0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0154: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a0154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a0158: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a0158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a015c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A015Cu;
    {
        const bool branch_taken_0x1a015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a015c) {
            ctx->pc = 0x1A0160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A015Cu;
            // 0x1a0160: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0164u;
            return;
        }
    }
    ctx->pc = 0x1A0164u;
}
