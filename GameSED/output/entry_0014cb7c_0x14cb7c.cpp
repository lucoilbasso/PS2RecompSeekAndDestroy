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

// Function: entry_0014cb7c
// Address: 0x14cb7c - 0x14cb88
void entry_0014cb7c_0x14cb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb7c_0x14cb7c");
#endif

    ctx->pc = 0x14cb7cu;

    // 0x14cb7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB7Cu;
    {
        const bool branch_taken_0x14cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB7Cu;
        // 0x14cb80: 0xacc201bc  sw          $v0, 0x1BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb7c) {
            ctx->pc = 0x14CB8Cu;
            return;
        }
    }
    ctx->pc = 0x14CB84u;
    // 0x14cb84: 0x0  nop
    ctx->pc = 0x14cb84u;
    // NOP
    ctx->pc = 0x14cb88u;
}
