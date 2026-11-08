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

// Function: entry_0014a784
// Address: 0x14a784 - 0x14a798
void entry_0014a784_0x14a784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a784_0x14a784");
#endif

    ctx->pc = 0x14a784u;

    // 0x14a784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a788: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a78c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14A78Cu;
    {
        const bool branch_taken_0x14a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A78Cu;
        // 0x14a790: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a78c) {
            ctx->pc = 0x14A758u;
            return;
        }
    }
    ctx->pc = 0x14A794u;
    // 0x14a794: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->pc = 0x14a798u;
}
