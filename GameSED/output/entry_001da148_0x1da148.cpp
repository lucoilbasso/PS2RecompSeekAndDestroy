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

// Function: entry_001da148
// Address: 0x1da148 - 0x1da16c
void entry_001da148_0x1da148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da148_0x1da148");
#endif

    ctx->pc = 0x1da148u;

label_1da148:
    // 0x1da148: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1da148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da14c:
    // 0x1da14c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da150:
    if (ctx->pc == 0x1DA150u) {
        ctx->pc = 0x1DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA14Cu;
        // 0x1da150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA154u;
        goto label_1da154;
    }
    ctx->pc = 0x1DA14Cu;
    {
        const bool branch_taken_0x1da14c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA14Cu;
        // 0x1da150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da14c) {
            ctx->pc = 0x1DA16Cu;
            return;
        }
    }
    ctx->pc = 0x1DA154u;
label_1da154:
    // 0x1da154: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da158:
    // 0x1da158: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da15c:
    // 0x1da15c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da160:
    // 0x1da160: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da164:
    // 0x1da164: 0x60f809  jalr        $v1
label_1da168:
    if (ctx->pc == 0x1DA168u) {
        ctx->pc = 0x1DA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA164u;
        // 0x1da168: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA16Cu;
        goto label_fallthrough_0x1da164;
    }
    ctx->pc = 0x1DA164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA16Cu);
        ctx->pc = 0x1DA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA164u;
        // 0x1da168: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA164u, 0x1DA16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da164:
    ctx->pc = 0x1DA16Cu;
}
