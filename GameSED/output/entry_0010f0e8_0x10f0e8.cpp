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

// Function: entry_0010f0e8
// Address: 0x10f0e8 - 0x10f100
void entry_0010f0e8_0x10f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f0e8_0x10f0e8");
#endif

    ctx->pc = 0x10f0e8u;

    // 0x10f0e8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F0E8u;
    {
        const bool branch_taken_0x10f0e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10f0e8) {
            ctx->pc = 0x10F0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F0E8u;
            // 0x10f0ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F100u;
            return;
        }
    }
    ctx->pc = 0x10F0F0u;
    // 0x10f0f0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x10f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x10f0f4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x10f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x10f0f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10F0F8u;
    {
        const bool branch_taken_0x10f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F8u;
        // 0x10f0fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0f8) {
            ctx->pc = 0x10F124u;
            return;
        }
    }
    ctx->pc = 0x10F100u;
}
