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

// Function: entry_0010aa8c
// Address: 0x10aa8c - 0x10aac8
void entry_0010aa8c_0x10aa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aa8c_0x10aa8c");
#endif

    switch (ctx->pc) {
        case 0x10aa98u: goto label_10aa98;
        default: break;
    }

    ctx->pc = 0x10aa8cu;

    // 0x10aa8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa90: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10AA90u;
    SET_GPR_U32(ctx, 31, 0x10AA98u);
    ctx->pc = 0x10AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA90u;
    // 0x10aa94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10AA90u, 0x10AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA98u;
label_10aa98:
    // 0x10aa98: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10aa98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10aa9c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x10aa9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10aaa0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10aaa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10aaa4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x10aaa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10aaa8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x10aaa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10aaac: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x10aaacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x10aab0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x10aab0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10aab4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x10aab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x10aab8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10aab8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10aabc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x10aabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x10aac0: 0x3e00008  jr          $ra
    ctx->pc = 0x10AAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC0u;
        // 0x10aac4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AAC8u;
}
