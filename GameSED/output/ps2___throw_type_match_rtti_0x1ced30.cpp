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

// Function: __throw_type_match_rtti
// Address: 0x1ced30 - 0x1ced58
void ps2___throw_type_match_rtti_0x1ced30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_rtti_0x1ced30");
#endif

    switch (ctx->pc) {
        case 0x1ced40u: goto label_1ced40;
        default: break;
    }

    ctx->pc = 0x1ced30u;

    // 0x1ced30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ced34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ced34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ced38: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CED38u;
    SET_GPR_U32(ctx, 31, 0x1CED40u);
    ctx->pc = 0x1CED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED38u;
    // 0x1ced3c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CED38u, 0x1CED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED40u;
label_1ced40:
    // 0x1ced40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced44: 0x38430000  xori        $v1, $v0, 0x0
    ctx->pc = 0x1ced44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ced48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ced48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced4c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1ced4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1ced50: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED50u;
        // 0x1ced54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED58u;
}
