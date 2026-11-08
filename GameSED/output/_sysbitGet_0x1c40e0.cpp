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

// Function: _sysbitGet
// Address: 0x1c40e0 - 0x1c412c
void _sysbitGet_0x1c40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitGet_0x1c40e0");
#endif

    switch (ctx->pc) {
        case 0x1c4100u: goto label_1c4100;
        case 0x1c4110u: goto label_1c4110;
        default: break;
    }

    ctx->pc = 0x1c40e0u;

    // 0x1c40e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c40e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c40e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c40e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c40ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c40ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c40f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c40f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c40f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c40f8: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1C40F8u;
    SET_GPR_U32(ctx, 31, 0x1C4100u);
    ctx->pc = 0x1C40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40F8u;
    // 0x1c40fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1C40F8u, 0x1C4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4100u;
label_1c4100:
    // 0x1c4100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c4100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4108: 0xc071012  jal         func_1C4048
    ctx->pc = 0x1C4108u;
    SET_GPR_U32(ctx, 31, 0x1C4110u);
    ctx->pc = 0x1C410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4108u;
    // 0x1c410c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4048u, 0x1C4108u, 0x1C4110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4110u;
label_1c4110:
    // 0x1c4110: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c4110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4114: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4118: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c4118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c411c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c411cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4124: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4124u;
        // 0x1c4128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C412Cu;
}
