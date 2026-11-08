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

// Function: entry_001a5794
// Address: 0x1a5794 - 0x1a57d0
void entry_001a5794_0x1a5794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5794_0x1a5794");
#endif

    switch (ctx->pc) {
        case 0x1a57a4u: goto label_1a57a4;
        case 0x1a57b8u: goto label_1a57b8;
        default: break;
    }

    ctx->pc = 0x1a5794u;

    // 0x1a5794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5798: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a5798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a579c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A579Cu;
    SET_GPR_U32(ctx, 31, 0x1A57A4u);
    ctx->pc = 0x1A57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A579Cu;
    // 0x1a57a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A579Cu, 0x1A57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57A4u;
label_1a57a4:
    // 0x1a57a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a57a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a57a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a57ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57b0: 0xc06a82c  jal         func_1AA0B0
    ctx->pc = 0x1A57B0u;
    SET_GPR_U32(ctx, 31, 0x1A57B8u);
    ctx->pc = 0x1A57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57B0u;
    // 0x1a57b4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA0B0u, 0x1A57B0u, 0x1A57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57B8u;
label_1a57b8:
    // 0x1a57b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a57b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a57bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a57bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a57c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a57c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57c4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a57c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a57c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A57C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57C8u;
        // 0x1a57cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A57C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A57D0u;
}
