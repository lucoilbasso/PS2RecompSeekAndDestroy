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

// Function: entry_00133a6c
// Address: 0x133a6c - 0x133a7c
void entry_00133a6c_0x133a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133a6c_0x133a6c");
#endif

    ctx->pc = 0x133a6cu;

    // 0x133a6c: 0x9082402c  lbu         $v0, 0x402C($a0)
    ctx->pc = 0x133a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16428)));
    // 0x133a70: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x133A70u;
    {
        const bool branch_taken_0x133a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a70) {
            ctx->pc = 0x133A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A70u;
            // 0x133a74: 0x8c82402c  lw          $v0, 0x402C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A7Cu;
            return;
        }
    }
    ctx->pc = 0x133A78u;
    // 0x133a78: 0x8c824018  lw          $v0, 0x4018($a0)
    ctx->pc = 0x133a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16408)));
    ctx->pc = 0x133a7cu;
}
