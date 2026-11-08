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

// Function: $L12
// Address: 0x1d0110 - 0x1d0134
void ps2__L12_0x1d0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L12_0x1d0110");
#endif

    ctx->pc = 0x1d0110u;

label_1d0110:
    // 0x1d0110: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x1d0110u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x1d0114: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d0114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d0118: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1d0118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d011c: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x1d011cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d0120: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x1d0120u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x1d0124: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0124u;
    {
        const bool branch_taken_0x1d0124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0124u;
        // 0x1d0128: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0124) {
            ctx->pc = 0x1D0110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0110;
        }
    }
    ctx->pc = 0x1D012Cu;
    // 0x1d012c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D012Cu;
    {
        const bool branch_taken_0x1d012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D012Cu;
        // 0x1d0130: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d012c) {
            ctx->pc = 0x1D0140u;
            return;
        }
    }
    ctx->pc = 0x1D0134u;
}
