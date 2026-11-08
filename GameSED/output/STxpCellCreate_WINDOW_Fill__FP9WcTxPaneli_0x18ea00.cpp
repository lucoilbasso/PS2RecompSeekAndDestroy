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

// Function: STxpCellCreate_WINDOW_Fill__FP9WcTxPaneli
// Address: 0x18ea00 - 0x18ea3c
void STxpCellCreate_WINDOW_Fill__FP9WcTxPaneli_0x18ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("STxpCellCreate_WINDOW_Fill__FP9WcTxPaneli_0x18ea00");
#endif

    switch (ctx->pc) {
        case 0x18ea30u: goto label_18ea30;
        default: break;
    }

    ctx->pc = 0x18ea00u;

    // 0x18ea00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ea04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ea08: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EA08u;
    {
        const bool branch_taken_0x18ea08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA08u;
        // 0x18ea0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea08) {
            ctx->pc = 0x18EA20u;
            goto label_18ea20;
        }
    }
    ctx->pc = 0x18EA10u;
    // 0x18ea10: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18ea14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EA14u;
    {
        const bool branch_taken_0x18ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x2445ee18  addiu       $a1, $v0, -0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea14) {
            ctx->pc = 0x18EA28u;
            goto label_18ea28;
        }
    }
    ctx->pc = 0x18EA1Cu;
    // 0x18ea1c: 0x0  nop
    ctx->pc = 0x18ea1cu;
    // NOP
label_18ea20:
    // 0x18ea20: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18ea24: 0x2445ee30  addiu       $a1, $v0, -0x11D0
    ctx->pc = 0x18ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962736));
label_18ea28:
    // 0x18ea28: 0xc06338e  jal         func_18CE38
    ctx->pc = 0x18EA28u;
    SET_GPR_U32(ctx, 31, 0x18EA30u);
    ctx->pc = 0x18CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE38u, 0x18EA28u, 0x18EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA30u;
label_18ea30:
    // 0x18ea30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea34: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA34u;
        // 0x18ea38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EA3Cu;
}
