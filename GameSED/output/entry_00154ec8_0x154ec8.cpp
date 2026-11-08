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

// Function: entry_00154ec8
// Address: 0x154ec8 - 0x154ee0
void entry_00154ec8_0x154ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154ec8_0x154ec8");
#endif

    ctx->pc = 0x154ec8u;

    // 0x154ec8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154EC8u;
    {
        const bool branch_taken_0x154ec8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x154ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EC8u;
        // 0x154ecc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ec8) {
            ctx->pc = 0x154EE0u;
            return;
        }
    }
    ctx->pc = 0x154ED0u;
    // 0x154ed0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x154ed4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x154ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x154ed8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x154ED8u;
    {
        const bool branch_taken_0x154ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ED8u;
        // 0x154edc: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ed8) {
            ctx->pc = 0x154F08u;
            return;
        }
    }
    ctx->pc = 0x154EE0u;
}
