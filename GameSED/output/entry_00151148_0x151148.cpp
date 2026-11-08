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

// Function: entry_00151148
// Address: 0x151148 - 0x151150
void entry_00151148_0x151148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151148_0x151148");
#endif

    ctx->pc = 0x151148u;

    // 0x151148: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151148u;
    {
        const bool branch_taken_0x151148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151148) {
            ctx->pc = 0x15114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151148u;
            // 0x15114c: 0x46080840  add.s       $f1, $f1, $f8 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151150u;
            return;
        }
    }
    ctx->pc = 0x151150u;
}
