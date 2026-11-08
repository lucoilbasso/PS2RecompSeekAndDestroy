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

// Function: entry_001a2edc
// Address: 0x1a2edc - 0x1a2ef8
void entry_001a2edc_0x1a2edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2edc_0x1a2edc");
#endif

    switch (ctx->pc) {
        case 0x1a2ef0u: goto label_1a2ef0;
        default: break;
    }

    ctx->pc = 0x1a2edcu;

label_1a2edc:
    // 0x1a2edc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2ee0:
    if (ctx->pc == 0x1A2EE0u) {
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EE4u;
        goto label_1a2ee4;
    }
    ctx->pc = 0x1A2EDCu;
    {
        const bool branch_taken_0x1a2edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2edc) {
            ctx->pc = 0x1A2EF8u;
            return;
        }
    }
    ctx->pc = 0x1A2EE4u;
label_1a2ee4:
    // 0x1a2ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ee8:
    // 0x1a2ee8: 0x40f809  jalr        $v0
label_1a2eec:
    if (ctx->pc == 0x1A2EECu) {
        ctx->pc = 0x1A2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EE8u;
        // 0x1a2eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EF0u;
        goto label_1a2ef0;
    }
    ctx->pc = 0x1A2EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2EF0u);
        ctx->pc = 0x1A2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EE8u;
        // 0x1a2eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EE8u, 0x1A2EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2EF0u;
label_1a2ef0:
    // 0x1a2ef0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2ef4:
    if (ctx->pc == 0x1A2EF4u) {
        ctx->pc = 0x1A2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF0u;
        // 0x1a2ef4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EF8u;
        goto label_fallthrough_0x1a2ef0;
    }
    ctx->pc = 0x1A2EF0u;
    {
        const bool branch_taken_0x1a2ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF0u;
        // 0x1a2ef4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ef0) {
            ctx->pc = 0x1A2F10u;
            return;
        }
    }
label_fallthrough_0x1a2ef0:
    ctx->pc = 0x1A2EF8u;
}
