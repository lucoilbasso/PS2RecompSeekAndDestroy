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

// Function: entry_001a0164
// Address: 0x1a0164 - 0x1a0174
void entry_001a0164_0x1a0164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0164_0x1a0164");
#endif

    ctx->pc = 0x1a0164u;

    // 0x1a0164: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1a0164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0168: 0x0  nop
    ctx->pc = 0x1a0168u;
    // NOP
    // 0x1a016c: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A016Cu;
    {
        const bool branch_taken_0x1a016c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a016c) {
            ctx->pc = 0x1A0170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A016Cu;
            // 0x1a0170: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0150u;
            return;
        }
    }
    ctx->pc = 0x1A0174u;
}
