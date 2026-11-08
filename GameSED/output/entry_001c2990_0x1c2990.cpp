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

// Function: entry_001c2990
// Address: 0x1c2990 - 0x1c29a8
void entry_001c2990_0x1c2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2990_0x1c2990");
#endif

    ctx->pc = 0x1c2990u;

    // 0x1c2990: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2990u;
    {
        const bool branch_taken_0x1c2990 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1C2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2990u;
        // 0x1c2994: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2990) {
            ctx->pc = 0x1C29F8u;
            return;
        }
    }
    ctx->pc = 0x1C2998u;
    // 0x1c2998: 0x2635018c  addiu       $s5, $s1, 0x18C
    ctx->pc = 0x1c2998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x1c299c: 0x26340198  addiu       $s4, $s1, 0x198
    ctx->pc = 0x1c299cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
    // 0x1c29a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29a4: 0x0  nop
    ctx->pc = 0x1c29a4u;
    // NOP
    ctx->pc = 0x1c29a8u;
}
