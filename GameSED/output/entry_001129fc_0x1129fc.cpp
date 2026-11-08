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

// Function: entry_001129fc
// Address: 0x1129fc - 0x112a1c
void entry_001129fc_0x1129fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001129fc_0x1129fc");
#endif

    switch (ctx->pc) {
        case 0x112a10u: goto label_112a10;
        default: break;
    }

    ctx->pc = 0x1129fcu;

    // 0x1129fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1129fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x112a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x112a04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112a08: 0xc0442a8  jal         func_110AA0
    ctx->pc = 0x112A08u;
    SET_GPR_U32(ctx, 31, 0x112A10u);
    ctx->pc = 0x112A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A08u;
    // 0x112a0c: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AA0u, 0x112A08u, 0x112A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A10u;
label_112a10:
    // 0x112a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112a14: 0x3e00008  jr          $ra
    ctx->pc = 0x112A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A14u;
        // 0x112a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A1Cu;
}
