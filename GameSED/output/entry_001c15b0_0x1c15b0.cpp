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

// Function: entry_001c15b0
// Address: 0x1c15b0 - 0x1c15e0
void entry_001c15b0_0x1c15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c15b0_0x1c15b0");
#endif

    switch (ctx->pc) {
        case 0x1c15dcu: goto label_1c15dc;
        default: break;
    }

    ctx->pc = 0x1c15b0u;

    // 0x1c15b0: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C15B0u;
    {
        const bool branch_taken_0x1c15b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15B0u;
        // 0x1c15b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15b0) {
            ctx->pc = 0x1C1738u;
            return;
        }
    }
    ctx->pc = 0x1C15B8u;
    // 0x1c15b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c15bc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c15c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C15C0u;
    {
        const bool branch_taken_0x1c15c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15C0u;
        // 0x1c15c4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15c0) {
            ctx->pc = 0x1C15E4u;
            return;
        }
    }
    ctx->pc = 0x1C15C8u;
    // 0x1c15c8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1c15cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C15CCu;
    {
        const bool branch_taken_0x1c15cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15CCu;
        // 0x1c15d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15cc) {
            ctx->pc = 0x1C15E0u;
            return;
        }
    }
    ctx->pc = 0x1C15D4u;
    // 0x1c15d4: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C15D4u;
    SET_GPR_U32(ctx, 31, 0x1C15DCu);
    ctx->pc = 0x1C15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15D4u;
    // 0x1c15d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C15D4u, 0x1C15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15DCu;
label_1c15dc:
    // 0x1c15dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1c15e0u;
}
