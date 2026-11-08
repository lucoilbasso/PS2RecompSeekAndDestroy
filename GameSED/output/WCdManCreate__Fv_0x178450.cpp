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

// Function: WCdManCreate__Fv
// Address: 0x178450 - 0x1784a4
void WCdManCreate__Fv_0x178450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManCreate__Fv_0x178450");
#endif

    switch (ctx->pc) {
        case 0x178464u: goto label_178464;
        case 0x17846cu: goto label_17846c;
        case 0x178484u: goto label_178484;
        case 0x178490u: goto label_178490;
        default: break;
    }

    ctx->pc = 0x178450u;

    // 0x178450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178458: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17845c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17845Cu;
    SET_GPR_U32(ctx, 31, 0x178464u);
    ctx->pc = 0x178460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17845Cu;
    // 0x178460: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17845Cu, 0x178464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178464u;
label_178464:
    // 0x178464: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x178464u;
    SET_GPR_U32(ctx, 31, 0x17846Cu);
    ctx->pc = 0x178468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178464u;
    // 0x178468: 0x24041b90  addiu       $a0, $zero, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x178464u, 0x17846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17846Cu;
label_17846c:
    // 0x17846c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17846cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178470: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x178474: 0x2442f9a8  addiu       $v0, $v0, -0x658
    ctx->pc = 0x178474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965672));
    // 0x178478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17847c: 0xc05e12a  jal         func_1784A8
    ctx->pc = 0x17847Cu;
    SET_GPR_U32(ctx, 31, 0x178484u);
    ctx->pc = 0x178480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17847Cu;
    // 0x178480: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A8u, 0x17847Cu, 0x178484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178484u;
label_178484:
    // 0x178484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178488: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x178488u;
    SET_GPR_U32(ctx, 31, 0x178490u);
    ctx->pc = 0x17848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178488u;
    // 0x17848c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x178488u, 0x178490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178490u;
label_178490:
    // 0x178490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17849c: 0x3e00008  jr          $ra
    ctx->pc = 0x17849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17849Cu;
        // 0x1784a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784A4u;
}
