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

// Function: entry_00154f48
// Address: 0x154f48 - 0x154f58
void entry_00154f48_0x154f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154f48_0x154f48");
#endif

    ctx->pc = 0x154f48u;

    // 0x154f48: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x154f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x154f4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x154F4Cu;
    {
        const bool branch_taken_0x154f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F4Cu;
        // 0x154f50: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f4c) {
            ctx->pc = 0x154FB0u;
            return;
        }
    }
    ctx->pc = 0x154F54u;
    // 0x154f54: 0x0  nop
    ctx->pc = 0x154f54u;
    // NOP
    ctx->pc = 0x154f58u;
}
