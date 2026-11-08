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

// Function: entry_001787bc
// Address: 0x1787bc - 0x1787c4
void entry_001787bc_0x1787bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001787bc_0x1787bc");
#endif

    ctx->pc = 0x1787bcu;

    // 0x1787bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1787BCu;
    {
        const bool branch_taken_0x1787bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1787C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787BCu;
        // 0x1787c0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787bc) {
            ctx->pc = 0x1787D0u;
            return;
        }
    }
    ctx->pc = 0x1787C4u;
}
