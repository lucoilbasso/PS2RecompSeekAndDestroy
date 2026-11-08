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

// Function: entry_00149030
// Address: 0x149030 - 0x149038
void entry_00149030_0x149030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149030_0x149030");
#endif

    ctx->pc = 0x149030u;

    // 0x149030: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x149030u;
    {
        const bool branch_taken_0x149030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x149034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149030u;
        // 0x149034: 0x24420370  addiu       $v0, $v0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149030) {
            ctx->pc = 0x14903Cu;
            return;
        }
    }
    ctx->pc = 0x149038u;
}
