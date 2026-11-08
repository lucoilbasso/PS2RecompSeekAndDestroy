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

// Function: entry_001659bc
// Address: 0x1659bc - 0x1659ec
void entry_001659bc_0x1659bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001659bc_0x1659bc");
#endif

    ctx->pc = 0x1659bcu;

    // 0x1659bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1659bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1659c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1659c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1659c4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1659c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1659c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1659c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1659cc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1659d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1659d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1659d4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1659d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1659d8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1659d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1659dc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1659dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1659e0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1659e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1659e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1659E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1659E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659E4u;
        // 0x1659e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1659E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1659ECu;
}
