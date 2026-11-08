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

// Function: entry_0011f6e0
// Address: 0x11f6e0 - 0x11f728
void entry_0011f6e0_0x11f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6e0_0x11f6e0");
#endif

    ctx->pc = 0x11f6e0u;

    // 0x11f6e0: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x11f6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x11f6e4: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x11f6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x11f6e8: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x11f6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11f6ec: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x11f6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x11f6f0: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x11f6f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11f6f4: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x11f6f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x11f6f8: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x11f6f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11f6fc: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x11f6fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x11f700: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x11f700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11f704: 0xc7ba01c8  lwc1        $f26, 0x1C8($sp)
    ctx->pc = 0x11f704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x11f708: 0xc7b901c0  lwc1        $f25, 0x1C0($sp)
    ctx->pc = 0x11f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x11f70c: 0xc7b801b8  lwc1        $f24, 0x1B8($sp)
    ctx->pc = 0x11f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x11f710: 0xc7b701b0  lwc1        $f23, 0x1B0($sp)
    ctx->pc = 0x11f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11f714: 0xc7b601a8  lwc1        $f22, 0x1A8($sp)
    ctx->pc = 0x11f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11f718: 0xc7b501a0  lwc1        $f21, 0x1A0($sp)
    ctx->pc = 0x11f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f71c: 0xc7b40198  lwc1        $f20, 0x198($sp)
    ctx->pc = 0x11f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f720: 0x3e00008  jr          $ra
    ctx->pc = 0x11F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F720u;
        // 0x11f724: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F728u;
}
