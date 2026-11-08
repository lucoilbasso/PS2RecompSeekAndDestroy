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

// Function: CellArraySetup_ASCII__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePage
// Address: 0x18e958 - 0x18e990
void CellArraySetup_ASCII__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePage_0x18e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CellArraySetup_ASCII__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePage_0x18e958");
#endif

    switch (ctx->pc) {
        case 0x18e974u: goto label_18e974;
        default: break;
    }

    ctx->pc = 0x18e958u;

    // 0x18e958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e95c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18e960: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18e964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18e96c: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x18E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E96Cu;
    // 0x18e970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E96Cu, 0x18E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E974u;
label_18e974:
    // 0x18e974: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18e978: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x18e97c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e980: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18e984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e988: 0x3e00008  jr          $ra
    ctx->pc = 0x18E988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E988u;
        // 0x18e98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E990u;
}
