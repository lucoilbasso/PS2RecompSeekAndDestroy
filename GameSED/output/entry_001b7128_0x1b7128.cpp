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

// Function: entry_001b7128
// Address: 0x1b7128 - 0x1b7150
void entry_001b7128_0x1b7128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7128_0x1b7128");
#endif

    ctx->pc = 0x1b7128u;

    // 0x1b7128: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1b7128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b712c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7130: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b7130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7134: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b7134u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7138: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b713c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b713cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7140: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b7140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7144: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7148u;
        // 0x1b714c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7150u;
}
