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

// Function: WObjectCreate__Fv
// Address: 0x195120 - 0x195174
void WObjectCreate__Fv_0x195120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectCreate__Fv_0x195120");
#endif

    switch (ctx->pc) {
        case 0x195134u: goto label_195134;
        case 0x19513cu: goto label_19513c;
        case 0x195154u: goto label_195154;
        case 0x195160u: goto label_195160;
        default: break;
    }

    ctx->pc = 0x195120u;

    // 0x195120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195128: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x195128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19512c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19512Cu;
    SET_GPR_U32(ctx, 31, 0x195134u);
    ctx->pc = 0x195130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19512Cu;
    // 0x195130: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19512Cu, 0x195134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195134u;
label_195134:
    // 0x195134: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x195134u;
    SET_GPR_U32(ctx, 31, 0x19513Cu);
    ctx->pc = 0x195138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195134u;
    // 0x195138: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x195134u, 0x19513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19513Cu;
label_19513c:
    // 0x19513c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195140: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x195144: 0x24420690  addiu       $v0, $v0, 0x690
    ctx->pc = 0x195144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
    // 0x195148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19514c: 0xc064e54  jal         func_193950
    ctx->pc = 0x19514Cu;
    SET_GPR_U32(ctx, 31, 0x195154u);
    ctx->pc = 0x195150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19514Cu;
    // 0x195150: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x19514Cu, 0x195154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195154u;
label_195154:
    // 0x195154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195158: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x195158u;
    SET_GPR_U32(ctx, 31, 0x195160u);
    ctx->pc = 0x19515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195158u;
    // 0x19515c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x195158u, 0x195160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195160u;
label_195160:
    // 0x195160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x195160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195164: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x195164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19516c: 0x3e00008  jr          $ra
    ctx->pc = 0x19516Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19516Cu;
        // 0x195170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19516Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195174u;
}
