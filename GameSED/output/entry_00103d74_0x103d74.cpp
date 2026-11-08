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

// Function: entry_00103d74
// Address: 0x103d74 - 0x103d98
void entry_00103d74_0x103d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103d74_0x103d74");
#endif

    switch (ctx->pc) {
        case 0x103d84u: goto label_103d84;
        default: break;
    }

    ctx->pc = 0x103d74u;

    // 0x103d74: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103d78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103d7c: 0xc067260  jal         func_19C980
    ctx->pc = 0x103D7Cu;
    SET_GPR_U32(ctx, 31, 0x103D84u);
    ctx->pc = 0x103D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D7Cu;
    // 0x103d80: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x103D7Cu, 0x103D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D84u;
label_103d84:
    // 0x103d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103d90: 0x3e00008  jr          $ra
    ctx->pc = 0x103D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D90u;
        // 0x103d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D98u;
}
