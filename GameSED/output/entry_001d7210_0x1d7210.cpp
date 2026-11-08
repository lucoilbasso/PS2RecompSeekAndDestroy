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

// Function: entry_001d7210
// Address: 0x1d7210 - 0x1d7248
void entry_001d7210_0x1d7210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7210_0x1d7210");
#endif

    ctx->pc = 0x1d7210u;

label_1d7210:
    // 0x1d7210: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1d7214:
    // 0x1d7214: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1d7218:
    // 0x1d7218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d721c:
    // 0x1d721c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d721cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7220:
    // 0x1d7220: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d7224:
    // 0x1d7224: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d7228:
    if (ctx->pc == 0x1D7228u) {
        ctx->pc = 0x1D7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7224u;
        // 0x1d7228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D722Cu;
        goto label_1d722c;
    }
    ctx->pc = 0x1D7224u;
    {
        const bool branch_taken_0x1d7224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7224u;
        // 0x1d7228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7224) {
            ctx->pc = 0x1D7248u;
            return;
        }
    }
    ctx->pc = 0x1D722Cu;
label_1d722c:
    // 0x1d722c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7230:
    // 0x1d7230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7234:
    // 0x1d7234: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7238:
    // 0x1d7238: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d723c:
    // 0x1d723c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7240:
    // 0x1d7240: 0x60f809  jalr        $v1
label_1d7244:
    if (ctx->pc == 0x1D7244u) {
        ctx->pc = 0x1D7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7240u;
        // 0x1d7244: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7248u;
        goto label_fallthrough_0x1d7240;
    }
    ctx->pc = 0x1D7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D7248u);
        ctx->pc = 0x1D7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7240u;
        // 0x1d7244: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7240u, 0x1D7248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d7240:
    ctx->pc = 0x1D7248u;
}
