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

// Function: entry_00158c2c
// Address: 0x158c2c - 0x158c34
void entry_00158c2c_0x158c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c2c_0x158c2c");
#endif

    ctx->pc = 0x158c2cu;

label_158c2c:
    // 0x158c2c: 0x60f809  jalr        $v1
label_158c30:
    if (ctx->pc == 0x158C30u) {
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0xe54c000c  swc1        $f12, 0xC($t2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C34u;
        goto label_fallthrough_0x158c2c;
    }
    ctx->pc = 0x158C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x158C34u);
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0xe54c000c  swc1        $f12, 0xC($t2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C2Cu, 0x158C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x158c2c:
    ctx->pc = 0x158C34u;
}
