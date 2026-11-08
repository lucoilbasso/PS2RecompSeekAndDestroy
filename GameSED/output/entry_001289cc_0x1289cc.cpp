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

// Function: entry_001289cc
// Address: 0x1289cc - 0x128a08
void entry_001289cc_0x1289cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001289cc_0x1289cc");
#endif

    ctx->pc = 0x1289ccu;

    // 0x1289cc: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1289ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1289d0: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1289d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1289d4: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1289d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1289d8: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1289d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1289dc: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1289e0: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1289e4: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x1289e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1289e8: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x1289e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1289ec: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x1289ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1289f0: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x1289f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1289f4: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1289f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1289f8: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1289f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1289fc: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1289fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x128a00: 0x3e00008  jr          $ra
    ctx->pc = 0x128A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A00u;
        // 0x128a04: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128A08u;
}
