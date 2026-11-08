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

// Function: entry_0016738c
// Address: 0x16738c - 0x167398
void entry_0016738c_0x16738c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016738c_0x16738c");
#endif

    ctx->pc = 0x16738cu;

    // 0x16738c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16738Cu;
    {
        const bool branch_taken_0x16738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16738Cu;
        // 0x167390: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16738c) {
            ctx->pc = 0x1673ACu;
            return;
        }
    }
    ctx->pc = 0x167394u;
    // 0x167394: 0x0  nop
    ctx->pc = 0x167394u;
    // NOP
    ctx->pc = 0x167398u;
}
