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

// Function: entry_0017ffc0
// Address: 0x17ffc0 - 0x17ffdc
void entry_0017ffc0_0x17ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ffc0_0x17ffc0");
#endif

    ctx->pc = 0x17ffc0u;

label_17ffc0:
    // 0x17ffc0: 0x248300f6  addiu       $v1, $a0, 0xF6
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 246));
    // 0x17ffc4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17ffc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17ffc8: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x17ffc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17ffcc: 0x0  nop
    ctx->pc = 0x17ffccu;
    // NOP
    // 0x17ffd0: 0x0  nop
    ctx->pc = 0x17ffd0u;
    // NOP
    // 0x17ffd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FFD4u;
    {
        const bool branch_taken_0x17ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD4u;
        // 0x17ffd8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd4) {
            ctx->pc = 0x17FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FFDCu;
}
