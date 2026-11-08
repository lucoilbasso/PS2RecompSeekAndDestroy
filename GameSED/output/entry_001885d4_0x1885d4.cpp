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

// Function: entry_001885d4
// Address: 0x1885d4 - 0x1885f0
void entry_001885d4_0x1885d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001885d4_0x1885d4");
#endif

    ctx->pc = 0x1885d4u;

    // 0x1885d4: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1885d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1885d8: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1885D8u;
    {
        const bool branch_taken_0x1885d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D8u;
        // 0x1885dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885d8) {
            ctx->pc = 0x188640u;
            return;
        }
    }
    ctx->pc = 0x1885E0u;
    // 0x1885e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1885e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1885e4: 0x2455ffb0  addiu       $s5, $v0, -0x50
    ctx->pc = 0x1885e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1885e8: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x1885e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x1885ec: 0x0  nop
    ctx->pc = 0x1885ecu;
    // NOP
    ctx->pc = 0x1885f0u;
}
