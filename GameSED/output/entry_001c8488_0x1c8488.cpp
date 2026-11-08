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

// Function: entry_001c8488
// Address: 0x1c8488 - 0x1c84a0
void entry_001c8488_0x1c8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8488_0x1c8488");
#endif

    ctx->pc = 0x1c8488u;

    // 0x1c8488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8488u;
    {
        const bool branch_taken_0x1c8488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8488u;
        // 0x1c848c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8488) {
            ctx->pc = 0x1C84A0u;
            return;
        }
    }
    ctx->pc = 0x1C8490u;
    // 0x1c8490: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c8490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c8494: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c8494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8498u;
    {
        const bool branch_taken_0x1c8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8498u;
        // 0x1c849c: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8498) {
            ctx->pc = 0x1C84B4u;
            return;
        }
    }
    ctx->pc = 0x1C84A0u;
}
