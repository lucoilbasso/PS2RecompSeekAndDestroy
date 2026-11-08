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

// Function: WCdManFileSeekPC__FiP15CD_READ_COMMAND
// Address: 0x178738 - 0x17879c
void WCdManFileSeekPC__FiP15CD_READ_COMMAND_0x178738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileSeekPC__FiP15CD_READ_COMMAND_0x178738");
#endif

    switch (ctx->pc) {
        case 0x178768u: goto label_178768;
        case 0x178788u: goto label_178788;
        default: break;
    }

    ctx->pc = 0x178738u;

    // 0x178738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17873c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17874c: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x17874cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x178750: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178754: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x178754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x178758: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x178758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    // 0x17875c: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x17875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x178760: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x178760u;
    SET_GPR_U32(ctx, 31, 0x178768u);
    ctx->pc = 0x178764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178760u;
    // 0x178764: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x178760u, 0x178768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178768u;
label_178768:
    // 0x178768: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17876c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178770: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x178770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x178774: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178774u;
    {
        const bool branch_taken_0x178774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x178778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178774u;
        // 0x178778: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178774) {
            ctx->pc = 0x178788u;
            goto label_178788;
        }
    }
    ctx->pc = 0x17877Cu;
    // 0x17877c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178780: 0xc068186  jal         func_1A0618
    ctx->pc = 0x178780u;
    SET_GPR_U32(ctx, 31, 0x178788u);
    ctx->pc = 0x178784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178780u;
    // 0x178784: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x178780u, 0x178788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178788u;
label_178788:
    // 0x178788: 0xae001040  sw          $zero, 0x1040($s0)
    ctx->pc = 0x178788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 0));
    // 0x17878c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178794: 0x3e00008  jr          $ra
    ctx->pc = 0x178794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178794u;
        // 0x178798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17879Cu;
}
