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

// Function: Cmd_PAY_GOLD_Entry__FP15BsSCDEntControl
// Address: 0x119498 - 0x1194fc
void Cmd_PAY_GOLD_Entry__FP15BsSCDEntControl_0x119498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PAY_GOLD_Entry__FP15BsSCDEntControl_0x119498");
#endif

    switch (ctx->pc) {
        case 0x1194a8u: goto label_1194a8;
        case 0x1194f0u: goto label_1194f0;
        default: break;
    }

    ctx->pc = 0x119498u;

    // 0x119498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11949c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1194a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1194A0u;
    SET_GPR_U32(ctx, 31, 0x1194A8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1194A0u, 0x1194A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194A8u;
label_1194a8:
    // 0x1194a8: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x1194a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1194ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1194acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1194b0: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1194b4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1194b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1194b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1194b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1194bc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1194BCu;
    {
        const bool branch_taken_0x1194bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194BCu;
        // 0x1194c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194bc) {
            ctx->pc = 0x1194D0u;
            goto label_1194d0;
        }
    }
    ctx->pc = 0x1194C4u;
    // 0x1194c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1194C4u;
    {
        const bool branch_taken_0x1194c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194C4u;
        // 0x1194c8: 0xaf86896c  sw          $a2, -0x7694($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194c4) {
            ctx->pc = 0x1194D4u;
            goto label_1194d4;
        }
    }
    ctx->pc = 0x1194CCu;
    // 0x1194cc: 0x0  nop
    ctx->pc = 0x1194ccu;
    // NOP
label_1194d0:
    // 0x1194d0: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x1194d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
label_1194d4:
    // 0x1194d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1194D4u;
    {
        const bool branch_taken_0x1194d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194D4u;
        // 0x1194d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194d4) {
            ctx->pc = 0x1194E8u;
            goto label_1194e8;
        }
    }
    ctx->pc = 0x1194DCu;
    // 0x1194dc: 0x806a1b0  j           func_1A86C0
    ctx->pc = 0x1194DCu;
    ctx->pc = 0x1194E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194DCu;
    // 0x1194e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    BSCDEntScenarioFlagsOn__Fi_0x1a86c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1194E4u;
    // 0x1194e4: 0x0  nop
    ctx->pc = 0x1194e4u;
    // NOP
label_1194e8:
    // 0x1194e8: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x1194E8u;
    SET_GPR_U32(ctx, 31, 0x1194F0u);
    ctx->pc = 0x1194ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194E8u;
    // 0x1194ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8760u, 0x1194E8u, 0x1194F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194F0u;
label_1194f0:
    // 0x1194f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1194f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1194f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1194F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F4u;
        // 0x1194f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194FCu;
}
