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

// Function: entry_0018d2a0
// Address: 0x18d2a0 - 0x18d2b0
void entry_0018d2a0_0x18d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2a0_0x18d2a0");
#endif

    ctx->pc = 0x18d2a0u;

    // 0x18d2a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18d2a4: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x18D2A4u;
    {
        const bool branch_taken_0x18d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2A4u;
        // 0x18d2a8: 0xa7c20004  sh          $v0, 0x4($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2a4) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D2ACu;
    // 0x18d2ac: 0x0  nop
    ctx->pc = 0x18d2acu;
    // NOP
    ctx->pc = 0x18d2b0u;
}
