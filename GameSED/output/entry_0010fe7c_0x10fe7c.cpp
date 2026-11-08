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

// Function: entry_0010fe7c
// Address: 0x10fe7c - 0x10fea4
void entry_0010fe7c_0x10fe7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe7c_0x10fe7c");
#endif

    ctx->pc = 0x10fe7cu;

    // 0x10fe7c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10fe7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10fe80: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x10fe80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10fe84: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10fe84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10fe88: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x10fe88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10fe8c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x10fe8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10fe90: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x10fe90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x10fe94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10fe98: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x10fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10fe9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE9Cu;
        // 0x10fea0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FEA4u;
}
