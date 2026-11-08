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

// Function: WFileCreate__Fv
// Address: 0x17ce68 - 0x17cebc
void WFileCreate__Fv_0x17ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFileCreate__Fv_0x17ce68");
#endif

    switch (ctx->pc) {
        case 0x17ce7cu: goto label_17ce7c;
        case 0x17ce84u: goto label_17ce84;
        case 0x17ce9cu: goto label_17ce9c;
        case 0x17cea8u: goto label_17cea8;
        default: break;
    }

    ctx->pc = 0x17ce68u;

    // 0x17ce68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ce6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ce70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17ce74: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17CE74u;
    SET_GPR_U32(ctx, 31, 0x17CE7Cu);
    ctx->pc = 0x17CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE74u;
    // 0x17ce78: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17CE74u, 0x17CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE7Cu;
label_17ce7c:
    // 0x17ce7c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17CE7Cu;
    SET_GPR_U32(ctx, 31, 0x17CE84u);
    ctx->pc = 0x17CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE7Cu;
    // 0x17ce80: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17CE7Cu, 0x17CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE84u;
label_17ce84:
    // 0x17ce84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ce84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17ce8c: 0x2442fb78  addiu       $v0, $v0, -0x488
    ctx->pc = 0x17ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966136));
    // 0x17ce90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce94: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x17CE94u;
    SET_GPR_U32(ctx, 31, 0x17CE9Cu);
    ctx->pc = 0x17CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE94u;
    // 0x17ce98: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x17CE94u, 0x17CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE9Cu;
label_17ce9c:
    // 0x17ce9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cea0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17CEA0u;
    SET_GPR_U32(ctx, 31, 0x17CEA8u);
    ctx->pc = 0x17CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEA0u;
    // 0x17cea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17CEA0u, 0x17CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEA8u;
label_17cea8:
    // 0x17cea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ceb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ceb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17CEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEB4u;
        // 0x17ceb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CEBCu;
}
