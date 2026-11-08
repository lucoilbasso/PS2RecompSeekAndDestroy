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

// Function: GetStationingChannel__7WcSeStd
// Address: 0x17b858 - 0x17b8bc
void GetStationingChannel__7WcSeStd_0x17b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStationingChannel__7WcSeStd_0x17b858");
#endif

    switch (ctx->pc) {
        case 0x17b878u: goto label_17b878;
        case 0x17b88cu: goto label_17b88c;
        default: break;
    }

    ctx->pc = 0x17b858u;

    // 0x17b858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b85c: 0x24830140  addiu       $v1, $a0, 0x140
    ctx->pc = 0x17b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x17b860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b86c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17b86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b870: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x17b874: 0x0  nop
    ctx->pc = 0x17b874u;
    // NOP
label_17b878:
    // 0x17b878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b87c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B87Cu;
    {
        const bool branch_taken_0x17b87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b87c) {
            ctx->pc = 0x17B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B87Cu;
            // 0x17b880: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B898u;
            goto label_17b898;
        }
    }
    ctx->pc = 0x17B884u;
    // 0x17b884: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B884u;
    SET_GPR_U32(ctx, 31, 0x17B88Cu);
    ctx->pc = 0x17B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B884u;
    // 0x17b888: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B884u, 0x17B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B88Cu;
label_17b88c:
    // 0x17b88c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B88Cu;
    {
        const bool branch_taken_0x17b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B88Cu;
        // 0x17b890: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b88c) {
            ctx->pc = 0x17B8ACu;
            goto label_17b8ac;
        }
    }
    ctx->pc = 0x17B894u;
    // 0x17b894: 0x0  nop
    ctx->pc = 0x17b894u;
    // NOP
label_17b898:
    // 0x17b898: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17b89c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x17b89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b8a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17B8A0u;
    {
        const bool branch_taken_0x17b8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A0u;
        // 0x17b8a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8a0) {
            ctx->pc = 0x17B878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b878;
        }
    }
    ctx->pc = 0x17B8A8u;
    // 0x17b8a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b8ac:
    // 0x17b8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8B4u;
        // 0x17b8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8BCu;
}
