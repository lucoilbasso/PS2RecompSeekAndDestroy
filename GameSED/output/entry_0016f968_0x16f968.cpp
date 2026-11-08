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

// Function: entry_0016f968
// Address: 0x16f968 - 0x16f970
void entry_0016f968_0x16f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f968_0x16f968");
#endif

    ctx->pc = 0x16f968u;

    // 0x16f968: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F968u;
    {
        const bool branch_taken_0x16f968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F968u;
        // 0x16f96c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f968) {
            ctx->pc = 0x16F988u;
            return;
        }
    }
    ctx->pc = 0x16F970u;
}
