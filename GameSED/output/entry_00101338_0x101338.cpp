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

// Function: entry_00101338
// Address: 0x101338 - 0x101348
void entry_00101338_0x101338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101338_0x101338");
#endif

    ctx->pc = 0x101338u;

    // 0x101338: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10133c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10133Cu;
    {
        const bool branch_taken_0x10133c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10133c) {
            ctx->pc = 0x10136Cu;
            return;
        }
    }
    ctx->pc = 0x101344u;
    // 0x101344: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x101348u;
}
