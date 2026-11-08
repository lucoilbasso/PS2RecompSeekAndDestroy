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

// Function: entry_00161a7c
// Address: 0x161a7c - 0x161a84
void entry_00161a7c_0x161a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a7c_0x161a7c");
#endif

    ctx->pc = 0x161a7cu;

    // 0x161a7c: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161A7Cu;
    {
        const bool branch_taken_0x161a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A7Cu;
        // 0x161a80: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a7c) {
            ctx->pc = 0x161A00u;
            return;
        }
    }
    ctx->pc = 0x161A84u;
}
