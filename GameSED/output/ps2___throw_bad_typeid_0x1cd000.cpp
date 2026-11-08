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

// Function: __throw_bad_typeid
// Address: 0x1cd000 - 0x1cd068
void ps2___throw_bad_typeid_0x1cd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_bad_typeid_0x1cd000");
#endif

    switch (ctx->pc) {
        case 0x1cd024u: goto label_1cd024;
        case 0x1cd030u: goto label_1cd030;
        case 0x1cd044u: goto label_1cd044;
        case 0x1cd04cu: goto label_1cd04c;
        case 0x1cd064u: goto label_1cd064;
        default: break;
    }

    ctx->pc = 0x1cd000u;

    // 0x1cd000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd004: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cd004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cd008: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cd008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cd00c: 0x24510c78  addiu       $s1, $v0, 0xC78
    ctx->pc = 0x1cd00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3192));
    // 0x1cd010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cd010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cd014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cd018: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1cd018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1cd01c: 0xc07358e  jal         func_1CD638
    ctx->pc = 0x1CD01Cu;
    SET_GPR_U32(ctx, 31, 0x1CD024u);
    ctx->pc = 0x1CD020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD01Cu;
    // 0x1cd020: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD638u, 0x1CD01Cu, 0x1CD024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD024u;
label_1cd024:
    // 0x1cd024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd028: 0xc078626  jal         func_1E1898
    ctx->pc = 0x1CD028u;
    SET_GPR_U32(ctx, 31, 0x1CD030u);
    ctx->pc = 0x1CD02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD028u;
    // 0x1cd02c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1898u, 0x1CD028u, 0x1CD030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD030u;
label_1cd030:
    // 0x1cd030: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1cd030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1cd034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd03c: 0xc0732ee  jal         func_1CCBB8
    ctx->pc = 0x1CD03Cu;
    SET_GPR_U32(ctx, 31, 0x1CD044u);
    ctx->pc = 0x1CD040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD03Cu;
    // 0x1cd040: 0x24c618f8  addiu       $a2, $a2, 0x18F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCBB8u, 0x1CD03Cu, 0x1CD044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD044u;
label_1cd044:
    // 0x1cd044: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CD044u;
    SET_GPR_U32(ctx, 31, 0x1CD04Cu);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CD044u, 0x1CD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD04Cu;
label_1cd04c:
    // 0x1cd04c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cd04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cd050: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cd050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cd054: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1cd054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1cd058: 0x2484c868  addiu       $a0, $a0, -0x3798
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953064));
    // 0x1cd05c: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CD05Cu;
    SET_GPR_U32(ctx, 31, 0x1CD064u);
    ctx->pc = 0x1CD060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD05Cu;
    // 0x1cd060: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CD05Cu, 0x1CD064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD064u;
label_1cd064:
    // 0x1cd064: 0x0  nop
    ctx->pc = 0x1cd064u;
    // NOP
    ctx->pc = 0x1cd068u;
}
