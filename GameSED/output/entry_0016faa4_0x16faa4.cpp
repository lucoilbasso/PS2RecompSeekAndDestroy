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

// Function: entry_0016faa4
// Address: 0x16faa4 - 0x16fab4
void entry_0016faa4_0x16faa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016faa4_0x16faa4");
#endif

    ctx->pc = 0x16faa4u;

    // 0x16faa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16faa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16faac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FAACu;
    {
        const bool branch_taken_0x16faac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAACu;
        // 0x16fab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faac) {
            ctx->pc = 0x16FACCu;
            return;
        }
    }
    ctx->pc = 0x16FAB4u;
}
