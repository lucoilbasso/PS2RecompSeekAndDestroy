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

// Function: entry_001034e0
// Address: 0x1034e0 - 0x1034fc
void entry_001034e0_0x1034e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001034e0_0x1034e0");
#endif

    ctx->pc = 0x1034e0u;

    // 0x1034e0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1034E0u;
    {
        const bool branch_taken_0x1034e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E0u;
        // 0x1034e4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034e0) {
            ctx->pc = 0x1034FCu;
            return;
        }
    }
    ctx->pc = 0x1034E8u;
    // 0x1034e8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1034e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1034ec: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1034f0: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1034f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x1034f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1034f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1034f8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1034f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1034fcu;
}
