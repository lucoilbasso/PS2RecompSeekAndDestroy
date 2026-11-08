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

// Function: entry_0016e3c0
// Address: 0x16e3c0 - 0x16e3e0
void entry_0016e3c0_0x16e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e3c0_0x16e3c0");
#endif

    ctx->pc = 0x16e3c0u;

    // 0x16e3c0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x16e3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e3c4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x16e3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16e3c8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x16e3c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16e3cc: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x16e3ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16e3d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16e3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16e3d4: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x16e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D8u;
        // 0x16e3dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E3E0u;
}
