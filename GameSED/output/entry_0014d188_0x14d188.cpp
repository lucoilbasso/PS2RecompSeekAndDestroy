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

// Function: entry_0014d188
// Address: 0x14d188 - 0x14d1a4
void entry_0014d188_0x14d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d188_0x14d188");
#endif

    switch (ctx->pc) {
        case 0x14d190u: goto label_14d190;
        default: break;
    }

    ctx->pc = 0x14d188u;

    // 0x14d188: 0xc0684a0  jal         func_1A1280
    ctx->pc = 0x14D188u;
    SET_GPR_U32(ctx, 31, 0x14D190u);
    ctx->pc = 0x14D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D188u;
    // 0x14d18c: 0x24840204  addiu       $a0, $a0, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1280u, 0x14D188u, 0x14D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D190u;
label_14d190:
    // 0x14d190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d19c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D19Cu;
        // 0x14d1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D1A4u;
}
