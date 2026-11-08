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

// Function: entry_0014d6f0
// Address: 0x14d6f0 - 0x14d710
void entry_0014d6f0_0x14d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d6f0_0x14d6f0");
#endif

    ctx->pc = 0x14d6f0u;

    // 0x14d6f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14d6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d6f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14d6fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14d700: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14d700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14d704: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14d704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14d708: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14D708u;
    {
        const bool branch_taken_0x14d708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d708) {
            ctx->pc = 0x14D70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D708u;
            // 0x14d70c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D710u;
            return;
        }
    }
    ctx->pc = 0x14D710u;
}
