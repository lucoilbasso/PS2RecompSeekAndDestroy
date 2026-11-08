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

// Function: entry_0014e780
// Address: 0x14e780 - 0x14e7b4
void entry_0014e780_0x14e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e780_0x14e780");
#endif

    ctx->pc = 0x14e780u;

label_14e780:
    // 0x14e780: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_14e784:
    if (ctx->pc == 0x14E784u) {
        ctx->pc = 0x14E788u;
        goto label_14e788;
    }
    ctx->pc = 0x14E780u;
    {
        const bool branch_taken_0x14e780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e780) {
            ctx->pc = 0x14E854u;
            return;
        }
    }
    ctx->pc = 0x14E788u;
label_14e788:
    // 0x14e788: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e78c:
    // 0x14e78c: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x14e78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14e790:
    // 0x14e790: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x14e790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14e794:
    // 0x14e794: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e798:
    if (ctx->pc == 0x14E798u) {
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E79Cu;
        goto label_14e79c;
    }
    ctx->pc = 0x14E794u;
    {
        const bool branch_taken_0x14e794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e794) {
            ctx->pc = 0x14E7B4u;
            return;
        }
    }
    ctx->pc = 0x14E79Cu;
label_14e79c:
    // 0x14e79c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e7a0:
    // 0x14e7a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e7a4:
    // 0x14e7a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7a8:
    // 0x14e7a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e7ac:
    // 0x14e7ac: 0x60f809  jalr        $v1
label_14e7b0:
    if (ctx->pc == 0x14E7B0u) {
        ctx->pc = 0x14E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7ACu;
        // 0x14e7b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7B4u;
        goto label_fallthrough_0x14e7ac;
    }
    ctx->pc = 0x14E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E7B4u);
        ctx->pc = 0x14E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7ACu;
        // 0x14e7b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7ACu, 0x14E7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14e7ac:
    ctx->pc = 0x14E7B4u;
}
