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

// Function: entry_0010ea84
// Address: 0x10ea84 - 0x10eab8
void entry_0010ea84_0x10ea84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea84_0x10ea84");
#endif

    switch (ctx->pc) {
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10ea98u: goto label_10ea98;
        default: break;
    }

    ctx->pc = 0x10ea84u;

    // 0x10ea84: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10EA84u;
    SET_GPR_U32(ctx, 31, 0x10EA8Cu);
    ctx->pc = 0x10EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA84u;
    // 0x10ea88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10EA84u, 0x10EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA8Cu;
label_10ea8c:
    // 0x10ea8c: 0xc78c805c  lwc1        $f12, -0x7FA4($gp)
    ctx->pc = 0x10ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10ea90: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x10EA90u;
    SET_GPR_U32(ctx, 31, 0x10EA98u);
    ctx->pc = 0x10EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA90u;
    // 0x10ea94: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x10EA90u, 0x10EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA98u;
label_10ea98:
    // 0x10ea98: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10ea9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ea9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eaa0: 0xae42019c  sw          $v0, 0x19C($s2)
    ctx->pc = 0x10eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
    // 0x10eaa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10eaa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10eaa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10eaa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eaac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAB0u;
        // 0x10eab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EAB8u;
}
