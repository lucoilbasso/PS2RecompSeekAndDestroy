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

// Function: entry_0017cd98
// Address: 0x17cd98 - 0x17cda8
void entry_0017cd98_0x17cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd98_0x17cd98");
#endif

    ctx->pc = 0x17cd98u;

    // 0x17cd98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd9c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CD9Cu;
    {
        const bool branch_taken_0x17cd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD9Cu;
        // 0x17cda0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd9c) {
            ctx->pc = 0x17CDA8u;
            return;
        }
    }
    ctx->pc = 0x17CDA4u;
    // 0x17cda4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17cda8u;
}
