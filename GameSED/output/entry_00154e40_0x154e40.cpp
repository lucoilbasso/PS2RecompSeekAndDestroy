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

// Function: entry_00154e40
// Address: 0x154e40 - 0x154e58
void entry_00154e40_0x154e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154e40_0x154e40");
#endif

    ctx->pc = 0x154e40u;

    // 0x154e40: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154E40u;
    {
        const bool branch_taken_0x154e40 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x154E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E40u;
        // 0x154e44: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e40) {
            ctx->pc = 0x154E58u;
            return;
        }
    }
    ctx->pc = 0x154E48u;
    // 0x154e48: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x154e4c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x154e50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x154E50u;
    {
        const bool branch_taken_0x154e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E50u;
        // 0x154e54: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e50) {
            ctx->pc = 0x154E80u;
            return;
        }
    }
    ctx->pc = 0x154E58u;
}
