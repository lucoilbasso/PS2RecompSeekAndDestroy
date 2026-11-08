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

// Function: WTocCreate__FPc
// Address: 0x183710 - 0x183774
void WTocCreate__FPc_0x183710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTocCreate__FPc_0x183710");
#endif

    switch (ctx->pc) {
        case 0x18372cu: goto label_18372c;
        case 0x183734u: goto label_183734;
        case 0x183750u: goto label_183750;
        case 0x18375cu: goto label_18375c;
        default: break;
    }

    ctx->pc = 0x183710u;

    // 0x183710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18371c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183724: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x183724u;
    SET_GPR_U32(ctx, 31, 0x18372Cu);
    ctx->pc = 0x183728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183724u;
    // 0x183728: 0x24040605  addiu       $a0, $zero, 0x605 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x183724u, 0x18372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18372Cu;
label_18372c:
    // 0x18372c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x18372Cu;
    SET_GPR_U32(ctx, 31, 0x183734u);
    ctx->pc = 0x183730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18372Cu;
    // 0x183730: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x18372Cu, 0x183734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183734u;
label_183734:
    // 0x183734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18373c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x18373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x183740: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x183744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183748: 0xc060dde  jal         func_183778
    ctx->pc = 0x183748u;
    SET_GPR_U32(ctx, 31, 0x183750u);
    ctx->pc = 0x18374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183748u;
    // 0x18374c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183778u, 0x183748u, 0x183750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183750u;
label_183750:
    // 0x183750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183754: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x183754u;
    SET_GPR_U32(ctx, 31, 0x18375Cu);
    ctx->pc = 0x183758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183754u;
    // 0x183758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x183754u, 0x18375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18375Cu;
label_18375c:
    // 0x18375c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18375cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18376c: 0x3e00008  jr          $ra
    ctx->pc = 0x18376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18376Cu;
        // 0x183770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183774u;
}
