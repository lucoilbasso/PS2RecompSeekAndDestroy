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

// Function: entry_00132170
// Address: 0x132170 - 0x132184
void entry_00132170_0x132170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132170_0x132170");
#endif

    ctx->pc = 0x132170u;

    // 0x132170: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x132170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x132174: 0x28e2002c  slti        $v0, $a3, 0x2C
    ctx->pc = 0x132174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x132178: 0x0  nop
    ctx->pc = 0x132178u;
    // NOP
    // 0x13217c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13217Cu;
    {
        const bool branch_taken_0x13217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13217c) {
            ctx->pc = 0x132180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13217Cu;
            // 0x132180: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132160u;
            return;
        }
    }
    ctx->pc = 0x132184u;
}
