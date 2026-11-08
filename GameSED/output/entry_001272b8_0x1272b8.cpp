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

// Function: entry_001272b8
// Address: 0x1272b8 - 0x1272f8
void entry_001272b8_0x1272b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001272b8_0x1272b8");
#endif

    ctx->pc = 0x1272b8u;

    // 0x1272b8: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x1272b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1272bc: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x1272bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1272c0: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x1272c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1272c4: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x1272c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1272c8: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x1272c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1272cc: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x1272ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1272d0: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x1272d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1272d4: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x1272d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1272d8: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x1272d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1272dc: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x1272dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1272e0: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x1272e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1272e4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1272e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1272e8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1272e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1272ec: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1272ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1272f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1272F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272F0u;
        // 0x1272f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272F8u;
}
