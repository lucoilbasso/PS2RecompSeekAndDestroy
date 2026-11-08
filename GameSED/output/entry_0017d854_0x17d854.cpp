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

// Function: entry_0017d854
// Address: 0x17d854 - 0x17d868
void entry_0017d854_0x17d854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d854_0x17d854");
#endif

    ctx->pc = 0x17d854u;

    // 0x17d854: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x17D854u;
    {
        const bool branch_taken_0x17d854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d854) {
            ctx->pc = 0x17D88Cu;
            return;
        }
    }
    ctx->pc = 0x17D85Cu;
    // 0x17d85c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D85Cu;
    {
        const bool branch_taken_0x17d85c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D85Cu;
        // 0x17d860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d85c) {
            ctx->pc = 0x17D868u;
            return;
        }
    }
    ctx->pc = 0x17D864u;
    // 0x17d864: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x17d868u;
}
