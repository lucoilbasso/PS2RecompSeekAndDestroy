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

// Function: entry_001d0220
// Address: 0x1d0220 - 0x1d0244
void entry_001d0220_0x1d0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0220_0x1d0220");
#endif

    ctx->pc = 0x1d0220u;

    // 0x1d0220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0224: 0x2463e614  addiu       $v1, $v1, -0x19EC
    ctx->pc = 0x1d0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960660));
    // 0x1d0228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d022c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d0230: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0230u;
    {
        const bool branch_taken_0x1d0230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0230u;
        // 0x1d0234: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0230) {
            ctx->pc = 0x1D0258u;
            return;
        }
    }
    ctx->pc = 0x1D0238u;
    // 0x1d0238: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d023c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0240: 0x8c44aa40  lw          $a0, -0x55C0($v0)
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24AA40u));
    ctx->pc = 0x1d0244u;
}
