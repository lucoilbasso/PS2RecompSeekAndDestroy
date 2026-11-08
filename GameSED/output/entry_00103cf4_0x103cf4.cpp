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

// Function: entry_00103cf4
// Address: 0x103cf4 - 0x103d18
void entry_00103cf4_0x103cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103cf4_0x103cf4");
#endif

    switch (ctx->pc) {
        case 0x103d04u: goto label_103d04;
        default: break;
    }

    ctx->pc = 0x103cf4u;

    // 0x103cf4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x103cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103cf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103cfc: 0xc067260  jal         func_19C980
    ctx->pc = 0x103CFCu;
    SET_GPR_U32(ctx, 31, 0x103D04u);
    ctx->pc = 0x103D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CFCu;
    // 0x103d00: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x103CFCu, 0x103D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D04u;
label_103d04:
    // 0x103d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103d10: 0x3e00008  jr          $ra
    ctx->pc = 0x103D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D10u;
        // 0x103d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D18u;
}
