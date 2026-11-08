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

// Function: entry_0013a4d8
// Address: 0x13a4d8 - 0x13a4f4
void entry_0013a4d8_0x13a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4d8_0x13a4d8");
#endif

    ctx->pc = 0x13a4d8u;

    // 0x13a4d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x13a4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a4dc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x13a4dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x13a4e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x13a4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a4e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13a4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a4e8: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x13a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4ECu;
        // 0x13a4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A4F4u;
}
