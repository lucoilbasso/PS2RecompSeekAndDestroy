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

// Function: entry_00138ab0
// Address: 0x138ab0 - 0x138abc
void entry_00138ab0_0x138ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ab0_0x138ab0");
#endif

    ctx->pc = 0x138ab0u;

    // 0x138ab0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x138ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ab4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138AB4u;
    {
        const bool branch_taken_0x138ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x138AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB4u;
        // 0x138ab8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ab4) {
            ctx->pc = 0x138AD8u;
            return;
        }
    }
    ctx->pc = 0x138ABCu;
}
