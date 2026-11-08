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

// Function: entry_00168e84
// Address: 0x168e84 - 0x168e90
void entry_00168e84_0x168e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e84_0x168e84");
#endif

    ctx->pc = 0x168e84u;

    // 0x168e84: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x168E84u;
    {
        const bool branch_taken_0x168e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E84u;
        // 0x168e88: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e84) {
            ctx->pc = 0x1690D8u;
            return;
        }
    }
    ctx->pc = 0x168E8Cu;
    // 0x168e8c: 0x0  nop
    ctx->pc = 0x168e8cu;
    // NOP
    ctx->pc = 0x168e90u;
}
