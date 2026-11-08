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

// Function: entry_0017d3e8
// Address: 0x17d3e8 - 0x17d40c
void entry_0017d3e8_0x17d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d3e8_0x17d3e8");
#endif

    switch (ctx->pc) {
        case 0x17d3f0u: goto label_17d3f0;
        default: break;
    }

    ctx->pc = 0x17d3e8u;

    // 0x17d3e8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17D3E8u;
    SET_GPR_U32(ctx, 31, 0x17D3F0u);
    ctx->pc = 0x17D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3E8u;
    // 0x17d3ec: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17D3E8u, 0x17D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3F0u;
label_17d3f0:
    // 0x17d3f0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x17d3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d3f4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x17d3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17d3f8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x17d3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d3fc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x17d3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17d400: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d404: 0x3e00008  jr          $ra
    ctx->pc = 0x17D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D404u;
        // 0x17d408: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D40Cu;
}
