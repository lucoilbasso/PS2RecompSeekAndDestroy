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

// Function: entry_00178368
// Address: 0x178368 - 0x178394
void entry_00178368_0x178368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178368_0x178368");
#endif

    ctx->pc = 0x178368u;

    // 0x178368: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x178368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17836c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x17836cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178370: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178374: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x178374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x178378: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x178378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17837c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x17837cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x178380: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x178380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x178384: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x178384u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x178388: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x178388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17838c: 0x3e00008  jr          $ra
    ctx->pc = 0x17838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17838Cu;
        // 0x178390: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17838Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178394u;
}
