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

// Function: entry_00143f54
// Address: 0x143f54 - 0x143f78
void entry_00143f54_0x143f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f54_0x143f54");
#endif

    ctx->pc = 0x143f54u;

label_143f54:
    // 0x143f54: 0x8e460074  lw          $a2, 0x74($s2)
    ctx->pc = 0x143f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_143f58:
    // 0x143f58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f5c:
    if (ctx->pc == 0x143F5Cu) {
        ctx->pc = 0x143F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F58u;
        // 0x143f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F60u;
        goto label_143f60;
    }
    ctx->pc = 0x143F58u;
    {
        const bool branch_taken_0x143f58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F58u;
        // 0x143f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f58) {
            ctx->pc = 0x143F78u;
            return;
        }
    }
    ctx->pc = 0x143F60u;
label_143f60:
    // 0x143f60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f64:
    // 0x143f64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f68:
    // 0x143f68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f6c:
    // 0x143f6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f70:
    // 0x143f70: 0x60f809  jalr        $v1
label_143f74:
    if (ctx->pc == 0x143F74u) {
        ctx->pc = 0x143F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F70u;
        // 0x143f74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F78u;
        goto label_fallthrough_0x143f70;
    }
    ctx->pc = 0x143F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F78u);
        ctx->pc = 0x143F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F70u;
        // 0x143f74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F70u, 0x143F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143f70:
    ctx->pc = 0x143F78u;
}
