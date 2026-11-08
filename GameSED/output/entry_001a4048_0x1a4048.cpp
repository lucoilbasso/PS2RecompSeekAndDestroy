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

// Function: entry_001a4048
// Address: 0x1a4048 - 0x1a407c
void entry_001a4048_0x1a4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4048_0x1a4048");
#endif

    ctx->pc = 0x1a4048u;

label_1a4048:
    // 0x1a4048: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a404c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1a404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a4050: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a4054: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x1a4054u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1a4058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a405c: 0x28a40fa0  slti        $a0, $a1, 0xFA0
    ctx->pc = 0x1a405cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4000) ? 1 : 0);
    // 0x1a4060: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A4060u;
    {
        const bool branch_taken_0x1a4060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4060u;
        // 0x1a4064: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4060) {
            ctx->pc = 0x1A4048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4048;
        }
    }
    ctx->pc = 0x1A4068u;
    // 0x1a4068: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a406c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4070: 0x24427b30  addiu       $v0, $v0, 0x7B30
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31536));
    // 0x1a4074: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a4078: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x1a407cu;
}
