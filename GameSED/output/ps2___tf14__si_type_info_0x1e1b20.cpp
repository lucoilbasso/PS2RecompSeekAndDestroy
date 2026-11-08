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

// Function: __tf14__si_type_info
// Address: 0x1e1b20 - 0x1e1b70
void ps2___tf14__si_type_info_0x1e1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf14__si_type_info_0x1e1b20");
#endif

    switch (ctx->pc) {
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b5cu: goto label_1e1b5c;
        default: break;
    }

    ctx->pc = 0x1e1b20u;

    // 0x1e1b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1b24: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e1b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1b2c: 0x24502100  addiu       $s0, $v0, 0x2100
    ctx->pc = 0x1e1b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
    // 0x1e1b30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x412100u));
    // 0x1e1b34: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1B34u;
    {
        const bool branch_taken_0x1e1b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B34u;
        // 0x1e1b38: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b34) {
            ctx->pc = 0x1E1B5Cu;
            goto label_1e1b5c;
        }
    }
    ctx->pc = 0x1E1B3Cu;
    // 0x1e1b3c: 0xc078666  jal         func_1E1998
    ctx->pc = 0x1E1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B44u);
    ctx->pc = 0x1E1998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1998u, 0x1E1B3Cu, 0x1E1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B44u;
label_1e1b44:
    // 0x1e1b44: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e1b48: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1e1b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1e1b4c: 0x24a5c118  addiu       $a1, $a1, -0x3EE8
    ctx->pc = 0x1e1b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951192));
    // 0x1e1b50: 0x24c620f0  addiu       $a2, $a2, 0x20F0
    ctx->pc = 0x1e1b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8432));
    // 0x1e1b54: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E1B54u;
    SET_GPR_U32(ctx, 31, 0x1E1B5Cu);
    ctx->pc = 0x1E1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B54u;
    // 0x1e1b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E1B54u, 0x1E1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B5Cu;
label_1e1b5c:
    // 0x1e1b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B68u;
        // 0x1e1b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1B70u;
}
