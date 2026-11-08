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

// Function: entry_00156454
// Address: 0x156454 - 0x156494
void entry_00156454_0x156454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156454_0x156454");
#endif

    switch (ctx->pc) {
        case 0x15646cu: goto label_15646c;
        case 0x156488u: goto label_156488;
        default: break;
    }

    ctx->pc = 0x156454u;

    // 0x156454: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x156454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x156458: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x156458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15645c: 0x54400068  bnel        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x15645Cu;
    {
        const bool branch_taken_0x15645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15645c) {
            ctx->pc = 0x156460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15645Cu;
            // 0x156460: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            return;
        }
    }
    ctx->pc = 0x156464u;
    // 0x156464: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x156464u;
    SET_GPR_U32(ctx, 31, 0x15646Cu);
    ctx->pc = 0x156468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156464u;
    // 0x156468: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156464u, 0x15646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15646Cu;
label_15646c:
    // 0x15646c: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x15646Cu;
    {
        const bool branch_taken_0x15646c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15646c) {
            ctx->pc = 0x156470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15646Cu;
            // 0x156470: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            return;
        }
    }
    ctx->pc = 0x156474u;
    // 0x156474: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x156474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x156478: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x156478u;
    {
        const bool branch_taken_0x156478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156478) {
            ctx->pc = 0x15647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156478u;
            // 0x15647c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156494u;
            return;
        }
    }
    ctx->pc = 0x156480u;
    // 0x156480: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x156480u;
    SET_GPR_U32(ctx, 31, 0x156488u);
    ctx->pc = 0x156484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156480u;
    // 0x156484: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156480u, 0x156488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156488u;
label_156488:
    // 0x156488: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x156488u;
    {
        const bool branch_taken_0x156488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156488u;
        // 0x15648c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156488) {
            ctx->pc = 0x1565FCu;
            return;
        }
    }
    ctx->pc = 0x156490u;
    // 0x156490: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x156490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x156494u;
}
