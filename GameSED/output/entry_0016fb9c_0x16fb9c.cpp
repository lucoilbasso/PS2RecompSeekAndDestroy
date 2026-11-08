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

// Function: entry_0016fb9c
// Address: 0x16fb9c - 0x16fbc8
void entry_0016fb9c_0x16fb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb9c_0x16fb9c");
#endif

    ctx->pc = 0x16fb9cu;

    // 0x16fb9c: 0x27848b68  addiu       $a0, $gp, -0x7498
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937448));
    // 0x16fba0: 0x8f858b64  lw          $a1, -0x749C($gp)
    ctx->pc = 0x16fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x16fba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fba8: 0xaf808b64  sw          $zero, -0x749C($gp)
    ctx->pc = 0x16fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
    // 0x16fbac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fbb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16fbb4: 0x3c010027  lui         $at, 0x27
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)39 << 16));
    // 0x16fbb8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x16fbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x16fbbc: 0xac25ba00  sw          $a1, -0x4600($at)
    ctx->pc = 0x16fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), GPR_U32(ctx, 5));
    // 0x16fbc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16FBC0u;
    {
        const bool branch_taken_0x16fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBC0u;
        // 0x16fbc4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbc0) {
            ctx->pc = 0x16FC04u;
            return;
        }
    }
    ctx->pc = 0x16FBC8u;
}
