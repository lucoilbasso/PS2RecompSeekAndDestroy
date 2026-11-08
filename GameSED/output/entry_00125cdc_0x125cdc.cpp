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

// Function: entry_00125cdc
// Address: 0x125cdc - 0x125d28
void entry_00125cdc_0x125cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125cdc_0x125cdc");
#endif

    ctx->pc = 0x125cdcu;

    // 0x125cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x125cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x125ce0: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x125ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x125ce4: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x125CE4u;
    {
        const bool branch_taken_0x125ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125ce4) {
            ctx->pc = 0x125CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125CE4u;
            // 0x125ce8: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125BD0u;
            return;
        }
    }
    ctx->pc = 0x125CECu;
    // 0x125cec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x125cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125cf0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x125cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125cf4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x125cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125cf8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x125cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x125cfc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x125cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125d00: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x125d00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x125d04: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x125d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125d08: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x125d08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x125d0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x125d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125d10: 0xc7b700b0  lwc1        $f23, 0xB0($sp)
    ctx->pc = 0x125d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x125d14: 0xc7b600a8  lwc1        $f22, 0xA8($sp)
    ctx->pc = 0x125d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125d18: 0xc7b500a0  lwc1        $f21, 0xA0($sp)
    ctx->pc = 0x125d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125d1c: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x125d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125d20: 0x3e00008  jr          $ra
    ctx->pc = 0x125D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D20u;
        // 0x125d24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125D28u;
}
