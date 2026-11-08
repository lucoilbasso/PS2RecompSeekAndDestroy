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

// Function: entry_0019b92c
// Address: 0x19b92c - 0x19b948
void entry_0019b92c_0x19b92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b92c_0x19b92c");
#endif

    ctx->pc = 0x19b92cu;

    // 0x19b92c: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19b92cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b930: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19b930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b934: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x19b934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b938: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B938u;
    {
        const bool branch_taken_0x19b938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B938u;
        // 0x19b93c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b938) {
            ctx->pc = 0x19B97Cu;
            return;
        }
    }
    ctx->pc = 0x19B940u;
    // 0x19b940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b944: 0x0  nop
    ctx->pc = 0x19b944u;
    // NOP
    ctx->pc = 0x19b948u;
}
