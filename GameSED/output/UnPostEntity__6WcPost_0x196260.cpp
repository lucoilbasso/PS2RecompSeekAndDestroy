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

// Function: UnPostEntity__6WcPost
// Address: 0x196260 - 0x196288
void UnPostEntity__6WcPost_0x196260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnPostEntity__6WcPost_0x196260");
#endif

    switch (ctx->pc) {
        case 0x19627cu: goto label_19627c;
        default: break;
    }

    ctx->pc = 0x196260u;

    // 0x196260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196268: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x19626c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19626Cu;
    {
        const bool branch_taken_0x19626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19626c) {
            ctx->pc = 0x196270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19626Cu;
            // 0x196270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196280u;
            goto label_196280;
        }
    }
    ctx->pc = 0x196274u;
    // 0x196274: 0xc06184c  jal         func_186130
    ctx->pc = 0x196274u;
    SET_GPR_U32(ctx, 31, 0x19627Cu);
    ctx->pc = 0x186130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186130u, 0x196274u, 0x19627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19627Cu;
label_19627c:
    // 0x19627c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196280:
    // 0x196280: 0x3e00008  jr          $ra
    ctx->pc = 0x196280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196280u;
        // 0x196284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196288u;
}
