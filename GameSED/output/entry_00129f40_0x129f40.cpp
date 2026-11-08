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

// Function: entry_00129f40
// Address: 0x129f40 - 0x129f90
void entry_00129f40_0x129f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f40_0x129f40");
#endif

    ctx->pc = 0x129f40u;

    // 0x129f40: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x129f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x129f44: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x129f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x129f48: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x129f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x129f4c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x129f4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x129f50: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x129f50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x129f54: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x129f58: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x129f58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x129f5c: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x129f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x129f60: 0xc7bd01e8  lwc1        $f29, 0x1E8($sp)
    ctx->pc = 0x129f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x129f64: 0xc7bc01e0  lwc1        $f28, 0x1E0($sp)
    ctx->pc = 0x129f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x129f68: 0xc7bb01d8  lwc1        $f27, 0x1D8($sp)
    ctx->pc = 0x129f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x129f6c: 0xc7ba01d0  lwc1        $f26, 0x1D0($sp)
    ctx->pc = 0x129f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x129f70: 0xc7b901c8  lwc1        $f25, 0x1C8($sp)
    ctx->pc = 0x129f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x129f74: 0xc7b801c0  lwc1        $f24, 0x1C0($sp)
    ctx->pc = 0x129f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x129f78: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x129f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x129f7c: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x129f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x129f80: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x129f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x129f84: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x129f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129f88: 0x3e00008  jr          $ra
    ctx->pc = 0x129F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F88u;
        // 0x129f8c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F90u;
}
