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

// Function: entry_0019ada4
// Address: 0x19ada4 - 0x19adb0
void entry_0019ada4_0x19ada4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ada4_0x19ada4");
#endif

    ctx->pc = 0x19ada4u;

    // 0x19ada4: 0x10e9000a  beq         $a3, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x19ADA4u;
    {
        const bool branch_taken_0x19ada4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADA4u;
        // 0x19ada8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ada4) {
            ctx->pc = 0x19ADD0u;
            return;
        }
    }
    ctx->pc = 0x19ADACu;
    // 0x19adac: 0x0  nop
    ctx->pc = 0x19adacu;
    // NOP
    ctx->pc = 0x19adb0u;
}
