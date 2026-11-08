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

// Function: entry_001bdc48
// Address: 0x1bdc48 - 0x1bdc78
void entry_001bdc48_0x1bdc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdc48_0x1bdc48");
#endif

    switch (ctx->pc) {
        case 0x1bdc50u: goto label_1bdc50;
        default: break;
    }

    ctx->pc = 0x1bdc48u;

label_1bdc48:
    // 0x1bdc48: 0xc070884  jal         func_1C2210
    ctx->pc = 0x1BDC48u;
    SET_GPR_U32(ctx, 31, 0x1BDC50u);
    ctx->pc = 0x1BDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC48u;
    // 0x1bdc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2210u, 0x1BDC48u, 0x1BDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC50u;
label_1bdc50:
    // 0x1bdc50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bdc50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc54: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDC54u;
    {
        const bool branch_taken_0x1bdc54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC54u;
        // 0x1bdc58: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc54) {
            ctx->pc = 0x1BDC78u;
            return;
        }
    }
    ctx->pc = 0x1BDC5Cu;
    // 0x1bdc5c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1bdc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bdc60: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1bdc64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDC64u;
    {
        const bool branch_taken_0x1bdc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC64u;
        // 0x1bdc68: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc64) {
            ctx->pc = 0x1BDC78u;
            return;
        }
    }
    ctx->pc = 0x1BDC6Cu;
    // 0x1bdc6c: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1bdc70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BDC70u;
    {
        const bool branch_taken_0x1bdc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC70u;
        // 0x1bdc74: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc70) {
            ctx->pc = 0x1BDC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdc48;
        }
    }
    ctx->pc = 0x1BDC78u;
}
