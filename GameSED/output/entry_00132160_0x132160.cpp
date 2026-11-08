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

// Function: entry_00132160
// Address: 0x132160 - 0x132170
void entry_00132160_0x132160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132160_0x132160");
#endif

    ctx->pc = 0x132160u;

    // 0x132160: 0x24c60048  addiu       $a2, $a2, 0x48
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x132164: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x132164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x132168: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132168u;
    {
        const bool branch_taken_0x132168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132168u;
        // 0x13216c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132168) {
            ctx->pc = 0x132188u;
            return;
        }
    }
    ctx->pc = 0x132170u;
}
