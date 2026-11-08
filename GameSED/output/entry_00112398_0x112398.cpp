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

// Function: entry_00112398
// Address: 0x112398 - 0x1123a8
void entry_00112398_0x112398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112398_0x112398");
#endif

    ctx->pc = 0x112398u;

    // 0x112398: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112398u;
    {
        const bool branch_taken_0x112398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112398) {
            ctx->pc = 0x1123A8u;
            return;
        }
    }
    ctx->pc = 0x1123A0u;
    // 0x1123a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1123A0u;
    {
        const bool branch_taken_0x1123a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123A0u;
        // 0x1123a4: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123a0) {
            ctx->pc = 0x1123E4u;
            return;
        }
    }
    ctx->pc = 0x1123A8u;
}
