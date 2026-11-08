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

// Function: entry_00108784
// Address: 0x108784 - 0x108790
void entry_00108784_0x108784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108784_0x108784");
#endif

    ctx->pc = 0x108784u;

    // 0x108784: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x108784u;
    {
        const bool branch_taken_0x108784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108784u;
        // 0x108788: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108784) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x10878Cu;
    // 0x10878c: 0x0  nop
    ctx->pc = 0x10878cu;
    // NOP
    ctx->pc = 0x108790u;
}
