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

// Function: entry_001b44c0
// Address: 0x1b44c0 - 0x1b44d4
void entry_001b44c0_0x1b44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44c0_0x1b44c0");
#endif

    ctx->pc = 0x1b44c0u;

    // 0x1b44c0: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B44C0u;
    {
        const bool branch_taken_0x1b44c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b44c0) {
            ctx->pc = 0x1B44C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B44C0u;
            // 0x1b44c4: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B44D4u;
            return;
        }
    }
    ctx->pc = 0x1B44C8u;
    // 0x1b44c8: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1b44c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b44cc: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1b44ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b44d0: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1b44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
    ctx->pc = 0x1b44d4u;
}
