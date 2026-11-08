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

// Function: __tf7ApcUnit
// Address: 0x1d8f20 - 0x1d8f70
void ps2___tf7ApcUnit_0x1d8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7ApcUnit_0x1d8f20");
#endif

    switch (ctx->pc) {
        case 0x1d8f44u: goto label_1d8f44;
        case 0x1d8f5cu: goto label_1d8f5c;
        default: break;
    }

    ctx->pc = 0x1d8f20u;

    // 0x1d8f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8f24: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d8f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8f2c: 0x24500fb8  addiu       $s0, $v0, 0xFB8
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4024));
    // 0x1d8f30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410FB8u));
    // 0x1d8f34: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8F34u;
    {
        const bool branch_taken_0x1d8f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F34u;
        // 0x1d8f38: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f34) {
            ctx->pc = 0x1D8F5Cu;
            goto label_1d8f5c;
        }
    }
    ctx->pc = 0x1D8F3Cu;
    // 0x1d8f3c: 0xc078420  jal         func_1E1080
    ctx->pc = 0x1D8F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F44u);
    ctx->pc = 0x1E1080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1080u, 0x1D8F3Cu, 0x1D8F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F44u;
label_1d8f44:
    // 0x1d8f44: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d8f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d8f48: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d8f4c: 0x24a56c38  addiu       $a1, $a1, 0x6C38
    ctx->pc = 0x1d8f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27704));
    // 0x1d8f50: 0x24c61cc0  addiu       $a2, $a2, 0x1CC0
    ctx->pc = 0x1d8f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7360));
    // 0x1d8f54: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D8F54u;
    SET_GPR_U32(ctx, 31, 0x1D8F5Cu);
    ctx->pc = 0x1D8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F54u;
    // 0x1d8f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D8F54u, 0x1D8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F5Cu;
label_1d8f5c:
    // 0x1d8f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8f64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F68u;
        // 0x1d8f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8F70u;
}
