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

// Function: entry_0010180c
// Address: 0x10180c - 0x101830
void entry_0010180c_0x10180c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010180c_0x10180c");
#endif

    ctx->pc = 0x10180cu;

    // 0x10180c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10180cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101814: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101818: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10181c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10181cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101820: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x101820u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101824: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x101824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x101828: 0x3e00008  jr          $ra
    ctx->pc = 0x101828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101828u;
        // 0x10182c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101830u;
}
