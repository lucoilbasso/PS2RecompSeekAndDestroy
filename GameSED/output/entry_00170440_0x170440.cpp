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

// Function: entry_00170440
// Address: 0x170440 - 0x17047c
void entry_00170440_0x170440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170440_0x170440");
#endif

    switch (ctx->pc) {
        case 0x170448u: goto label_170448;
        default: break;
    }

    ctx->pc = 0x170440u;

    // 0x170440: 0xc05cf00  jal         func_173C00
    ctx->pc = 0x170440u;
    SET_GPR_U32(ctx, 31, 0x170448u);
    ctx->pc = 0x173C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173C00u, 0x170440u, 0x170448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170448u;
label_170448:
    // 0x170448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17044c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17044cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170450: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x170450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x170454: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x170454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170458: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x170458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17045c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x17045cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170460: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x170460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x170464: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x170464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170468: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x170468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17046c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x17046cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170470: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x170470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x170474: 0x3e00008  jr          $ra
    ctx->pc = 0x170474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170474u;
        // 0x170478: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17047Cu;
}
