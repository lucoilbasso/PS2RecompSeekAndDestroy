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

// Function: BSCDEntGet1TocParam__FP15BsSCDEntControl
// Address: 0x1a8968 - 0x1a89b8
void BSCDEntGet1TocParam__FP15BsSCDEntControl_0x1a8968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGet1TocParam__FP15BsSCDEntControl_0x1a8968");
#endif

    switch (ctx->pc) {
        case 0x1a89a0u: goto label_1a89a0;
        default: break;
    }

    ctx->pc = 0x1a8968u;

    // 0x1a8968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a896c: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x1a896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1a8970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8974: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a897c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8980: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a8980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8984: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8988: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a898c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a898cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8990: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8990u;
    {
        const bool branch_taken_0x1a8990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8990u;
        // 0x1a8994: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8990) {
            ctx->pc = 0x1A89A8u;
            goto label_1a89a8;
        }
    }
    ctx->pc = 0x1A8998u;
    // 0x1a8998: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8998u;
    SET_GPR_U32(ctx, 31, 0x1A89A0u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8998u, 0x1A89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89A0u;
label_1a89a0:
    // 0x1a89a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A89A0u;
    {
        const bool branch_taken_0x1a89a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89A0u;
        // 0x1a89a4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89a0) {
            ctx->pc = 0x1A89ACu;
            goto label_1a89ac;
        }
    }
    ctx->pc = 0x1A89A8u;
label_1a89a8:
    // 0x1a89a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a89a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a89ac:
    // 0x1a89ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a89acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a89b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89B0u;
        // 0x1a89b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A89B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A89B8u;
}
