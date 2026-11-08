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

// Function: entry_0011e270
// Address: 0x11e270 - 0x11e280
void entry_0011e270_0x11e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e270_0x11e270");
#endif

    ctx->pc = 0x11e270u;

    // 0x11e270: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E270u;
    {
        const bool branch_taken_0x11e270 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E270u;
        // 0x11e274: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e270) {
            ctx->pc = 0x11E290u;
            return;
        }
    }
    ctx->pc = 0x11E278u;
    // 0x11e278: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11E278u;
    {
        const bool branch_taken_0x11e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E278u;
        // 0x11e27c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e278) {
            ctx->pc = 0x11E304u;
            return;
        }
    }
    ctx->pc = 0x11E280u;
}
