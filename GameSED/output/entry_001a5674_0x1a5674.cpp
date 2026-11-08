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

// Function: entry_001a5674
// Address: 0x1a5674 - 0x1a56b0
void entry_001a5674_0x1a5674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5674_0x1a5674");
#endif

    switch (ctx->pc) {
        case 0x1a5684u: goto label_1a5684;
        case 0x1a5698u: goto label_1a5698;
        default: break;
    }

    ctx->pc = 0x1a5674u;

    // 0x1a5674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5678: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a5678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a567c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A567Cu;
    SET_GPR_U32(ctx, 31, 0x1A5684u);
    ctx->pc = 0x1A5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A567Cu;
    // 0x1a5680: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A567Cu, 0x1A5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5684u;
label_1a5684:
    // 0x1a5684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5688: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a5688u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a568c: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x1a568cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a5690: 0xc06a83e  jal         func_1AA0F8
    ctx->pc = 0x1A5690u;
    SET_GPR_U32(ctx, 31, 0x1A5698u);
    ctx->pc = 0x1A5694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5690u;
    // 0x1a5694: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA0F8u, 0x1A5690u, 0x1A5698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5698u;
label_1a5698:
    // 0x1a5698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a569c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a569cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a56a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a56a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a56a4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a56a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a56a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A56A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56A8u;
        // 0x1a56ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A56A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A56B0u;
}
