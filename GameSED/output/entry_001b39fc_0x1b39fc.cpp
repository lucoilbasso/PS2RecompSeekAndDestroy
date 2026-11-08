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

// Function: entry_001b39fc
// Address: 0x1b39fc - 0x1b3a0c
void entry_001b39fc_0x1b39fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b39fc_0x1b39fc");
#endif

    ctx->pc = 0x1b39fcu;

    // 0x1b39fc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B39FCu;
    {
        const bool branch_taken_0x1b39fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39FCu;
        // 0x1b3a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39fc) {
            ctx->pc = 0x1B3A0Cu;
            return;
        }
    }
    ctx->pc = 0x1B3A04u;
    // 0x1b3a04: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1b3a04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a08: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1b3a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->pc = 0x1b3a0cu;
}
