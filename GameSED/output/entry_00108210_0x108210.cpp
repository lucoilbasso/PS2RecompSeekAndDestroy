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

// Function: entry_00108210
// Address: 0x108210 - 0x108218
void entry_00108210_0x108210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108210_0x108210");
#endif

    ctx->pc = 0x108210u;

    // 0x108210: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x108210u;
    {
        const bool branch_taken_0x108210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108210u;
        // 0x108214: 0xa4800008  sh          $zero, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108210) {
            ctx->pc = 0x1084F8u;
            return;
        }
    }
    ctx->pc = 0x108218u;
}
