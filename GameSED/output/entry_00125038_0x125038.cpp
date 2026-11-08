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

// Function: entry_00125038
// Address: 0x125038 - 0x12507c
void entry_00125038_0x125038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125038_0x125038");
#endif

    ctx->pc = 0x125038u;

    // 0x125038: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x125038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12503c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x12503cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x125040: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x125040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x125044: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x125044u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x125048: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x125048u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12504c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x12504cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x125050: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x125050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125054: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x125054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x125058: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x125058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x12505c: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x12505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x125060: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x125060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x125064: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x125064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x125068: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x125068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12506c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x12506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125070: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x125070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125074: 0x3e00008  jr          $ra
    ctx->pc = 0x125074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125074u;
        // 0x125078: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12507Cu;
}
