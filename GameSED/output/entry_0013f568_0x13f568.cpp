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

// Function: entry_0013f568
// Address: 0x13f568 - 0x13f594
void entry_0013f568_0x13f568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f568_0x13f568");
#endif

    ctx->pc = 0x13f568u;

    // 0x13f568: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x13f568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f570: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f574: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13f574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f578: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13f578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f57c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13f57cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f580: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13f580u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f584: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13f584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13f588: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13f588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f58c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F58Cu;
        // 0x13f590: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F594u;
}
