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

// Function: entry_0012b42c
// Address: 0x12b42c - 0x12b464
void entry_0012b42c_0x12b42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b42c_0x12b42c");
#endif

    ctx->pc = 0x12b42cu;

    // 0x12b42c: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x12b42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x12b430: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x12b430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12b434: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x12b434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12b438: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x12b438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x12b43c: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x12b43cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x12b440: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x12b440u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12b444: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x12b444u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12b448: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x12b448u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12b44c: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x12b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x12b450: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x12b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12b454: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x12b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12b458: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x12b458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12b45c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B45Cu;
        // 0x12b460: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B464u;
}
