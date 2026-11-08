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

// Function: entry_0019a6c8
// Address: 0x19a6c8 - 0x19a6d8
void entry_0019a6c8_0x19a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6c8_0x19a6c8");
#endif

    ctx->pc = 0x19a6c8u;

    // 0x19a6c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a6cc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A6CCu;
    {
        const bool branch_taken_0x19a6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6CCu;
        // 0x19a6d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6cc) {
            ctx->pc = 0x19A6D8u;
            return;
        }
    }
    ctx->pc = 0x19A6D4u;
    // 0x19a6d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x19a6d8u;
}
