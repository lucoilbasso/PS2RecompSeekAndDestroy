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

// Function: entry_00101f58
// Address: 0x101f58 - 0x101f68
void entry_00101f58_0x101f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f58_0x101f58");
#endif

    ctx->pc = 0x101f58u;

    // 0x101f58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x101f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x101f5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x101F5Cu;
    {
        const bool branch_taken_0x101f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F5Cu;
        // 0x101f60: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f5c) {
            ctx->pc = 0x101F88u;
            return;
        }
    }
    ctx->pc = 0x101F64u;
    // 0x101f64: 0x0  nop
    ctx->pc = 0x101f64u;
    // NOP
    ctx->pc = 0x101f68u;
}
