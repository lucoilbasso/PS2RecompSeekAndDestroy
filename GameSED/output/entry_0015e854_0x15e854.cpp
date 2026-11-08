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

// Function: entry_0015e854
// Address: 0x15e854 - 0x15e888
void entry_0015e854_0x15e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e854_0x15e854");
#endif

    ctx->pc = 0x15e854u;

label_15e854:
    // 0x15e854: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
label_15e858:
    if (ctx->pc == 0x15E858u) {
        ctx->pc = 0x15E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E854u;
        // 0x15e858: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E85Cu;
        goto label_15e85c;
    }
    ctx->pc = 0x15E854u;
    {
        const bool branch_taken_0x15e854 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E854u;
        // 0x15e858: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e854) {
            ctx->pc = 0x15E900u;
            return;
        }
    }
    ctx->pc = 0x15E85Cu;
label_15e85c:
    // 0x15e85c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e860:
    // 0x15e860: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e864:
    // 0x15e864: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15e868:
    // 0x15e868: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e86c:
    if (ctx->pc == 0x15E86Cu) {
        ctx->pc = 0x15E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E868u;
        // 0x15e86c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E870u;
        goto label_15e870;
    }
    ctx->pc = 0x15E868u;
    {
        const bool branch_taken_0x15e868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E868u;
        // 0x15e86c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e868) {
            ctx->pc = 0x15E888u;
            return;
        }
    }
    ctx->pc = 0x15E870u;
label_15e870:
    // 0x15e870: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e874:
    // 0x15e874: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e878:
    // 0x15e878: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e87c:
    // 0x15e87c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e880:
    // 0x15e880: 0x60f809  jalr        $v1
label_15e884:
    if (ctx->pc == 0x15E884u) {
        ctx->pc = 0x15E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E880u;
        // 0x15e884: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E888u;
        goto label_fallthrough_0x15e880;
    }
    ctx->pc = 0x15E880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E888u);
        ctx->pc = 0x15E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E880u;
        // 0x15e884: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E880u, 0x15E888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e880:
    ctx->pc = 0x15E888u;
}
