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

// Function: entry_0016ea04
// Address: 0x16ea04 - 0x16ea2c
void entry_0016ea04_0x16ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ea04_0x16ea04");
#endif

    ctx->pc = 0x16ea04u;

    // 0x16ea04: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16ea04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16ea08: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ea0c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16ea0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ea10: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16ea10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ea14: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x16ea14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ea18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x16ea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16ea1c: 0xc7b500b0  lwc1        $f21, 0xB0($sp)
    ctx->pc = 0x16ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16ea20: 0xc7b400a8  lwc1        $f20, 0xA8($sp)
    ctx->pc = 0x16ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA24u;
        // 0x16ea28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EA2Cu;
}
