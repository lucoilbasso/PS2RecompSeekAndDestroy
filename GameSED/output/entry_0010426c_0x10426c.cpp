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

// Function: entry_0010426c
// Address: 0x10426c - 0x10429c
void entry_0010426c_0x10426c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010426c_0x10426c");
#endif

    ctx->pc = 0x10426cu;

label_10426c:
    // 0x10426c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_104270:
    // 0x104270: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x104270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_104274:
    // 0x104274: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x104274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_104278:
    // 0x104278: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10427c:
    // 0x10427c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_104280:
    if (ctx->pc == 0x104280u) {
        ctx->pc = 0x104280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10427Cu;
        // 0x104280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104284u;
        goto label_104284;
    }
    ctx->pc = 0x10427Cu;
    {
        const bool branch_taken_0x10427c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10427Cu;
        // 0x104280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10427c) {
            ctx->pc = 0x10429Cu;
            return;
        }
    }
    ctx->pc = 0x104284u;
label_104284:
    // 0x104284: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x104284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_104288:
    // 0x104288: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10428c:
    // 0x10428c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10428cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_104290:
    // 0x104290: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x104290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_104294:
    // 0x104294: 0x60f809  jalr        $v1
label_104298:
    if (ctx->pc == 0x104298u) {
        ctx->pc = 0x104298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104294u;
        // 0x104298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10429Cu;
        goto label_fallthrough_0x104294;
    }
    ctx->pc = 0x104294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10429Cu);
        ctx->pc = 0x104298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104294u;
        // 0x104298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104294u, 0x10429Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x104294:
    ctx->pc = 0x10429Cu;
}
