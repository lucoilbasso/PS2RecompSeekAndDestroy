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

// Function: entry_00103834
// Address: 0x103834 - 0x10383c
void entry_00103834_0x103834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103834_0x103834");
#endif

    ctx->pc = 0x103834u;

    // 0x103834: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x103834u;
    {
        const bool branch_taken_0x103834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x103834) {
            ctx->pc = 0x103838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103834u;
            // 0x103838: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1037C8u;
            return;
        }
    }
    ctx->pc = 0x10383Cu;
}
