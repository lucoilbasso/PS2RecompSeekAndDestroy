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

// Function: entry_0011f2b8
// Address: 0x11f2b8 - 0x11f2ec
void entry_0011f2b8_0x11f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f2b8_0x11f2b8");
#endif

    ctx->pc = 0x11f2b8u;

    // 0x11f2b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x11f2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f2bc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x11f2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11f2c0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x11f2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f2c4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x11f2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11f2c8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11f2c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f2cc: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x11f2ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11f2d0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x11f2d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f2d4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x11f2d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11f2d8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x11f2d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11f2dc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x11f2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11f2e0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x11f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E4u;
        // 0x11f2e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F2ECu;
}
