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

// Function: entry_0013b958
// Address: 0x13b958 - 0x13b98c
void entry_0013b958_0x13b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b958_0x13b958");
#endif

    ctx->pc = 0x13b958u;

    // 0x13b958: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x13b958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b95c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x13b95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13b960: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x13b960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b964: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x13b964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13b968: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x13b968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b96c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x13b96cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13b970: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x13b970u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b974: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x13b974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13b978: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b97c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x13b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13b980: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b984: 0x3e00008  jr          $ra
    ctx->pc = 0x13B984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B984u;
        // 0x13b988: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B98Cu;
}
