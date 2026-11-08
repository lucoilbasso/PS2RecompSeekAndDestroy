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

// Function: entry_001c09c8
// Address: 0x1c09c8 - 0x1c09e4
void entry_001c09c8_0x1c09c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c09c8_0x1c09c8");
#endif

    ctx->pc = 0x1c09c8u;

    // 0x1c09c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c09cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C09CCu;
    {
        const bool branch_taken_0x1c09cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09CCu;
        // 0x1c09d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09cc) {
            ctx->pc = 0x1C09E8u;
            return;
        }
    }
    ctx->pc = 0x1C09D4u;
    // 0x1c09d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c09d8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c09dc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C09A0u;
            return;
        }
    }
    ctx->pc = 0x1C09E4u;
}
