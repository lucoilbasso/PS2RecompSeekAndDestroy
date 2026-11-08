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

// Function: entry_00131c20
// Address: 0x131c20 - 0x131c4c
void entry_00131c20_0x131c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c20_0x131c20");
#endif

    ctx->pc = 0x131c20u;

    // 0x131c20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x131c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x131c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131c28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x131c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x131c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c34: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131c3c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x131c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131c40: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x131c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131c44: 0x3e00008  jr          $ra
    ctx->pc = 0x131C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C44u;
        // 0x131c48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C4Cu;
}
