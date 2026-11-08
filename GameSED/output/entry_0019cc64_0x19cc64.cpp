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

// Function: entry_0019cc64
// Address: 0x19cc64 - 0x19cc74
void entry_0019cc64_0x19cc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc64_0x19cc64");
#endif

    ctx->pc = 0x19cc64u;

    // 0x19cc64: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CC64u;
    {
        const bool branch_taken_0x19cc64 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC64u;
        // 0x19cc68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc64) {
            ctx->pc = 0x19CC74u;
            return;
        }
    }
    ctx->pc = 0x19CC6Cu;
    // 0x19cc6c: 0x50e00002  beql        $a3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC6Cu;
    {
        const bool branch_taken_0x19cc6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc6c) {
            ctx->pc = 0x19CC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC6Cu;
            // 0x19cc70: 0xa04d0000  sb          $t5, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC78u;
            return;
        }
    }
    ctx->pc = 0x19CC74u;
}
