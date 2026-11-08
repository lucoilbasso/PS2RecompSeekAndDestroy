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

// Function: entry_0015df78
// Address: 0x15df78 - 0x15df90
void entry_0015df78_0x15df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df78_0x15df78");
#endif

    ctx->pc = 0x15df78u;

    // 0x15df78: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15df7c: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15df80: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15DF80u;
    {
        const bool branch_taken_0x15df80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15df80) {
            ctx->pc = 0x15DF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DF80u;
            // 0x15df84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DFB8u;
            return;
        }
    }
    ctx->pc = 0x15DF88u;
    // 0x15df88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df8c: 0x0  nop
    ctx->pc = 0x15df8cu;
    // NOP
    ctx->pc = 0x15df90u;
}
