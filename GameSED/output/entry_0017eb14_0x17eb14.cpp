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

// Function: entry_0017eb14
// Address: 0x17eb14 - 0x17eb38
void entry_0017eb14_0x17eb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb14_0x17eb14");
#endif

    switch (ctx->pc) {
        case 0x17eb1cu: goto label_17eb1c;
        default: break;
    }

    ctx->pc = 0x17eb14u;

    // 0x17eb14: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x17EB14u;
    SET_GPR_U32(ctx, 31, 0x17EB1Cu);
    ctx->pc = 0x17EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB14u;
    // 0x17eb18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x17EB14u, 0x17EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB1Cu;
label_17eb1c:
    // 0x17eb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17eb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17eb24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17eb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17eb28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB30u;
        // 0x17eb34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EB38u;
}
