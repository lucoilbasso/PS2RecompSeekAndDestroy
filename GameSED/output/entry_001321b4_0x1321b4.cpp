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

// Function: entry_001321b4
// Address: 0x1321b4 - 0x1321c0
void entry_001321b4_0x1321b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001321b4_0x1321b4");
#endif

    ctx->pc = 0x1321b4u;

    // 0x1321b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1321B4u;
    {
        const bool branch_taken_0x1321b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1321B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321B4u;
        // 0x1321b8: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321b4) {
            ctx->pc = 0x1321C8u;
            return;
        }
    }
    ctx->pc = 0x1321BCu;
    // 0x1321bc: 0x0  nop
    ctx->pc = 0x1321bcu;
    // NOP
    ctx->pc = 0x1321c0u;
}
