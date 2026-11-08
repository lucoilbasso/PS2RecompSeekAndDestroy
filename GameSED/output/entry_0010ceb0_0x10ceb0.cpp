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

// Function: entry_0010ceb0
// Address: 0x10ceb0 - 0x10ced4
void entry_0010ceb0_0x10ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ceb0_0x10ceb0");
#endif

    ctx->pc = 0x10ceb0u;

    // 0x10ceb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ceb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ceb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ceb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ceb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ceb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cebc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10cebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cec0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x10cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10cec4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cec8: 0xac830158  sw          $v1, 0x158($a0)
    ctx->pc = 0x10cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 3));
    // 0x10cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x10CECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CECCu;
        // 0x10ced0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CED4u;
}
