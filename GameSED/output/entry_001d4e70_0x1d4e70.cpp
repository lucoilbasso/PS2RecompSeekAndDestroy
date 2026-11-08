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

// Function: entry_001d4e70
// Address: 0x1d4e70 - 0x1d4e8c
void entry_001d4e70_0x1d4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e70_0x1d4e70");
#endif

    switch (ctx->pc) {
        case 0x1d4e84u: goto label_1d4e84;
        default: break;
    }

    ctx->pc = 0x1d4e70u;

label_1d4e70:
    // 0x1d4e70: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4e74:
    // 0x1d4e74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1d4e78:
    if (ctx->pc == 0x1D4E78u) {
        ctx->pc = 0x1D4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E74u;
        // 0x1d4e78: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E7Cu;
        goto label_1d4e7c;
    }
    ctx->pc = 0x1D4E74u;
    {
        const bool branch_taken_0x1d4e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e74) {
            ctx->pc = 0x1D4E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E74u;
            // 0x1d4e78: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4E8Cu;
            return;
        }
    }
    ctx->pc = 0x1D4E7Cu;
label_1d4e7c:
    // 0x1d4e7c: 0x280f809  jalr        $s4
label_1d4e80:
    if (ctx->pc == 0x1D4E80u) {
        ctx->pc = 0x1D4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E7Cu;
        // 0x1d4e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E84u;
        goto label_1d4e84;
    }
    ctx->pc = 0x1D4E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1D4E84u);
        ctx->pc = 0x1D4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E7Cu;
        // 0x1d4e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E7Cu, 0x1D4E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4E84u;
label_1d4e84:
    // 0x1d4e84: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d4e84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1d4e88:
    // 0x1d4e88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1d4e8cu;
}
