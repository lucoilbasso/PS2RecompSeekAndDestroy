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

// Function: entry_0017d644
// Address: 0x17d644 - 0x17d65c
void entry_0017d644_0x17d644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d644_0x17d644");
#endif

    ctx->pc = 0x17d644u;

    // 0x17d644: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d64c: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x17d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x17d650: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D650u;
    {
        const bool branch_taken_0x17d650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D650u;
        // 0x17d654: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d650) {
            ctx->pc = 0x17D65Cu;
            return;
        }
    }
    ctx->pc = 0x17D658u;
    // 0x17d658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17d65cu;
}
