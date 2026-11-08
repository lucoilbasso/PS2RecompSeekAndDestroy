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

// Function: entry_0017d690
// Address: 0x17d690 - 0x17d6a0
void entry_0017d690_0x17d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d690_0x17d690");
#endif

    ctx->pc = 0x17d690u;

    // 0x17d690: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d694: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D694u;
    {
        const bool branch_taken_0x17d694 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D694u;
        // 0x17d698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d694) {
            ctx->pc = 0x17D6C4u;
            return;
        }
    }
    ctx->pc = 0x17D69Cu;
    // 0x17d69c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x17d6a0u;
}
