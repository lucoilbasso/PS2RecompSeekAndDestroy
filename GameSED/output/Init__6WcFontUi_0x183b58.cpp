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

// Function: Init__6WcFontUi
// Address: 0x183b58 - 0x183b9c
void Init__6WcFontUi_0x183b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6WcFontUi_0x183b58");
#endif

    switch (ctx->pc) {
        case 0x183b74u: goto label_183b74;
        case 0x183b88u: goto label_183b88;
        default: break;
    }

    ctx->pc = 0x183b58u;

    // 0x183b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183b6c: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x183B6Cu;
    SET_GPR_U32(ctx, 31, 0x183B74u);
    ctx->pc = 0x183B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B6Cu;
    // 0x183b70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x183B6Cu, 0x183B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B74u;
label_183b74:
    // 0x183b74: 0x24020805  addiu       $v0, $zero, 0x805
    ctx->pc = 0x183b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x183b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x183b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x183b80: 0xc060ee8  jal         func_183BA0
    ctx->pc = 0x183B80u;
    SET_GPR_U32(ctx, 31, 0x183B88u);
    ctx->pc = 0x183B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B80u;
    // 0x183b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183BA0u, 0x183B80u, 0x183B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B88u;
label_183b88:
    // 0x183b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b94: 0x3e00008  jr          $ra
    ctx->pc = 0x183B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B94u;
        // 0x183b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B9Cu;
}
