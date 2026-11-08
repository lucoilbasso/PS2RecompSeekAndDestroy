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

// Function: entry_001835a0
// Address: 0x1835a0 - 0x1835c4
void entry_001835a0_0x1835a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001835a0_0x1835a0");
#endif

    switch (ctx->pc) {
        case 0x1835a8u: goto label_1835a8;
        default: break;
    }

    ctx->pc = 0x1835a0u;

    // 0x1835a0: 0xc060eb0  jal         func_183AC0
    ctx->pc = 0x1835A0u;
    SET_GPR_U32(ctx, 31, 0x1835A8u);
    ctx->pc = 0x1835A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835A0u;
    // 0x1835a4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AC0u, 0x1835A0u, 0x1835A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835A8u;
label_1835a8:
    // 0x1835a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1835a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1835ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1835acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1835b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1835b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1835b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1835b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1835b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1835b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1835bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1835BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835BCu;
        // 0x1835c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1835BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1835C4u;
}
