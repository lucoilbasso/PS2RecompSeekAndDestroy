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

// Function: entry_001b3bc4
// Address: 0x1b3bc4 - 0x1b3bd8
void entry_001b3bc4_0x1b3bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3bc4_0x1b3bc4");
#endif

    ctx->pc = 0x1b3bc4u;

    // 0x1b3bc4: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3BC4u;
    {
        const bool branch_taken_0x1b3bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b3bc4) {
            ctx->pc = 0x1B3BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3BC4u;
            // 0x1b3bc8: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3BD8u;
            return;
        }
    }
    ctx->pc = 0x1B3BCCu;
    // 0x1b3bcc: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1b3bccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3bd0: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b3bd4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1b3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
    ctx->pc = 0x1b3bd8u;
}
