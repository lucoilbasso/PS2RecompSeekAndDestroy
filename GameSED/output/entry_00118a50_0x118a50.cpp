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

// Function: entry_00118a50
// Address: 0x118a50 - 0x118a60
void entry_00118a50_0x118a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118a50_0x118a50");
#endif

    ctx->pc = 0x118a50u;

    // 0x118a50: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x118a54: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118A54u;
    {
        const bool branch_taken_0x118a54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x118A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A54u;
        // 0x118a58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a54) {
            ctx->pc = 0x118A88u;
            return;
        }
    }
    ctx->pc = 0x118A5Cu;
    // 0x118a5c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x118a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118a60u;
}
