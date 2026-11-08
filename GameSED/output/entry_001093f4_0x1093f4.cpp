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

// Function: entry_001093f4
// Address: 0x1093f4 - 0x109430
void entry_001093f4_0x1093f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001093f4_0x1093f4");
#endif

    switch (ctx->pc) {
        case 0x109400u: goto label_109400;
        default: break;
    }

    ctx->pc = 0x1093f4u;

    // 0x1093f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1093f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093f8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x1093F8u;
    SET_GPR_U32(ctx, 31, 0x109400u);
    ctx->pc = 0x1093FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093F8u;
    // 0x1093fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x1093F8u, 0x109400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109400u;
label_109400:
    // 0x109400: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109404: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10940c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10940cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109410: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x109410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109414: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x109414u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x109418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10941c: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x10941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x109420: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x109420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x109424: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x109424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x109428: 0x3e00008  jr          $ra
    ctx->pc = 0x109428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109428u;
        // 0x10942c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109430u;
}
