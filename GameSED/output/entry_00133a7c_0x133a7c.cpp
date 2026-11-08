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

// Function: entry_00133a7c
// Address: 0x133a7c - 0x133a88
void entry_00133a7c_0x133a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133a7c_0x133a7c");
#endif

    ctx->pc = 0x133a7cu;

    // 0x133a7c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x133a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x133a80: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x133A80u;
    {
        const bool branch_taken_0x133a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A80u;
        // 0x133a84: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a80) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133A88u;
}
