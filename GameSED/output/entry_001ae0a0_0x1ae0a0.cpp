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

// Function: entry_001ae0a0
// Address: 0x1ae0a0 - 0x1ae0c0
void entry_001ae0a0_0x1ae0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae0a0_0x1ae0a0");
#endif

    ctx->pc = 0x1ae0a0u;

    // 0x1ae0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae0a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ae0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ae0a8: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1ae0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae0b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0B0u;
    {
        const bool branch_taken_0x1ae0b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B0u;
        // 0x1ae0b4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b0) {
            ctx->pc = 0x1AE0C0u;
            return;
        }
    }
    ctx->pc = 0x1AE0B8u;
    // 0x1ae0b8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ae0bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ae0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1ae0c0u;
}
