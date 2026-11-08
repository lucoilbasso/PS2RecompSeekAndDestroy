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

// Function: _sysbitMarker
// Address: 0x1c4130 - 0x1c4174
void _sysbitMarker_0x1c4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitMarker_0x1c4130");
#endif

    switch (ctx->pc) {
        case 0x1c414cu: goto label_1c414c;
        case 0x1c415cu: goto label_1c415c;
        default: break;
    }

    ctx->pc = 0x1c4130u;

    // 0x1c4130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c413c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c4140: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4144: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1C4144u;
    SET_GPR_U32(ctx, 31, 0x1C414Cu);
    ctx->pc = 0x1C4148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4144u;
    // 0x1c4148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1C4144u, 0x1C414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C414Cu;
label_1c414c:
    // 0x1c414c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c414cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4154: 0xc071012  jal         func_1C4048
    ctx->pc = 0x1C4154u;
    SET_GPR_U32(ctx, 31, 0x1C415Cu);
    ctx->pc = 0x1C4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4154u;
    // 0x1c4158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4048u, 0x1C4154u, 0x1C415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C415Cu;
label_1c415c:
    // 0x1c415c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c415cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4164: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c4164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c416c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C416Cu;
        // 0x1c4170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4174u;
}
