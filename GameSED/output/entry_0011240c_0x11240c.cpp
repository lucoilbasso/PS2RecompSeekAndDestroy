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

// Function: entry_0011240c
// Address: 0x11240c - 0x11243c
void entry_0011240c_0x11240c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011240c_0x11240c");
#endif

    ctx->pc = 0x11240cu;

    // 0x11240c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11240cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112410: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x112410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x112414: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x112414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112418: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x112418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11241c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112420: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x112420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x112424: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x112424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112428: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x112428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11242c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x11242cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112430: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x112430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x112434: 0x3e00008  jr          $ra
    ctx->pc = 0x112434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112434u;
        // 0x112438: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11243Cu;
}
