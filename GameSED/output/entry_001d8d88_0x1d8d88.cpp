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

// Function: entry_001d8d88
// Address: 0x1d8d88 - 0x1d8da0
void entry_001d8d88_0x1d8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8d88_0x1d8d88");
#endif

    ctx->pc = 0x1d8d88u;

    // 0x1d8d88: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1d8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1d8d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8D8Cu;
    {
        const bool branch_taken_0x1d8d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D8Cu;
        // 0x1d8d90: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d8c) {
            ctx->pc = 0x1D8DA0u;
            return;
        }
    }
    ctx->pc = 0x1D8D94u;
    // 0x1d8d94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D98u;
        // 0x1d8d9c: 0xc4404000  lwc1        $f0, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DA0u;
}
