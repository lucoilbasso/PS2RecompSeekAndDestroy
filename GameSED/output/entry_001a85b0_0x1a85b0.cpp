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

// Function: entry_001a85b0
// Address: 0x1a85b0 - 0x1a85d8
void entry_001a85b0_0x1a85b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a85b0_0x1a85b0");
#endif

    ctx->pc = 0x1a85b0u;

label_1a85b0:
    // 0x1a85b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a85b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a85b8: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x1a85b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x1a85bc: 0x0  nop
    ctx->pc = 0x1a85bcu;
    // NOP
    // 0x1a85c0: 0x0  nop
    ctx->pc = 0x1a85c0u;
    // NOP
    // 0x1a85c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A85C4u;
    {
        const bool branch_taken_0x1a85c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85C4u;
        // 0x1a85c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85c4) {
            ctx->pc = 0x1A85B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a85b0;
        }
    }
    ctx->pc = 0x1A85CCu;
    // 0x1a85cc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a85d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a85d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85d4: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x1a85d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    ctx->pc = 0x1a85d8u;
}
