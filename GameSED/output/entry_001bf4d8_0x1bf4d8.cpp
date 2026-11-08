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

// Function: entry_001bf4d8
// Address: 0x1bf4d8 - 0x1bf504
void entry_001bf4d8_0x1bf4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf4d8_0x1bf4d8");
#endif

    ctx->pc = 0x1bf4d8u;

    // 0x1bf4d8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1bf4d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bf4dc: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1bf4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bf4e0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1bf4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bf4e4: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1bf4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf4e8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1bf4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf4ec: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1bf4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf4f0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1bf4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf4f4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1bf4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf4f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1bf4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4FCu;
        // 0x1bf500: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF504u;
}
