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

// Function: entry_0018e5e8
// Address: 0x18e5e8 - 0x18e5f8
void entry_0018e5e8_0x18e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e5e8_0x18e5e8");
#endif

    ctx->pc = 0x18e5e8u;

    // 0x18e5e8: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e5ec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E5ECu;
    {
        const bool branch_taken_0x18e5ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5ECu;
        // 0x18e5f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5ec) {
            ctx->pc = 0x18E61Cu;
            return;
        }
    }
    ctx->pc = 0x18E5F4u;
    // 0x18e5f4: 0xa2027  nor         $a0, $zero, $t2
    ctx->pc = 0x18e5f4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    ctx->pc = 0x18e5f8u;
}
