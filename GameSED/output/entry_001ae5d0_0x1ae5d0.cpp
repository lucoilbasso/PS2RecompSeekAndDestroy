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

// Function: entry_001ae5d0
// Address: 0x1ae5d0 - 0x1ae5f0
void entry_001ae5d0_0x1ae5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae5d0_0x1ae5d0");
#endif

    ctx->pc = 0x1ae5d0u;

    // 0x1ae5d0: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1ae5d4: 0x51f02  srl         $v1, $a1, 28
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1ae5d8: 0x24882  srl         $t1, $v0, 2
    ctx->pc = 0x1ae5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ae5dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae5e0: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1AE5E0u;
    {
        const bool branch_taken_0x1ae5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E0u;
        // 0x1ae5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e0) {
            ctx->pc = 0x1AE6ACu;
            return;
        }
    }
    ctx->pc = 0x1AE5E8u;
    // 0x1ae5e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ae5e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5ec: 0x258b0938  addiu       $t3, $t4, 0x938
    ctx->pc = 0x1ae5ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
    ctx->pc = 0x1ae5f0u;
}
