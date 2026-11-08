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

// Function: entry_00154f78
// Address: 0x154f78 - 0x154f88
void entry_00154f78_0x154f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154f78_0x154f78");
#endif

    ctx->pc = 0x154f78u;

    // 0x154f78: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x154f7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x154F7Cu;
    {
        const bool branch_taken_0x154f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F7Cu;
        // 0x154f80: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f7c) {
            ctx->pc = 0x154FB0u;
            return;
        }
    }
    ctx->pc = 0x154F84u;
    // 0x154f84: 0x0  nop
    ctx->pc = 0x154f84u;
    // NOP
    ctx->pc = 0x154f88u;
}
