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

// Function: __tf17__class_type_info
// Address: 0x1e1bf0 - 0x1e1c40
void ps2___tf17__class_type_info_0x1e1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf17__class_type_info_0x1e1bf0");
#endif

    switch (ctx->pc) {
        case 0x1e1c14u: goto label_1e1c14;
        case 0x1e1c2cu: goto label_1e1c2c;
        default: break;
    }

    ctx->pc = 0x1e1bf0u;

    // 0x1e1bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1bf4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e1bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1bfc: 0x24502110  addiu       $s0, $v0, 0x2110
    ctx->pc = 0x1e1bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8464));
    // 0x1e1c00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x412110u));
    // 0x1e1c04: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1C04u;
    {
        const bool branch_taken_0x1e1c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C04u;
        // 0x1e1c08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c04) {
            ctx->pc = 0x1E1C2Cu;
            goto label_1e1c2c;
        }
    }
    ctx->pc = 0x1E1C0Cu;
    // 0x1e1c0c: 0xc078666  jal         func_1E1998
    ctx->pc = 0x1E1C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C14u);
    ctx->pc = 0x1E1998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1998u, 0x1E1C0Cu, 0x1E1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C14u;
label_1e1c14:
    // 0x1e1c14: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e1c18: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1e1c1c: 0x24a5c130  addiu       $a1, $a1, -0x3ED0
    ctx->pc = 0x1e1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951216));
    // 0x1e1c20: 0x24c620f0  addiu       $a2, $a2, 0x20F0
    ctx->pc = 0x1e1c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8432));
    // 0x1e1c24: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E1C24u;
    SET_GPR_U32(ctx, 31, 0x1E1C2Cu);
    ctx->pc = 0x1E1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C24u;
    // 0x1e1c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E1C24u, 0x1E1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C2Cu;
label_1e1c2c:
    // 0x1e1c2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1c34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C38u;
        // 0x1e1c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1C40u;
}
