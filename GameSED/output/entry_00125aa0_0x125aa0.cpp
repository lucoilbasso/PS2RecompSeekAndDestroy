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

// Function: entry_00125aa0
// Address: 0x125aa0 - 0x125ad4
void entry_00125aa0_0x125aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125aa0_0x125aa0");
#endif

    ctx->pc = 0x125aa0u;

    // 0x125aa0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x125aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x125aa4: 0x14a0ffb4  bnez        $a1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x125AA4u;
    {
        const bool branch_taken_0x125aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA4u;
        // 0x125aa8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aa4) {
            ctx->pc = 0x125978u;
            return;
        }
    }
    ctx->pc = 0x125AACu;
    // 0x125aac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125ab0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x125ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125ab4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125ab8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x125ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125ac0: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x125ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125ac4: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x125ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125ac8: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x125ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125acc: 0x3e00008  jr          $ra
    ctx->pc = 0x125ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125ACCu;
        // 0x125ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125AD4u;
}
