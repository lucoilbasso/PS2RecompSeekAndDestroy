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

// Function: default
// Address: 0x109104 - 0x109134
void ps2_default_0x109104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x109104");
#endif

    ctx->pc = 0x109104u;

    // 0x109104: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x109104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x109108: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10910c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x10910cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x109110: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x109110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109114: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x109114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x109118: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x109118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10911c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x10911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x109120: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x109120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x109124: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x109124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x109128: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x109128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10912c: 0x3e00008  jr          $ra
    ctx->pc = 0x10912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10912Cu;
        // 0x109130: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109134u;
}
