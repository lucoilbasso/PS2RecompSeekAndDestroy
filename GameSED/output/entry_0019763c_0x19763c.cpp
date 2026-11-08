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

// Function: entry_0019763c
// Address: 0x19763c - 0x197674
void entry_0019763c_0x19763c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019763c_0x19763c");
#endif

    switch (ctx->pc) {
        case 0x197644u: goto label_197644;
        default: break;
    }

    ctx->pc = 0x19763cu;

    // 0x19763c: 0xc05dd18  jal         func_177460
    ctx->pc = 0x19763Cu;
    SET_GPR_U32(ctx, 31, 0x197644u);
    ctx->pc = 0x197640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19763Cu;
    // 0x197640: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x19763Cu, 0x197644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197644u;
label_197644:
    // 0x197644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x197644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197648: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x197648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19764c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19764cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197650: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x197650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197654: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x197654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197658: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x197658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19765c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x19765cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197660: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x197660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x197664: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x197664u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197668: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x197668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19766c: 0x3e00008  jr          $ra
    ctx->pc = 0x19766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19766Cu;
        // 0x197670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197674u;
}
