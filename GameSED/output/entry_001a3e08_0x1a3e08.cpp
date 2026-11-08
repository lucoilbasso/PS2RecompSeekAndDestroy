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

// Function: entry_001a3e08
// Address: 0x1a3e08 - 0x1a3e30
void entry_001a3e08_0x1a3e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3e08_0x1a3e08");
#endif

    switch (ctx->pc) {
        case 0x1a3e28u: goto label_1a3e28;
        default: break;
    }

    ctx->pc = 0x1a3e08u;

label_1a3e08:
    // 0x1a3e08: 0xa4c80030  sh          $t0, 0x30($a2)
    ctx->pc = 0x1a3e08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 8));
label_1a3e0c:
    // 0x1a3e0c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1a3e10:
    // 0x1a3e10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3e14:
    if (ctx->pc == 0x1A3E14u) {
        ctx->pc = 0x1A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E10u;
        // 0x1a3e14: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E18u;
        goto label_1a3e18;
    }
    ctx->pc = 0x1A3E10u;
    {
        const bool branch_taken_0x1a3e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E10u;
        // 0x1a3e14: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e10) {
            ctx->pc = 0x1A3E30u;
            return;
        }
    }
    ctx->pc = 0x1A3E18u;
label_1a3e18:
    // 0x1a3e18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e1c:
    // 0x1a3e1c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a3e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e20:
    // 0x1a3e20: 0x40f809  jalr        $v0
label_1a3e24:
    if (ctx->pc == 0x1A3E24u) {
        ctx->pc = 0x1A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E20u;
        // 0x1a3e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E28u;
        goto label_1a3e28;
    }
    ctx->pc = 0x1A3E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3E28u);
        ctx->pc = 0x1A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E20u;
        // 0x1a3e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3E20u, 0x1A3E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3E28u;
label_1a3e28:
    // 0x1a3e28: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3e2c:
    if (ctx->pc == 0x1A3E2Cu) {
        ctx->pc = 0x1A3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E28u;
        // 0x1a3e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E30u;
        goto label_fallthrough_0x1a3e28;
    }
    ctx->pc = 0x1A3E28u;
    {
        const bool branch_taken_0x1a3e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E28u;
        // 0x1a3e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e28) {
            ctx->pc = 0x1A3E48u;
            return;
        }
    }
label_fallthrough_0x1a3e28:
    ctx->pc = 0x1A3E30u;
}
