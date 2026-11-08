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

// Function: entry_00146db0
// Address: 0x146db0 - 0x146dcc
void entry_00146db0_0x146db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146db0_0x146db0");
#endif

    ctx->pc = 0x146db0u;

    // 0x146db0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146db4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x146db8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x146dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146dc0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146DC0u;
    {
        const bool branch_taken_0x146dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DC0u;
        // 0x146dc4: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dc0) {
            ctx->pc = 0x146DCCu;
            return;
        }
    }
    ctx->pc = 0x146DC8u;
    // 0x146dc8: 0xa3af00c3  sb          $t7, 0xC3($sp)
    ctx->pc = 0x146dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 15));
    ctx->pc = 0x146dccu;
}
