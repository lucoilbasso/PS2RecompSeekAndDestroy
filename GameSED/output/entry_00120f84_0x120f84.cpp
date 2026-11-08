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

// Function: entry_00120f84
// Address: 0x120f84 - 0x120fb8
void entry_00120f84_0x120f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120f84_0x120f84");
#endif

    ctx->pc = 0x120f84u;

    // 0x120f84: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x120f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120f88: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x120f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120f8c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x120f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120f90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x120f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120f94: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x120f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120f98: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x120f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120f9c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x120f9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120fa0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x120fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120fa4: 0xc7b60078  lwc1        $f22, 0x78($sp)
    ctx->pc = 0x120fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x120fa8: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x120fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x120fac: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x120facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x120FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FB0u;
        // 0x120fb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120FB8u;
}
