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

// Function: entry_001962c4
// Address: 0x1962c4 - 0x1962e4
void entry_001962c4_0x1962c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001962c4_0x1962c4");
#endif

    ctx->pc = 0x1962c4u;

    // 0x1962c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1962c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1962c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1962c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1962cc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1962ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1962d0: 0xae6801bc  sw          $t0, 0x1BC($s3)
    ctx->pc = 0x1962d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 8));
    // 0x1962d4: 0xae7601b0  sw          $s6, 0x1B0($s3)
    ctx->pc = 0x1962d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 22));
    // 0x1962d8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1962D8u;
    {
        const bool branch_taken_0x1962d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962D8u;
        // 0x1962dc: 0xae7501b8  sw          $s5, 0x1B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962d8) {
            ctx->pc = 0x1962E4u;
            return;
        }
    }
    ctx->pc = 0x1962E0u;
    // 0x1962e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1962e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x1962e4u;
}
