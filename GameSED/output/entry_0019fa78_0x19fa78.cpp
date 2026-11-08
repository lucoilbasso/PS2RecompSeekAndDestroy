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

// Function: entry_0019fa78
// Address: 0x19fa78 - 0x19fa98
void entry_0019fa78_0x19fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa78_0x19fa78");
#endif

    ctx->pc = 0x19fa78u;

    // 0x19fa78: 0xac1025  or          $v0, $a1, $t4
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x19fa7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa80: 0x0  nop
    ctx->pc = 0x19fa80u;
    // NOP
    // 0x19fa84: 0x0  nop
    ctx->pc = 0x19fa84u;
    // NOP
    // 0x19fa88: 0x0  nop
    ctx->pc = 0x19fa88u;
    // NOP
    // 0x19fa8c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x19FA8Cu;
    {
        const bool branch_taken_0x19fa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA8Cu;
        // 0x19fa90: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa8c) {
            ctx->pc = 0x19FA64u;
            return;
        }
    }
    ctx->pc = 0x19FA94u;
    // 0x19fa94: 0x0  nop
    ctx->pc = 0x19fa94u;
    // NOP
    ctx->pc = 0x19fa98u;
}
