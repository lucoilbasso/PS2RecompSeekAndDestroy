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

// Function: entry_001078ac
// Address: 0x1078ac - 0x1078d0
void entry_001078ac_0x1078ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001078ac_0x1078ac");
#endif

    switch (ctx->pc) {
        case 0x1078c4u: goto label_1078c4;
        default: break;
    }

    ctx->pc = 0x1078acu;

label_1078ac:
    // 0x1078ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1078acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1078b0:
    // 0x1078b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1078b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1078b4:
    // 0x1078b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1078b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1078b8:
    // 0x1078b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1078bc:
    // 0x1078bc: 0x60f809  jalr        $v1
label_1078c0:
    if (ctx->pc == 0x1078C0u) {
        ctx->pc = 0x1078C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078BCu;
        // 0x1078c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078C4u;
        goto label_1078c4;
    }
    ctx->pc = 0x1078BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1078C4u);
        ctx->pc = 0x1078C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078BCu;
        // 0x1078c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1078BCu, 0x1078C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1078C4u;
label_1078c4:
    // 0x1078c4: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1078c8:
    if (ctx->pc == 0x1078C8u) {
        ctx->pc = 0x1078C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078C4u;
        // 0x1078c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078CCu;
        goto label_1078cc;
    }
    ctx->pc = 0x1078C4u;
    {
        const bool branch_taken_0x1078c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078C4u;
        // 0x1078c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078c4) {
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x1078CCu;
label_1078cc:
    // 0x1078cc: 0x0  nop
    ctx->pc = 0x1078ccu;
    // NOP
    ctx->pc = 0x1078d0u;
}
