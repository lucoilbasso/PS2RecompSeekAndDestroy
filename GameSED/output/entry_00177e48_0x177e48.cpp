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

// Function: entry_00177e48
// Address: 0x177e48 - 0x177e50
void entry_00177e48_0x177e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e48_0x177e48");
#endif

    ctx->pc = 0x177e48u;

    // 0x177e48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177E48u;
    {
        const bool branch_taken_0x177e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E48u;
        // 0x177e4c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e48) {
            ctx->pc = 0x177E5Cu;
            return;
        }
    }
    ctx->pc = 0x177E50u;
}
