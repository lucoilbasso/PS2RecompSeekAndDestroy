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

// Function: ApItemTankIDCheck__Fi
// Address: 0x11a5f8 - 0x11a668
void ApItemTankIDCheck__Fi_0x11a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemTankIDCheck__Fi_0x11a5f8");
#endif

    switch (ctx->pc) {
        case 0x11a624u: goto label_11a624;
        case 0x11a640u: goto label_11a640;
        case 0x11a658u: goto label_11a658;
        default: break;
    }

    ctx->pc = 0x11a5f8u;

    // 0x11a5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a604: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A604u;
    {
        const bool branch_taken_0x11a604 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A604u;
        // 0x11a608: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a604) {
            ctx->pc = 0x11A624u;
            goto label_11a624;
        }
    }
    ctx->pc = 0x11A60Cu;
    // 0x11a60c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a610: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a614: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a618: 0x24a542f8  addiu       $a1, $a1, 0x42F8
    ctx->pc = 0x11a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17144));
    // 0x11a61c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A61Cu;
    SET_GPR_U32(ctx, 31, 0x11A624u);
    ctx->pc = 0x11A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A61Cu;
    // 0x11a620: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A61Cu, 0x11A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A624u;
label_11a624:
    // 0x11a624: 0x2a02006e  slti        $v0, $s0, 0x6E
    ctx->pc = 0x11a624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x11a628: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11A628u;
    {
        const bool branch_taken_0x11a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a628) {
            ctx->pc = 0x11A62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A628u;
            // 0x11a62c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A65Cu;
            goto label_11a65c;
        }
    }
    ctx->pc = 0x11A630u;
    // 0x11a630: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11a630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11a634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a638: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11A638u;
    SET_GPR_U32(ctx, 31, 0x11A640u);
    ctx->pc = 0x11A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A638u;
    // 0x11a63c: 0x24844308  addiu       $a0, $a0, 0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11A638u, 0x11A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A640u;
label_11a640:
    // 0x11a640: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a644: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a648: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a64c: 0x24a54318  addiu       $a1, $a1, 0x4318
    ctx->pc = 0x11a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    // 0x11a650: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A650u;
    SET_GPR_U32(ctx, 31, 0x11A658u);
    ctx->pc = 0x11A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A650u;
    // 0x11a654: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A650u, 0x11A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A658u;
label_11a658:
    // 0x11a658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a65c:
    // 0x11a65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11a65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a660: 0x3e00008  jr          $ra
    ctx->pc = 0x11A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A660u;
        // 0x11a664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A668u;
}
