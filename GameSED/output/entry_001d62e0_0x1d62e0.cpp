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

// Function: entry_001d62e0
// Address: 0x1d62e0 - 0x1d6300
void entry_001d62e0_0x1d62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d62e0_0x1d62e0");
#endif

    ctx->pc = 0x1d62e0u;

    // 0x1d62e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D62E0u;
    {
        const bool branch_taken_0x1d62e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62E0u;
        // 0x1d62e4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62e0) {
            ctx->pc = 0x1D6300u;
            return;
        }
    }
    ctx->pc = 0x1D62E8u;
    // 0x1d62e8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d62ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d62f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d62f4: 0xdc42c680  ld          $v0, -0x3980($v0)
    ctx->pc = 0x1d62f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294952576)));
    // 0x1d62f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D62F8u;
    {
        const bool branch_taken_0x1d62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62F8u;
        // 0x1d62fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62f8) {
            ctx->pc = 0x1D632Cu;
            return;
        }
    }
    ctx->pc = 0x1D6300u;
}
