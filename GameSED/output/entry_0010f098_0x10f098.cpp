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

// Function: entry_0010f098
// Address: 0x10f098 - 0x10f0b0
void entry_0010f098_0x10f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f098_0x10f098");
#endif

    ctx->pc = 0x10f098u;

    // 0x10f098: 0x6430005  bgezl       $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F098u;
    {
        const bool branch_taken_0x10f098 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x10f098) {
            ctx->pc = 0x10F09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F098u;
            // 0x10f09c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F0B0u;
            return;
        }
    }
    ctx->pc = 0x10F0A0u;
    // 0x10f0a0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x10f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x10f0a4: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x10f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x10f0a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10F0A8u;
    {
        const bool branch_taken_0x10f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0A8u;
        // 0x10f0ac: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0a8) {
            ctx->pc = 0x10F0D4u;
            return;
        }
    }
    ctx->pc = 0x10F0B0u;
}
