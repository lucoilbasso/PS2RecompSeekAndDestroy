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

// Function: entry_00137e84
// Address: 0x137e84 - 0x137eb0
void entry_00137e84_0x137e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e84_0x137e84");
#endif

    ctx->pc = 0x137e84u;

    // 0x137e84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x137e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137e8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137e90: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x137e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137e94: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x137e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137e98: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x137e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137e9c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x137e9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137ea0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x137ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137ea4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x137ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x137EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EA8u;
        // 0x137eac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137EB0u;
}
