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

// Function: entry_00144d68
// Address: 0x144d68 - 0x144d8c
void entry_00144d68_0x144d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144d68_0x144d68");
#endif

    ctx->pc = 0x144d68u;

    // 0x144d68: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x144d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d6c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x144d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144d70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x144d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144d74: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x144d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144d78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x144d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144d7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x144d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144d80: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x144d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x144d84: 0x3e00008  jr          $ra
    ctx->pc = 0x144D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D84u;
        // 0x144d88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144D8Cu;
}
