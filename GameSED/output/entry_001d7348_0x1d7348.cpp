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

// Function: entry_001d7348
// Address: 0x1d7348 - 0x1d7358
void entry_001d7348_0x1d7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7348_0x1d7348");
#endif

    ctx->pc = 0x1d7348u;

    // 0x1d7348: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d734c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D734Cu;
    {
        const bool branch_taken_0x1d734c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D734Cu;
        // 0x1d7350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d734c) {
            ctx->pc = 0x1D737Cu;
            return;
        }
    }
    ctx->pc = 0x1D7354u;
    // 0x1d7354: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1d7354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x1d7358u;
}
