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

// Function: entry_00125784
// Address: 0x125784 - 0x1257c4
void entry_00125784_0x125784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125784_0x125784");
#endif

    ctx->pc = 0x125784u;

    // 0x125784: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x125784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x125788: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x125788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12578c: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x12578cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125790: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x125790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x125794: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x125794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x125798: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x125798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12579c: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x12579cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1257a0: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x1257a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1257a4: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1257a8: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x1257a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1257ac: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x1257acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1257b0: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1257b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1257b4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1257b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1257b8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1257b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1257bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1257BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1257C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257BCu;
        // 0x1257c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1257C4u;
}
