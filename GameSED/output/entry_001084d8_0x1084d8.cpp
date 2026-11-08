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

// Function: entry_001084d8
// Address: 0x1084d8 - 0x1084e8
void entry_001084d8_0x1084d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084d8_0x1084d8");
#endif

    ctx->pc = 0x1084d8u;

    // 0x1084d8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1084d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1084dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1084DCu;
    {
        const bool branch_taken_0x1084dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084DCu;
        // 0x1084e0: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084dc) {
            ctx->pc = 0x1084F8u;
            return;
        }
    }
    ctx->pc = 0x1084E4u;
    // 0x1084e4: 0x0  nop
    ctx->pc = 0x1084e4u;
    // NOP
    ctx->pc = 0x1084e8u;
}
