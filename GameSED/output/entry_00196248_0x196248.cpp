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

// Function: entry_00196248
// Address: 0x196248 - 0x19625c
void entry_00196248_0x196248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196248_0x196248");
#endif

    switch (ctx->pc) {
        case 0x196250u: goto label_196250;
        default: break;
    }

    ctx->pc = 0x196248u;

    // 0x196248: 0xc0612e0  jal         func_184B80
    ctx->pc = 0x196248u;
    SET_GPR_U32(ctx, 31, 0x196250u);
    ctx->pc = 0x19624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196248u;
    // 0x19624c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184B80u, 0x196248u, 0x196250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196250u;
label_196250:
    // 0x196250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196254: 0x3e00008  jr          $ra
    ctx->pc = 0x196254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196254u;
        // 0x196258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19625Cu;
}
