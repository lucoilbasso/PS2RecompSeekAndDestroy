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

// Function: entry_001182c8
// Address: 0x1182c8 - 0x1182f0
void entry_001182c8_0x1182c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182c8_0x1182c8");
#endif

    ctx->pc = 0x1182c8u;

label_1182c8:
    // 0x1182c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1182c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1182cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1182ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1182d0: 0x0  nop
    ctx->pc = 0x1182d0u;
    // NOP
    // 0x1182d4: 0x0  nop
    ctx->pc = 0x1182d4u;
    // NOP
    // 0x1182d8: 0x0  nop
    ctx->pc = 0x1182d8u;
    // NOP
    // 0x1182dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1182DCu;
    {
        const bool branch_taken_0x1182dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1182E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182DCu;
        // 0x1182e0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182dc) {
            ctx->pc = 0x1182C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1182c8;
        }
    }
    ctx->pc = 0x1182E4u;
    // 0x1182e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1182e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1182e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182ec: 0x0  nop
    ctx->pc = 0x1182ecu;
    // NOP
    ctx->pc = 0x1182f0u;
}
