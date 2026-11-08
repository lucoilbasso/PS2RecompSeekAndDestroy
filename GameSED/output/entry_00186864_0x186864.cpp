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

// Function: entry_00186864
// Address: 0x186864 - 0x186878
void entry_00186864_0x186864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186864_0x186864");
#endif

    ctx->pc = 0x186864u;

    // 0x186864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186868: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186868u;
    {
        const bool branch_taken_0x186868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x186868) {
            ctx->pc = 0x186880u;
            return;
        }
    }
    ctx->pc = 0x186870u;
    // 0x186870: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x186870u;
    {
        const bool branch_taken_0x186870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186870u;
        // 0x186874: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186870) {
            ctx->pc = 0x1868A4u;
            return;
        }
    }
    ctx->pc = 0x186878u;
}
