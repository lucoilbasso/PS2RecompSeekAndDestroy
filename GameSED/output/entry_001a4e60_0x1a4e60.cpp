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

// Function: entry_001a4e60
// Address: 0x1a4e60 - 0x1a4e70
void entry_001a4e60_0x1a4e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e60_0x1a4e60");
#endif

    ctx->pc = 0x1a4e60u;

    // 0x1a4e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4e64: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4E64u;
    {
        const bool branch_taken_0x1a4e64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E64u;
        // 0x1a4e68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e64) {
            ctx->pc = 0x1A4E70u;
            return;
        }
    }
    ctx->pc = 0x1A4E6Cu;
    // 0x1a4e6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1a4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1a4e70u;
}
