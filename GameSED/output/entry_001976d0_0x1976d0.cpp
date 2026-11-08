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

// Function: entry_001976d0
// Address: 0x1976d0 - 0x1976e8
void entry_001976d0_0x1976d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001976d0_0x1976d0");
#endif

    ctx->pc = 0x1976d0u;

    // 0x1976d0: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x1976d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1976d4: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x1976d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x1976d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1976D8u;
    {
        const bool branch_taken_0x1976d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1976DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976D8u;
        // 0x1976dc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976d8) {
            ctx->pc = 0x1976E8u;
            return;
        }
    }
    ctx->pc = 0x1976E0u;
    // 0x1976e0: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x1976e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x1976e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1976e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    ctx->pc = 0x1976e8u;
}
