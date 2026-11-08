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

// Function: entry_0018b3bc
// Address: 0x18b3bc - 0x18b3d4
void entry_0018b3bc_0x18b3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b3bc_0x18b3bc");
#endif

    switch (ctx->pc) {
        case 0x18b3c4u: goto label_18b3c4;
        default: break;
    }

    ctx->pc = 0x18b3bcu;

    // 0x18b3bc: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x18B3BCu;
    SET_GPR_U32(ctx, 31, 0x18B3C4u);
    ctx->pc = 0x18B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3BCu;
    // 0x18b3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x18B3BCu, 0x18B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3C4u;
label_18b3c4:
    // 0x18b3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b3c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3CCu;
        // 0x18b3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B3D4u;
}
