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

// Function: entry_00111054
// Address: 0x111054 - 0x111060
void entry_00111054_0x111054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111054_0x111054");
#endif

    ctx->pc = 0x111054u;

    // 0x111054: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x111058: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x111058u;
    {
        const bool branch_taken_0x111058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111058u;
        // 0x11105c: 0x2414001a  addiu       $s4, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111058) {
            ctx->pc = 0x11109Cu;
            return;
        }
    }
    ctx->pc = 0x111060u;
}
