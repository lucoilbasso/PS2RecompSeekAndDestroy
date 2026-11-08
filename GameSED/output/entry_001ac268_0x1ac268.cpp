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

// Function: entry_001ac268
// Address: 0x1ac268 - 0x1ac294
void entry_001ac268_0x1ac268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac268_0x1ac268");
#endif

    ctx->pc = 0x1ac268u;

    // 0x1ac268: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ac26c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC26Cu;
    {
        const bool branch_taken_0x1ac26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac26c) {
            ctx->pc = 0x1AC270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC26Cu;
            // 0x1ac270: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC294u;
            return;
        }
    }
    ctx->pc = 0x1AC274u;
    // 0x1ac274: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac278: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x1ac278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x1ac27c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ac27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ac280: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1ac280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1ac284: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1ac284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1ac288: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1ac288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1ac28c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1ac28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1ac290: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ac290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1ac294u;
}
