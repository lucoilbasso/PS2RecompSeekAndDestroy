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

// Function: ApStudioCreate__Fi
// Address: 0x114068 - 0x1140cc
void ApStudioCreate__Fi_0x114068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioCreate__Fi_0x114068");
#endif

    switch (ctx->pc) {
        case 0x114084u: goto label_114084;
        case 0x11408cu: goto label_11408c;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140b4u: goto label_1140b4;
        default: break;
    }

    ctx->pc = 0x114068u;

    // 0x114068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11406c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11407c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11407Cu;
    SET_GPR_U32(ctx, 31, 0x114084u);
    ctx->pc = 0x114080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11407Cu;
    // 0x114080: 0x2404011f  addiu       $a0, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11407Cu, 0x114084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114084u;
label_114084:
    // 0x114084: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x114084u;
    SET_GPR_U32(ctx, 31, 0x11408Cu);
    ctx->pc = 0x114088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114084u;
    // 0x114088: 0x24043640  addiu       $a0, $zero, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x114084u, 0x11408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11408Cu;
label_11408c:
    // 0x11408c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114094: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x114094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x114098: 0x2442e7b8  addiu       $v0, $v0, -0x1848
    ctx->pc = 0x114098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961080));
    // 0x11409c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140a0: 0xc045034  jal         func_1140D0
    ctx->pc = 0x1140A0u;
    SET_GPR_U32(ctx, 31, 0x1140A8u);
    ctx->pc = 0x1140A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140A0u;
    // 0x1140a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1140D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1140D0u, 0x1140A0u, 0x1140A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140A8u;
label_1140a8:
    // 0x1140a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1140a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140ac: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1140ACu;
    SET_GPR_U32(ctx, 31, 0x1140B4u);
    ctx->pc = 0x1140B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140ACu;
    // 0x1140b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1140ACu, 0x1140B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140B4u;
label_1140b4:
    // 0x1140b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1140b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1140b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1140bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1140bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1140c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1140c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1140c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1140C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1140C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140C4u;
        // 0x1140c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1140C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1140CCu;
}
