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

// Function: entry_00100788
// Address: 0x100788 - 0x1007ac
void entry_00100788_0x100788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100788_0x100788");
#endif

    ctx->pc = 0x100788u;

label_100788:
    // 0x100788: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10078c:
    // 0x10078c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100790:
    if (ctx->pc == 0x100790u) {
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100794u;
        goto label_100794;
    }
    ctx->pc = 0x10078Cu;
    {
        const bool branch_taken_0x10078c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10078c) {
            ctx->pc = 0x1007ACu;
            return;
        }
    }
    ctx->pc = 0x100794u;
label_100794:
    // 0x100794: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100798:
    // 0x100798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10079c:
    // 0x10079c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10079cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1007a0:
    // 0x1007a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1007a4:
    // 0x1007a4: 0x60f809  jalr        $v1
label_1007a8:
    if (ctx->pc == 0x1007A8u) {
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007A4u;
        // 0x1007a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007ACu;
        goto label_fallthrough_0x1007a4;
    }
    ctx->pc = 0x1007A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1007ACu);
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007A4u;
        // 0x1007a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1007A4u, 0x1007ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1007a4:
    ctx->pc = 0x1007ACu;
}
