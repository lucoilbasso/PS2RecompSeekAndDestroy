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

// Function: entry_001224a0
// Address: 0x1224a0 - 0x1224d0
void entry_001224a0_0x1224a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001224a0_0x1224a0");
#endif

    switch (ctx->pc) {
        case 0x1224b0u: goto label_1224b0;
        case 0x1224c0u: goto label_1224c0;
        default: break;
    }

    ctx->pc = 0x1224a0u;

label_1224a0:
    // 0x1224a0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1224A0u;
    {
        const bool branch_taken_0x1224a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224A0u;
        // 0x1224a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224a0) {
            ctx->pc = 0x122508u;
            return;
        }
    }
    ctx->pc = 0x1224A8u;
    // 0x1224a8: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1224A8u;
    SET_GPR_U32(ctx, 31, 0x1224B0u);
    ctx->pc = 0x1224ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224A8u;
    // 0x1224ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1224A8u, 0x1224B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224B0u;
label_1224b0:
    // 0x1224b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1224b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1224b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1224b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224b8: 0xc048446  jal         func_121118
    ctx->pc = 0x1224B8u;
    SET_GPR_U32(ctx, 31, 0x1224C0u);
    ctx->pc = 0x1224BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224B8u;
    // 0x1224bc: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121118u, 0x1224B8u, 0x1224C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224C0u;
label_1224c0:
    // 0x1224c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1224c4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1224c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1224c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1224C8u;
    {
        const bool branch_taken_0x1224c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1224CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224C8u;
        // 0x1224cc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224c8) {
            ctx->pc = 0x1224A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1224a0;
        }
    }
    ctx->pc = 0x1224D0u;
}
