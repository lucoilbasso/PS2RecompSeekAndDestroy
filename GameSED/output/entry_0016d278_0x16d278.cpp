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

// Function: entry_0016d278
// Address: 0x16d278 - 0x16d290
void entry_0016d278_0x16d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d278_0x16d278");
#endif

    ctx->pc = 0x16d278u;

    // 0x16d278: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D278u;
    {
        const bool branch_taken_0x16d278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d278) {
            ctx->pc = 0x16D27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D278u;
            // 0x16d27c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D290u;
            return;
        }
    }
    ctx->pc = 0x16D280u;
    // 0x16d280: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16d284: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16d288: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16D288u;
    {
        const bool branch_taken_0x16d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D288u;
        // 0x16d28c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d288) {
            ctx->pc = 0x16D2B4u;
            return;
        }
    }
    ctx->pc = 0x16D290u;
}
