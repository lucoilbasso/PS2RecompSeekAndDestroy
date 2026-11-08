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

// Function: entry_0014c938
// Address: 0x14c938 - 0x14c94c
void entry_0014c938_0x14c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c938_0x14c938");
#endif

    ctx->pc = 0x14c938u;

    // 0x14c938: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C938u;
    {
        const bool branch_taken_0x14c938 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14c938) {
            ctx->pc = 0x14C93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C938u;
            // 0x14c93c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C95Cu;
            return;
        }
    }
    ctx->pc = 0x14C940u;
    // 0x14c940: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x14c944: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C944u;
    {
        const bool branch_taken_0x14c944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C944u;
        // 0x14c948: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c944) {
            ctx->pc = 0x14C958u;
            return;
        }
    }
    ctx->pc = 0x14C94Cu;
}
