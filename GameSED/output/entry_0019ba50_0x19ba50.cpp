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

// Function: entry_0019ba50
// Address: 0x19ba50 - 0x19ba5c
void entry_0019ba50_0x19ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba50_0x19ba50");
#endif

    ctx->pc = 0x19ba50u;

    // 0x19ba50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BA50u;
    {
        const bool branch_taken_0x19ba50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA50u;
        // 0x19ba54: 0x81600  sll         $v0, $t0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba50) {
            ctx->pc = 0x19BA5Cu;
            return;
        }
    }
    ctx->pc = 0x19BA58u;
    // 0x19ba58: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    ctx->pc = 0x19ba5cu;
}
