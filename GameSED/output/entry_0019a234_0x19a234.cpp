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

// Function: entry_0019a234
// Address: 0x19a234 - 0x19a250
void entry_0019a234_0x19a234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a234_0x19a234");
#endif

    switch (ctx->pc) {
        case 0x19a240u: goto label_19a240;
        default: break;
    }

    ctx->pc = 0x19a234u;

    // 0x19a234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a238: 0xc068584  jal         func_1A1610
    ctx->pc = 0x19A238u;
    SET_GPR_U32(ctx, 31, 0x19A240u);
    ctx->pc = 0x19A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A238u;
    // 0x19a23c: 0x2484deb0  addiu       $a0, $a0, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x19A238u, 0x19A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A240u;
label_19a240:
    // 0x19a240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a248: 0x3e00008  jr          $ra
    ctx->pc = 0x19A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A248u;
        // 0x19a24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A250u;
}
