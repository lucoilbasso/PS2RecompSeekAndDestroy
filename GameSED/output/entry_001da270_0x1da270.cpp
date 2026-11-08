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

// Function: entry_001da270
// Address: 0x1da270 - 0x1da294
void entry_001da270_0x1da270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da270_0x1da270");
#endif

    ctx->pc = 0x1da270u;

label_1da270:
    // 0x1da270: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da274:
    // 0x1da274: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da278:
    if (ctx->pc == 0x1DA278u) {
        ctx->pc = 0x1DA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA274u;
        // 0x1da278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA27Cu;
        goto label_1da27c;
    }
    ctx->pc = 0x1DA274u;
    {
        const bool branch_taken_0x1da274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA274u;
        // 0x1da278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da274) {
            ctx->pc = 0x1DA294u;
            return;
        }
    }
    ctx->pc = 0x1DA27Cu;
label_1da27c:
    // 0x1da27c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da280:
    // 0x1da280: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da284:
    // 0x1da284: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da288:
    // 0x1da288: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da28c:
    // 0x1da28c: 0x60f809  jalr        $v1
label_1da290:
    if (ctx->pc == 0x1DA290u) {
        ctx->pc = 0x1DA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA28Cu;
        // 0x1da290: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA294u;
        goto label_fallthrough_0x1da28c;
    }
    ctx->pc = 0x1DA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA294u);
        ctx->pc = 0x1DA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA28Cu;
        // 0x1da290: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA28Cu, 0x1DA294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da28c:
    ctx->pc = 0x1DA294u;
}
