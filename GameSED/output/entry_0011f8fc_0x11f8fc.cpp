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

// Function: entry_0011f8fc
// Address: 0x11f8fc - 0x11f93c
void entry_0011f8fc_0x11f8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f8fc_0x11f8fc");
#endif

    ctx->pc = 0x11f8fcu;

    // 0x11f8fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11f900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11f904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f908: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11f908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11f90c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11f90cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f910: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11f910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11f914: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11f914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f918: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11f918u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11f91c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x11f91cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f920: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11f920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11f924: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x11f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11f928: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x11f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11f92c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f930: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f934: 0x3e00008  jr          $ra
    ctx->pc = 0x11F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F934u;
        // 0x11f938: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F93Cu;
}
