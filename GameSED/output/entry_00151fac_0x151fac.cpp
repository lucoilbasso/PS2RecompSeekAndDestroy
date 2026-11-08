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

// Function: entry_00151fac
// Address: 0x151fac - 0x151fb8
void entry_00151fac_0x151fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151fac_0x151fac");
#endif

    ctx->pc = 0x151facu;

    // 0x151fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151FACu;
    {
        const bool branch_taken_0x151fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FACu;
        // 0x151fb0: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fac) {
            ctx->pc = 0x151FC4u;
            return;
        }
    }
    ctx->pc = 0x151FB4u;
    // 0x151fb4: 0x0  nop
    ctx->pc = 0x151fb4u;
    // NOP
    ctx->pc = 0x151fb8u;
}
