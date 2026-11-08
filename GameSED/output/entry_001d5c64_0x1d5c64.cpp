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

// Function: entry_001d5c64
// Address: 0x1d5c64 - 0x1d5c6c
void entry_001d5c64_0x1d5c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c64_0x1d5c64");
#endif

    ctx->pc = 0x1d5c64u;

    // 0x1d5c64: 0x5500fff6  bnel        $t0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D5C64u;
    {
        const bool branch_taken_0x1d5c64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c64) {
            ctx->pc = 0x1D5C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5C64u;
            // 0x1d5c68: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5C40u;
            return;
        }
    }
    ctx->pc = 0x1D5C6Cu;
}
