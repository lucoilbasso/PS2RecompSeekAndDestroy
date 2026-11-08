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

// Function: entry_001c90e0
// Address: 0x1c90e0 - 0x1c90f8
void entry_001c90e0_0x1c90e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c90e0_0x1c90e0");
#endif

    ctx->pc = 0x1c90e0u;

    // 0x1c90e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C90E0u;
    {
        const bool branch_taken_0x1c90e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90E0u;
        // 0x1c90e4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90e0) {
            ctx->pc = 0x1C90F8u;
            return;
        }
    }
    ctx->pc = 0x1C90E8u;
    // 0x1c90e8: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c90e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c90ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c90f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C90F0u;
    {
        const bool branch_taken_0x1c90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F0u;
        // 0x1c90f4: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f0) {
            ctx->pc = 0x1C910Cu;
            return;
        }
    }
    ctx->pc = 0x1C90F8u;
}
