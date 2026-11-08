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

// Function: entry_00130050
// Address: 0x130050 - 0x130078
void entry_00130050_0x130050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130050_0x130050");
#endif

    ctx->pc = 0x130050u;

label_130050:
    // 0x130050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x130050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130054: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x130054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x130058: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130058u;
    {
        const bool branch_taken_0x130058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130058u;
        // 0x13005c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130058) {
            ctx->pc = 0x130080u;
            return;
        }
    }
    ctx->pc = 0x130060u;
    // 0x130060: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x130064: 0x28c2002c  slti        $v0, $a2, 0x2C
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x130068: 0x0  nop
    ctx->pc = 0x130068u;
    // NOP
    // 0x13006c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13006Cu;
    {
        const bool branch_taken_0x13006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13006Cu;
        // 0x130070: 0x24640048  addiu       $a0, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13006c) {
            ctx->pc = 0x130050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130050;
        }
    }
    ctx->pc = 0x130074u;
    // 0x130074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x130074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130078u;
}
