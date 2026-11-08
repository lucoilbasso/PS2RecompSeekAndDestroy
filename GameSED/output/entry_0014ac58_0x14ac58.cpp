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

// Function: entry_0014ac58
// Address: 0x14ac58 - 0x14ac8c
void entry_0014ac58_0x14ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac58_0x14ac58");
#endif

    switch (ctx->pc) {
        case 0x14ac64u: goto label_14ac64;
        default: break;
    }

    ctx->pc = 0x14ac58u;

label_14ac58:
    // 0x14ac58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ac5c: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14AC5Cu;
    SET_GPR_U32(ctx, 31, 0x14AC64u);
    ctx->pc = 0x14AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC5Cu;
    // 0x14ac60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14AC5Cu, 0x14AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC64u;
label_14ac64:
    // 0x14ac64: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x14ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x14ac68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14ac6c: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x14ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x14ac70: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x14ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x14ac74: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x14ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x14ac78: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x14ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x14ac7c: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ac7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ac80: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ac84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14AC84u;
    {
        const bool branch_taken_0x14ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC84u;
        // 0x14ac88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac84) {
            ctx->pc = 0x14AC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ac58;
        }
    }
    ctx->pc = 0x14AC8Cu;
}
