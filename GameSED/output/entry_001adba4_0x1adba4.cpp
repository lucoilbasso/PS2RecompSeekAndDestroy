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

// Function: entry_001adba4
// Address: 0x1adba4 - 0x1adbd0
void entry_001adba4_0x1adba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adba4_0x1adba4");
#endif

    ctx->pc = 0x1adba4u;

    // 0x1adba4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1adba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1adba8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1adba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1adbac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1adbacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adbb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1adbb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adbb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1adbb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adbb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1adbb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adbbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adbc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBC8u;
        // 0x1adbcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADBD0u;
}
