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

// Function: WMidiStdCreate__Fv
// Address: 0x17be68 - 0x17bebc
void WMidiStdCreate__Fv_0x17be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMidiStdCreate__Fv_0x17be68");
#endif

    switch (ctx->pc) {
        case 0x17be7cu: goto label_17be7c;
        case 0x17be84u: goto label_17be84;
        case 0x17be9cu: goto label_17be9c;
        case 0x17bea8u: goto label_17bea8;
        default: break;
    }

    ctx->pc = 0x17be68u;

    // 0x17be68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17be6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17be70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17be74: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17BE74u;
    SET_GPR_U32(ctx, 31, 0x17BE7Cu);
    ctx->pc = 0x17BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE74u;
    // 0x17be78: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17BE74u, 0x17BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE7Cu;
label_17be7c:
    // 0x17be7c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17BE7Cu;
    SET_GPR_U32(ctx, 31, 0x17BE84u);
    ctx->pc = 0x17BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE7Cu;
    // 0x17be80: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17BE7Cu, 0x17BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE84u;
label_17be84:
    // 0x17be84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17be84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17be8c: 0x2442fb08  addiu       $v0, $v0, -0x4F8
    ctx->pc = 0x17be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966024));
    // 0x17be90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be94: 0xc05efb0  jal         func_17BEC0
    ctx->pc = 0x17BE94u;
    SET_GPR_U32(ctx, 31, 0x17BE9Cu);
    ctx->pc = 0x17BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE94u;
    // 0x17be98: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEC0u, 0x17BE94u, 0x17BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE9Cu;
label_17be9c:
    // 0x17be9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bea0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17BEA0u;
    SET_GPR_U32(ctx, 31, 0x17BEA8u);
    ctx->pc = 0x17BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BEA0u;
    // 0x17bea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17BEA0u, 0x17BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEA8u;
label_17bea8:
    // 0x17bea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17beac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17beacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17beb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17beb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17beb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEB4u;
        // 0x17beb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BEBCu;
}
