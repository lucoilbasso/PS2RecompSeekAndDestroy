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

// Function: entry_0010bf84
// Address: 0x10bf84 - 0x10bfa4
void entry_0010bf84_0x10bf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bf84_0x10bf84");
#endif

    ctx->pc = 0x10bf84u;

    // 0x10bf84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10bf84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bf88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10bf88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bf8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10bf8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bf90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10bf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10bf94: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10bf98: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF9Cu;
        // 0x10bfa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFA4u;
}
