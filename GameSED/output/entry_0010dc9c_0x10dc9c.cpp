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

// Function: entry_0010dc9c
// Address: 0x10dc9c - 0x10dcc8
void entry_0010dc9c_0x10dc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc9c_0x10dc9c");
#endif

    ctx->pc = 0x10dc9cu;

    // 0x10dc9c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x10dc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10dca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10dca8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10dca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dcac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10dcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10dcb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10dcb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dcb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10dcb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10dcb8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dcbc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10dcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCC0u;
        // 0x10dcc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DCC8u;
}
