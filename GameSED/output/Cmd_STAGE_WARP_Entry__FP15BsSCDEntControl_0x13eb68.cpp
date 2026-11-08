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

// Function: Cmd_STAGE_WARP_Entry__FP15BsSCDEntControl
// Address: 0x13eb68 - 0x13ebec
void Cmd_STAGE_WARP_Entry__FP15BsSCDEntControl_0x13eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_WARP_Entry__FP15BsSCDEntControl_0x13eb68");
#endif

    switch (ctx->pc) {
        case 0x13eb90u: goto label_13eb90;
        case 0x13ebacu: goto label_13ebac;
        case 0x13ebb8u: goto label_13ebb8;
        case 0x13ebd0u: goto label_13ebd0;
        default: break;
    }

    ctx->pc = 0x13eb68u;

    // 0x13eb68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13eb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13eb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13eb70: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x13eb70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x13eb74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13eb78: 0x261011c0  addiu       $s0, $s0, 0x11C0
    ctx->pc = 0x13eb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
    // 0x13eb7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13eb80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13eb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13eb88: 0xc043ff8  jal         func_10FFE0
    ctx->pc = 0x13EB88u;
    SET_GPR_U32(ctx, 31, 0x13EB90u);
    ctx->pc = 0x13EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB88u;
    // 0x13eb8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFE0u, 0x13EB88u, 0x13EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB90u;
label_13eb90:
    // 0x13eb90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13eb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb94: 0x8e3301e4  lw          $s3, 0x1E4($s1)
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x13eb98: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x13eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13eb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13eb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13eba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eba4: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x13EBA4u;
    SET_GPR_U32(ctx, 31, 0x13EBACu);
    ctx->pc = 0x13EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBA4u;
    // 0x13eba8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x13EBA4u, 0x13EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBACu;
label_13ebac:
    // 0x13ebac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebb0: 0xc0619ca  jal         func_186728
    ctx->pc = 0x13EBB0u;
    SET_GPR_U32(ctx, 31, 0x13EBB8u);
    ctx->pc = 0x13EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBB0u;
    // 0x13ebb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186728u, 0x13EBB0u, 0x13EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBB8u;
label_13ebb8:
    // 0x13ebb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebbc: 0x8e6202f8  lw          $v0, 0x2F8($s3)
    ctx->pc = 0x13ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 760)));
    // 0x13ebc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBC0u;
    {
        const bool branch_taken_0x13ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBC0u;
        // 0x13ebc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebc0) {
            ctx->pc = 0x13EBD0u;
            goto label_13ebd0;
        }
    }
    ctx->pc = 0x13EBC8u;
    // 0x13ebc8: 0xc04c8c4  jal         func_132310
    ctx->pc = 0x13EBC8u;
    SET_GPR_U32(ctx, 31, 0x13EBD0u);
    ctx->pc = 0x132310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132310u, 0x13EBC8u, 0x13EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBD0u;
label_13ebd0:
    // 0x13ebd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ebd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ebd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ebd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ebd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ebd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ebdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13ebdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ebe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x13EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBE4u;
        // 0x13ebe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EBECu;
}
