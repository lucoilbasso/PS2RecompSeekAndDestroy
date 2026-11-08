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

// Function: entry_00129478
// Address: 0x129478 - 0x1294c4
void entry_00129478_0x129478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129478_0x129478");
#endif

    ctx->pc = 0x129478u;

    // 0x129478: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x129478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12947c: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x12947cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x129480: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x129480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x129484: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x129484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x129488: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x129488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12948c: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x12948cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x129490: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x129490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x129494: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x129498: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x129498u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12949c: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x12949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1294a0: 0xc7ba01a0  lwc1        $f26, 0x1A0($sp)
    ctx->pc = 0x1294a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1294a4: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x1294a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1294a8: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x1294a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1294ac: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x1294acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1294b0: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1294b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1294b4: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1294b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1294b8: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1294b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1294bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1294BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294BCu;
        // 0x1294c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1294BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1294C4u;
}
