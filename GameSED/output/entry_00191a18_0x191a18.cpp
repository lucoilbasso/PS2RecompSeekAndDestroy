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

// Function: entry_00191a18
// Address: 0x191a18 - 0x191a3c
void entry_00191a18_0x191a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a18_0x191a18");
#endif

    ctx->pc = 0x191a18u;

    // 0x191a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x191a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191a1c: 0xae85001c  sw          $a1, 0x1C($s4)
    ctx->pc = 0x191a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 5));
    // 0x191a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x191a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191a24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x191a24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x191a28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x191a28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191a2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x191a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191a30: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x191a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191a34: 0x3e00008  jr          $ra
    ctx->pc = 0x191A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A34u;
        // 0x191a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191A3Cu;
}
