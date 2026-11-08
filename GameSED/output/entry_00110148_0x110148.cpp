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

// Function: entry_00110148
// Address: 0x110148 - 0x110168
void entry_00110148_0x110148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110148_0x110148");
#endif

    switch (ctx->pc) {
        case 0x110150u: goto label_110150;
        default: break;
    }

    ctx->pc = 0x110148u;

    // 0x110148: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x110148u;
    SET_GPR_U32(ctx, 31, 0x110150u);
    ctx->pc = 0x11014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110148u;
    // 0x11014c: 0xe621015c  swc1        $f1, 0x15C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x110148u, 0x110150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110150u;
label_110150:
    // 0x110150: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x110150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x110154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11015c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110160: 0x3e00008  jr          $ra
    ctx->pc = 0x110160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110160u;
        // 0x110164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110168u;
}
