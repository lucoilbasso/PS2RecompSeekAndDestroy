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

// Function: entry_001c1098
// Address: 0x1c1098 - 0x1c10c4
void entry_001c1098_0x1c1098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1098_0x1c1098");
#endif

    switch (ctx->pc) {
        case 0x1c10acu: goto label_1c10ac;
        default: break;
    }

    ctx->pc = 0x1c1098u;

    // 0x1c1098: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1098u;
    {
        const bool branch_taken_0x1c1098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1098u;
        // 0x1c109c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1098) {
            ctx->pc = 0x1C10E4u;
            return;
        }
    }
    ctx->pc = 0x1C10A0u;
    // 0x1c10a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10a4: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C10A4u;
    SET_GPR_U32(ctx, 31, 0x1C10ACu);
    ctx->pc = 0x1C10A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10A4u;
    // 0x1c10a8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C10A4u, 0x1C10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10ACu;
label_1c10ac:
    // 0x1c10ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C10ACu;
    {
        const bool branch_taken_0x1c10ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10ac) {
            ctx->pc = 0x1C10B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C10ACu;
            // 0x1c10b0: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C10C4u;
            return;
        }
    }
    ctx->pc = 0x1C10B4u;
    // 0x1c10b4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c10b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C10B8u;
    {
        const bool branch_taken_0x1c10b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10b8) {
            ctx->pc = 0x1C10CCu;
            return;
        }
    }
    ctx->pc = 0x1C10C0u;
    // 0x1c10c0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    ctx->pc = 0x1c10c4u;
}
