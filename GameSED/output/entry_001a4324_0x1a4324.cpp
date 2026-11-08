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

// Function: entry_001a4324
// Address: 0x1a4324 - 0x1a433c
void entry_001a4324_0x1a4324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4324_0x1a4324");
#endif

    ctx->pc = 0x1a4324u;

    // 0x1a4324: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A4324u;
    {
        const bool branch_taken_0x1a4324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4324u;
        // 0x1a4328: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4324) {
            ctx->pc = 0x1A4388u;
            return;
        }
    }
    ctx->pc = 0x1A432Cu;
    // 0x1a432c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4330: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4330u;
    {
        const bool branch_taken_0x1a4330 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4330u;
        // 0x1a4334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4330) {
            ctx->pc = 0x1A433Cu;
            return;
        }
    }
    ctx->pc = 0x1A4338u;
    // 0x1a4338: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1a433cu;
}
