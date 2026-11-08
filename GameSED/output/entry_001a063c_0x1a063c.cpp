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

// Function: entry_001a063c
// Address: 0x1a063c - 0x1a0650
void entry_001a063c_0x1a063c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a063c_0x1a063c");
#endif

    ctx->pc = 0x1a063cu;

    // 0x1a063c: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x1a063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x1a0640: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a0644: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A0644u;
    {
        const bool branch_taken_0x1a0644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0644u;
        // 0x1a0648: 0x2454d8d0  addiu       $s4, $v0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0644) {
            ctx->pc = 0x1A0708u;
            return;
        }
    }
    ctx->pc = 0x1A064Cu;
    // 0x1a064c: 0x0  nop
    ctx->pc = 0x1a064cu;
    // NOP
    ctx->pc = 0x1a0650u;
}
