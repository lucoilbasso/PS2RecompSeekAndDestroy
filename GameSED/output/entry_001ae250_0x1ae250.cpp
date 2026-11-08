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

// Function: entry_001ae250
// Address: 0x1ae250 - 0x1ae280
void entry_001ae250_0x1ae250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae250_0x1ae250");
#endif

    ctx->pc = 0x1ae250u;

    // 0x1ae250: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ae250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae254: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1ae254u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae258: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1ae258u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae25c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ae25cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae260: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ae260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae264: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ae264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae268: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae26c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ae26cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae270: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae278: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE278u;
        // 0x1ae27c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE280u;
}
