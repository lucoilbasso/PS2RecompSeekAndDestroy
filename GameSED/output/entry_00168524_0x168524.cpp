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

// Function: entry_00168524
// Address: 0x168524 - 0x168540
void entry_00168524_0x168524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168524_0x168524");
#endif

    ctx->pc = 0x168524u;

    // 0x168524: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x168524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168528: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168530: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x168530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x168534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x168538: 0x100002e6  b           . + 4 + (0x2E6 << 2)
    ctx->pc = 0x168538u;
    {
        const bool branch_taken_0x168538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168538u;
        // 0x16853c: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168538) {
            ctx->pc = 0x1690D4u;
            return;
        }
    }
    ctx->pc = 0x168540u;
}
