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

// Function: entry_00138e54
// Address: 0x138e54 - 0x138e78
void entry_00138e54_0x138e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138e54_0x138e54");
#endif

    ctx->pc = 0x138e54u;

    // 0x138e54: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x138e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x138e58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x138e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138e5c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x138e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x138e60: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x138e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x138e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x138e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x138e68: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x138e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x138e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e70: 0x3e00008  jr          $ra
    ctx->pc = 0x138E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E70u;
        // 0x138e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138E78u;
}
