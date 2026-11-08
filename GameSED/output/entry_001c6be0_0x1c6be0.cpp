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

// Function: entry_001c6be0
// Address: 0x1c6be0 - 0x1c6c38
void entry_001c6be0_0x1c6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6be0_0x1c6be0");
#endif

    switch (ctx->pc) {
        case 0x1c6becu: goto label_1c6bec;
        case 0x1c6bf4u: goto label_1c6bf4;
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c1cu: goto label_1c6c1c;
        default: break;
    }

    ctx->pc = 0x1c6be0u;

label_1c6be0:
    // 0x1c6be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be4: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C6BE4u;
    SET_GPR_U32(ctx, 31, 0x1C6BECu);
    ctx->pc = 0x1C6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE4u;
    // 0x1c6be8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C6BE4u, 0x1C6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BECu;
label_1c6bec:
    // 0x1c6bec: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C6BECu;
    SET_GPR_U32(ctx, 31, 0x1C6BF4u);
    ctx->pc = 0x1C6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BECu;
    // 0x1c6bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C6BECu, 0x1C6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF4u;
label_1c6bf4:
    // 0x1c6bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1c6bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x1c6bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c00: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6C00u;
    SET_GPR_U32(ctx, 31, 0x1C6C08u);
    ctx->pc = 0x1C6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C00u;
    // 0x1c6c04: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6C00u, 0x1C6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C08u;
label_1c6c08:
    // 0x1c6c08: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x1c6c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1c6c0c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c6c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c6c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c14: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6C14u;
    SET_GPR_U32(ctx, 31, 0x1C6C1Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6C14u, 0x1C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c20: 0x601ffef  bgez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C6C20u;
    {
        const bool branch_taken_0x1c6c20 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1c6c20) {
            ctx->pc = 0x1C6BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6be0;
        }
    }
    ctx->pc = 0x1C6C28u;
    // 0x1c6c28: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6c2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c6c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c6c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C30u;
    {
        const bool branch_taken_0x1c6c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C30u;
        // 0x1c6c34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c30) {
            ctx->pc = 0x1C6C3Cu;
            return;
        }
    }
    ctx->pc = 0x1C6C38u;
}
