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

// Function: entry_0018f334
// Address: 0x18f334 - 0x18f34c
void entry_0018f334_0x18f334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f334_0x18f334");
#endif

    ctx->pc = 0x18f334u;

    // 0x18f334: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x18f338: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x18f338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x18f33c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f340: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F340u;
    {
        const bool branch_taken_0x18f340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F340u;
        // 0x18f344: 0xae020168  sw          $v0, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f340) {
            ctx->pc = 0x18F34Cu;
            return;
        }
    }
    ctx->pc = 0x18F348u;
    // 0x18f348: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18f34cu;
}
