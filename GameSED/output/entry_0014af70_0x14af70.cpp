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

// Function: entry_0014af70
// Address: 0x14af70 - 0x14afa0
void entry_0014af70_0x14af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af70_0x14af70");
#endif

    switch (ctx->pc) {
        case 0x14af84u: goto label_14af84;
        case 0x14af8cu: goto label_14af8c;
        case 0x14af94u: goto label_14af94;
        default: break;
    }

    ctx->pc = 0x14af70u;

    // 0x14af70: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14af74: 0x14d4000a  bne         $a2, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x14AF74u;
    {
        const bool branch_taken_0x14af74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        if (branch_taken_0x14af74) {
            ctx->pc = 0x14AFA0u;
            return;
        }
    }
    ctx->pc = 0x14AF7Cu;
    // 0x14af7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF7Cu;
    SET_GPR_U32(ctx, 31, 0x14AF84u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF7Cu, 0x14AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF84u;
label_14af84:
    // 0x14af84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF84u;
    SET_GPR_U32(ctx, 31, 0x14AF8Cu);
    ctx->pc = 0x14AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF84u;
    // 0x14af88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF84u, 0x14AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF8Cu;
label_14af8c:
    // 0x14af8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF8Cu;
    SET_GPR_U32(ctx, 31, 0x14AF94u);
    ctx->pc = 0x14AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF8Cu;
    // 0x14af90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF8Cu, 0x14AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF94u;
label_14af94:
    // 0x14af94: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14AF94u;
    {
        const bool branch_taken_0x14af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF94u;
        // 0x14af98: 0xae620190  sw          $v0, 0x190($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af94) {
            ctx->pc = 0x14B01Cu;
            return;
        }
    }
    ctx->pc = 0x14AF9Cu;
    // 0x14af9c: 0x0  nop
    ctx->pc = 0x14af9cu;
    // NOP
    ctx->pc = 0x14afa0u;
}
