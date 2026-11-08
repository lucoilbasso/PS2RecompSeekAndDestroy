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

// Function: entry_0016778c
// Address: 0x16778c - 0x167798
void entry_0016778c_0x16778c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016778c_0x16778c");
#endif

    ctx->pc = 0x16778cu;

    // 0x16778c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x16778Cu;
    {
        const bool branch_taken_0x16778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16778Cu;
        // 0x167790: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16778c) {
            ctx->pc = 0x167950u;
            return;
        }
    }
    ctx->pc = 0x167794u;
    // 0x167794: 0x0  nop
    ctx->pc = 0x167794u;
    // NOP
    ctx->pc = 0x167798u;
}
