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

// Function: entry_00143f78
// Address: 0x143f78 - 0x143f9c
void entry_00143f78_0x143f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f78_0x143f78");
#endif

    ctx->pc = 0x143f78u;

label_143f78:
    // 0x143f78: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x143f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_143f7c:
    // 0x143f7c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f80:
    if (ctx->pc == 0x143F80u) {
        ctx->pc = 0x143F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F7Cu;
        // 0x143f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F84u;
        goto label_143f84;
    }
    ctx->pc = 0x143F7Cu;
    {
        const bool branch_taken_0x143f7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F7Cu;
        // 0x143f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f7c) {
            ctx->pc = 0x143F9Cu;
            return;
        }
    }
    ctx->pc = 0x143F84u;
label_143f84:
    // 0x143f84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f88:
    // 0x143f88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f8c:
    // 0x143f8c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f90:
    // 0x143f90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f94:
    // 0x143f94: 0x60f809  jalr        $v1
label_143f98:
    if (ctx->pc == 0x143F98u) {
        ctx->pc = 0x143F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F94u;
        // 0x143f98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F9Cu;
        goto label_fallthrough_0x143f94;
    }
    ctx->pc = 0x143F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F9Cu);
        ctx->pc = 0x143F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F94u;
        // 0x143f98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F94u, 0x143F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143f94:
    ctx->pc = 0x143F9Cu;
}
