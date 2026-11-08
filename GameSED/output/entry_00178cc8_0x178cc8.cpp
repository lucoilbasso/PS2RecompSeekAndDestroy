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

// Function: entry_00178cc8
// Address: 0x178cc8 - 0x178d08
void entry_00178cc8_0x178cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178cc8_0x178cc8");
#endif

    switch (ctx->pc) {
        case 0x178cd0u: goto label_178cd0;
        default: break;
    }

    ctx->pc = 0x178cc8u;

    // 0x178cc8: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x178CC8u;
    SET_GPR_U32(ctx, 31, 0x178CD0u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x178CC8u, 0x178CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CD0u;
label_178cd0:
    // 0x178cd0: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x178cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x178cd4: 0xae130048  sw          $s3, 0x48($s0)
    ctx->pc = 0x178cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 19));
    // 0x178cd8: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x178cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x178cdc: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x178cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x178ce0: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x178ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x178ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178cf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178cf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x178cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178d00: 0x3e00008  jr          $ra
    ctx->pc = 0x178D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D00u;
        // 0x178d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D08u;
}
