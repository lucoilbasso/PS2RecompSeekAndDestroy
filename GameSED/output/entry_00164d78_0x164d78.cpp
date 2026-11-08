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

// Function: entry_00164d78
// Address: 0x164d78 - 0x164da0
void entry_00164d78_0x164d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d78_0x164d78");
#endif

    ctx->pc = 0x164d78u;

label_164d78:
    // 0x164d78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164d7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x164d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x164d80: 0x0  nop
    ctx->pc = 0x164d80u;
    // NOP
    // 0x164d84: 0x0  nop
    ctx->pc = 0x164d84u;
    // NOP
    // 0x164d88: 0x0  nop
    ctx->pc = 0x164d88u;
    // NOP
    // 0x164d8c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x164D8Cu;
    {
        const bool branch_taken_0x164d8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x164D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D8Cu;
        // 0x164d90: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d8c) {
            ctx->pc = 0x164D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164d78;
        }
    }
    ctx->pc = 0x164D94u;
    // 0x164d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164d98: 0x2602125c  addiu       $v0, $s0, 0x125C
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4700));
    // 0x164d9c: 0x0  nop
    ctx->pc = 0x164d9cu;
    // NOP
    ctx->pc = 0x164da0u;
}
