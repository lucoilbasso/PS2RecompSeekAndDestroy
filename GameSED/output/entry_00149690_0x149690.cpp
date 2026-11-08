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

// Function: entry_00149690
// Address: 0x149690 - 0x1496a0
void entry_00149690_0x149690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149690_0x149690");
#endif

    ctx->pc = 0x149690u;

    // 0x149690: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149694u;
    {
        const bool branch_taken_0x149694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149694u;
        // 0x149698: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149694) {
            ctx->pc = 0x1496A4u;
            return;
        }
    }
    ctx->pc = 0x14969Cu;
    // 0x14969c: 0x0  nop
    ctx->pc = 0x14969cu;
    // NOP
    ctx->pc = 0x1496a0u;
}
