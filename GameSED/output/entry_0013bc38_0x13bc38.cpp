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

// Function: entry_0013bc38
// Address: 0x13bc38 - 0x13bc70
void entry_0013bc38_0x13bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc38_0x13bc38");
#endif

    switch (ctx->pc) {
        case 0x13bc58u: goto label_13bc58;
        default: break;
    }

    ctx->pc = 0x13bc38u;

label_13bc38:
    // 0x13bc38: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BC38u;
    {
        const bool branch_taken_0x13bc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC38u;
        // 0x13bc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc38) {
            ctx->pc = 0x13BC88u;
            return;
        }
    }
    ctx->pc = 0x13BC40u;
    // 0x13bc40: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x13bc40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13bc44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bc48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13bc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc4c: 0xae6301c4  sw          $v1, 0x1C4($s3)
    ctx->pc = 0x13bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 3));
    // 0x13bc50: 0xc04ef3e  jal         func_13BCF8
    ctx->pc = 0x13BC50u;
    SET_GPR_U32(ctx, 31, 0x13BC58u);
    ctx->pc = 0x13BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC50u;
    // 0x13bc54: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BCF8u, 0x13BC50u, 0x13BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC58u;
label_13bc58:
    // 0x13bc58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13bc58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc5c: 0x1100fff6  beqz        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13BC5Cu;
    {
        const bool branch_taken_0x13bc5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC5Cu;
        // 0x13bc60: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc5c) {
            ctx->pc = 0x13BC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bc38;
        }
    }
    ctx->pc = 0x13BC64u;
    // 0x13bc64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BC64u;
    {
        const bool branch_taken_0x13bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc64) {
            ctx->pc = 0x13BC88u;
            return;
        }
    }
    ctx->pc = 0x13BC6Cu;
    // 0x13bc6c: 0x0  nop
    ctx->pc = 0x13bc6cu;
    // NOP
    ctx->pc = 0x13bc70u;
}
