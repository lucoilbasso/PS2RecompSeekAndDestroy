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

// Function: entry_0019abcc
// Address: 0x19abcc - 0x19abd8
void entry_0019abcc_0x19abcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abcc_0x19abcc");
#endif

    ctx->pc = 0x19abccu;

    // 0x19abcc: 0x10a7000a  beq         $a1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x19ABCCu;
    {
        const bool branch_taken_0x19abcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x19ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABCCu;
        // 0x19abd0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abcc) {
            ctx->pc = 0x19ABF8u;
            return;
        }
    }
    ctx->pc = 0x19ABD4u;
    // 0x19abd4: 0x0  nop
    ctx->pc = 0x19abd4u;
    // NOP
    ctx->pc = 0x19abd8u;
}
