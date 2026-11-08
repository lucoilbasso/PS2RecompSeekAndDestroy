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

// Function: entry_001382ac
// Address: 0x1382ac - 0x1382e8
void entry_001382ac_0x1382ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001382ac_0x1382ac");
#endif

    ctx->pc = 0x1382acu;

    // 0x1382ac: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1382acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1382b0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1382b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1382b4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1382b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1382b8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1382b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1382bc: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1382bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1382c0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1382c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1382c4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1382c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1382c8: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1382c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1382cc: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1382ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1382d0: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1382d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1382d4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1382d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1382d8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1382d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1382dc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1382dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1382e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1382E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1382E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382E0u;
        // 0x1382e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1382E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1382E8u;
}
