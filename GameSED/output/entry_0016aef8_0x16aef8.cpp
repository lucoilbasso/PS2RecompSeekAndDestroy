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

// Function: entry_0016aef8
// Address: 0x16aef8 - 0x16af08
void entry_0016aef8_0x16aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aef8_0x16aef8");
#endif

    ctx->pc = 0x16aef8u;

    // 0x16aef8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16aefc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x16aefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16af00: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x16AF00u;
    {
        const bool branch_taken_0x16af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af00) {
            ctx->pc = 0x16AF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AF00u;
            // 0x16af04: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AE98u;
            return;
        }
    }
    ctx->pc = 0x16AF08u;
}
