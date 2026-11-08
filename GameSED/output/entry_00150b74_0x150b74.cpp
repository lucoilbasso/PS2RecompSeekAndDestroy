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

// Function: entry_00150b74
// Address: 0x150b74 - 0x150bb8
void entry_00150b74_0x150b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150b74_0x150b74");
#endif

    ctx->pc = 0x150b74u;

    // 0x150b74: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x150b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150b78: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x150b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x150b7c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x150b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150b80: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x150b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x150b84: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x150b84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150b88: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x150b88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x150b8c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x150b8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150b90: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x150b90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x150b94: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x150b94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150b98: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x150b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x150b9c: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x150b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x150ba0: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x150ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x150ba4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x150ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x150ba8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x150ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150bac: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x150bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x150BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BB0u;
        // 0x150bb4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150BB8u;
}
