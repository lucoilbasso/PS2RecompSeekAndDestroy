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

// Function: entry_0016809c
// Address: 0x16809c - 0x1680b8
void entry_0016809c_0x16809c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016809c_0x16809c");
#endif

    ctx->pc = 0x16809cu;

    // 0x16809c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x16809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1680a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1680a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1680a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1680a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1680a8: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x1680a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x1680ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1680acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1680b0: 0x10000408  b           . + 4 + (0x408 << 2)
    ctx->pc = 0x1680B0u;
    {
        const bool branch_taken_0x1680b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680B0u;
        // 0x1680b4: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680b0) {
            ctx->pc = 0x1690D4u;
            return;
        }
    }
    ctx->pc = 0x1680B8u;
}
