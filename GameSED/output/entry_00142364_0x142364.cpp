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

// Function: entry_00142364
// Address: 0x142364 - 0x142370
void entry_00142364_0x142364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142364_0x142364");
#endif

    ctx->pc = 0x142364u;

    // 0x142364: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x142364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142368: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142368u;
    {
        const bool branch_taken_0x142368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x14236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142368u;
        // 0x14236c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142368) {
            ctx->pc = 0x142380u;
            return;
        }
    }
    ctx->pc = 0x142370u;
}
