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

// Function: entry_00162d38
// Address: 0x162d38 - 0x162d78
void entry_00162d38_0x162d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162d38_0x162d38");
#endif

    switch (ctx->pc) {
        case 0x162d50u: goto label_162d50;
        case 0x162d5cu: goto label_162d5c;
        default: break;
    }

    ctx->pc = 0x162d38u;

    // 0x162d38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x162d3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x162d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x162d40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162d44: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x162d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x162d48: 0xc04110c  jal         func_104430
    ctx->pc = 0x162D48u;
    SET_GPR_U32(ctx, 31, 0x162D50u);
    ctx->pc = 0x162D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D48u;
    // 0x162d4c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x162D48u, 0x162D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D50u;
label_162d50:
    // 0x162d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d54: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162D54u;
    SET_GPR_U32(ctx, 31, 0x162D5Cu);
    ctx->pc = 0x162D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D54u;
    // 0x162d58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162D54u, 0x162D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D5Cu;
label_162d5c:
    // 0x162d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x162d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162D60u;
    {
        const bool branch_taken_0x162d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D60u;
        // 0x162d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d60) {
            ctx->pc = 0x162D78u;
            return;
        }
    }
    ctx->pc = 0x162D68u;
    // 0x162d68: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x162D68u;
    {
        const bool branch_taken_0x162d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162d68) {
            ctx->pc = 0x162D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162D68u;
            // 0x162d6c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162E30u;
            return;
        }
    }
    ctx->pc = 0x162D70u;
    // 0x162d70: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x162D70u;
    {
        const bool branch_taken_0x162d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D70u;
        // 0x162d74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d70) {
            ctx->pc = 0x162E84u;
            return;
        }
    }
    ctx->pc = 0x162D78u;
}
