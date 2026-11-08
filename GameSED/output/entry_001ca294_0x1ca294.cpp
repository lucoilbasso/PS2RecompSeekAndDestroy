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

// Function: entry_001ca294
// Address: 0x1ca294 - 0x1ca2c4
void entry_001ca294_0x1ca294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca294_0x1ca294");
#endif

    switch (ctx->pc) {
        case 0x1ca29cu: goto label_1ca29c;
        default: break;
    }

    ctx->pc = 0x1ca294u;

    // 0x1ca294: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA294u;
    SET_GPR_U32(ctx, 31, 0x1CA29Cu);
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA294u, 0x1CA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA29Cu;
label_1ca29c:
    // 0x1ca29c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1ca29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca2a0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1ca2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ca2a4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1ca2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca2a8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1ca2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ca2ac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1ca2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca2b0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1ca2b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ca2b4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ca2b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca2b8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1ca2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ca2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2BCu;
        // 0x1ca2c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA2C4u;
}
