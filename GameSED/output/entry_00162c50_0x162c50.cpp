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

// Function: entry_00162c50
// Address: 0x162c50 - 0x162c68
void entry_00162c50_0x162c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c50_0x162c50");
#endif

    ctx->pc = 0x162c50u;

    // 0x162c50: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C50u;
    {
        const bool branch_taken_0x162c50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x162c50) {
            ctx->pc = 0x162C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162C50u;
            // 0x162c54: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162C68u;
            return;
        }
    }
    ctx->pc = 0x162C58u;
    // 0x162c58: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x162c5c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162c60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x162C60u;
    {
        const bool branch_taken_0x162c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C60u;
        // 0x162c64: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c60) {
            ctx->pc = 0x162C90u;
            return;
        }
    }
    ctx->pc = 0x162C68u;
}
