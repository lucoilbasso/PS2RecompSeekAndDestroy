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

// Function: entry_00116a00
// Address: 0x116a00 - 0x116a0c
void entry_00116a00_0x116a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a00_0x116a00");
#endif

    ctx->pc = 0x116a00u;

    // 0x116a00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x116a04: 0x1457ffb4  bne         $v0, $s7, . + 4 + (-0x4C << 2)
    ctx->pc = 0x116A04u;
    {
        const bool branch_taken_0x116a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x116A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A04u;
        // 0x116a08: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a04) {
            ctx->pc = 0x1168D8u;
            return;
        }
    }
    ctx->pc = 0x116A0Cu;
}
