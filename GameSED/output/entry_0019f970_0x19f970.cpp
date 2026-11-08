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

// Function: entry_0019f970
// Address: 0x19f970 - 0x19f98c
void entry_0019f970_0x19f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f970_0x19f970");
#endif

    ctx->pc = 0x19f970u;

    // 0x19f970: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x19f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x19f974: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19f974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19f978: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f97c: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x19f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x19f980: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19F980u;
    {
        const bool branch_taken_0x19f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F980u;
        // 0x19f984: 0x881024  and         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f980) {
            ctx->pc = 0x19F958u;
            return;
        }
    }
    ctx->pc = 0x19F988u;
    // 0x19f988: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f98cu;
}
