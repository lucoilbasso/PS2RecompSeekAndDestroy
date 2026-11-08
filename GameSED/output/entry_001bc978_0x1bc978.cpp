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

// Function: entry_001bc978
// Address: 0x1bc978 - 0x1bc9a4
void entry_001bc978_0x1bc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc978_0x1bc978");
#endif

    ctx->pc = 0x1bc978u;

    // 0x1bc978: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1bc978u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc97c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1bc97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc980: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1bc980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc984: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1bc984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc988: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bc988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc98c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1bc98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc990: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bc990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc994: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bc994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc99c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC99Cu;
        // 0x1bc9a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC9A4u;
}
