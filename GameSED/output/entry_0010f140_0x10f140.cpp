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

// Function: entry_0010f140
// Address: 0x10f140 - 0x10f16c
void entry_0010f140_0x10f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f140_0x10f140");
#endif

    ctx->pc = 0x10f140u;

label_10f140:
    // 0x10f140: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x10f140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_10f144:
    // 0x10f144: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x10f144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10f148:
    // 0x10f148: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x10f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_10f14c:
    // 0x10f14c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10f150:
    if (ctx->pc == 0x10F150u) {
        ctx->pc = 0x10F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F14Cu;
        // 0x10f150: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F154u;
        goto label_10f154;
    }
    ctx->pc = 0x10F14Cu;
    {
        const bool branch_taken_0x10f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F14Cu;
        // 0x10f150: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f14c) {
            ctx->pc = 0x10F16Cu;
            return;
        }
    }
    ctx->pc = 0x10F154u;
label_10f154:
    // 0x10f154: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x10f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_10f158:
    // 0x10f158: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_10f15c:
    // 0x10f15c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f160:
    // 0x10f160: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f164:
    // 0x10f164: 0x60f809  jalr        $v1
label_10f168:
    if (ctx->pc == 0x10F168u) {
        ctx->pc = 0x10F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F164u;
        // 0x10f168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F16Cu;
        goto label_fallthrough_0x10f164;
    }
    ctx->pc = 0x10F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F16Cu);
        ctx->pc = 0x10F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F164u;
        // 0x10f168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F164u, 0x10F16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10f164:
    ctx->pc = 0x10F16Cu;
}
