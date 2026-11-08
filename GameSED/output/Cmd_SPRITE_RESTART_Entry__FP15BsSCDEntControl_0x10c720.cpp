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

// Function: Cmd_SPRITE_RESTART_Entry__FP15BsSCDEntControl
// Address: 0x10c720 - 0x10c7ac
void Cmd_SPRITE_RESTART_Entry__FP15BsSCDEntControl_0x10c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_RESTART_Entry__FP15BsSCDEntControl_0x10c720");
#endif

    switch (ctx->pc) {
        case 0x10c748u: goto label_10c748;
        case 0x10c768u: goto label_10c768;
        case 0x10c798u: goto label_10c798;
        default: break;
    }

    ctx->pc = 0x10c720u;

    // 0x10c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c724: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c73c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c740: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C740u;
    SET_GPR_U32(ctx, 31, 0x10C748u);
    ctx->pc = 0x10C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C740u;
    // 0x10c744: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C740u, 0x10C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C748u;
label_10c748:
    // 0x10c748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c74c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c750: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10c754: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c758: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C758u;
    {
        const bool branch_taken_0x10c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C758u;
        // 0x10c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c758) {
            ctx->pc = 0x10C76Cu;
            goto label_10c76c;
        }
    }
    ctx->pc = 0x10C760u;
    // 0x10c760: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C760u;
    SET_GPR_U32(ctx, 31, 0x10C768u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C760u, 0x10C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C768u;
label_10c768:
    // 0x10c768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c76c:
    // 0x10c76c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10c770: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x10c770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10c774: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C774u;
    {
        const bool branch_taken_0x10c774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C774u;
        // 0x10c778: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c774) {
            ctx->pc = 0x10C790u;
            goto label_10c790;
        }
    }
    ctx->pc = 0x10C77Cu;
    // 0x10c77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c788: 0x8062d46  j           func_18B518
    ctx->pc = 0x10C788u;
    ctx->pc = 0x10C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C788u;
    // 0x10c78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B518u;
    WSpriteStopSequence__FP8WcSpritei_0x18b518(rdram, ctx, runtime); return;
    ctx->pc = 0x10C790u;
label_10c790:
    // 0x10c790: 0xc062d1e  jal         func_18B478
    ctx->pc = 0x10C790u;
    SET_GPR_U32(ctx, 31, 0x10C798u);
    ctx->pc = 0x10C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C790u;
    // 0x10c794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B478u, 0x10C790u, 0x10C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C798u;
label_10c798:
    // 0x10c798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7A4u;
        // 0x10c7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C7ACu;
}
