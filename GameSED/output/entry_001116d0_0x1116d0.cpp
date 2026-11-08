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

// Function: entry_001116d0
// Address: 0x1116d0 - 0x1116e8
void entry_001116d0_0x1116d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116d0_0x1116d0");
#endif

    ctx->pc = 0x1116d0u;

    // 0x1116d0: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x1116d4: 0x2694f730  addiu       $s4, $s4, -0x8D0
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965040));
    // 0x1116d8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1116d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1116dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1116DCu;
    {
        const bool branch_taken_0x1116dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116DCu;
        // 0x1116e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116dc) {
            ctx->pc = 0x1117A8u;
            return;
        }
    }
    ctx->pc = 0x1116E4u;
    // 0x1116e4: 0x0  nop
    ctx->pc = 0x1116e4u;
    // NOP
    ctx->pc = 0x1116e8u;
}
