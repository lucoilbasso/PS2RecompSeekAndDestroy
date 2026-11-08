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

// Function: entry_001338cc
// Address: 0x1338cc - 0x1338e8
void entry_001338cc_0x1338cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001338cc_0x1338cc");
#endif

    switch (ctx->pc) {
        case 0x1338dcu: goto label_1338dc;
        default: break;
    }

    ctx->pc = 0x1338ccu;

    // 0x1338cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1338ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1338d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338d4: 0xc05129a  jal         func_144A68
    ctx->pc = 0x1338D4u;
    SET_GPR_U32(ctx, 31, 0x1338DCu);
    ctx->pc = 0x1338D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338D4u;
    // 0x1338d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x1338D4u, 0x1338DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338DCu;
label_1338dc:
    // 0x1338dc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1338DCu;
    {
        const bool branch_taken_0x1338dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338DCu;
        // 0x1338e0: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338dc) {
            ctx->pc = 0x133B60u;
            return;
        }
    }
    ctx->pc = 0x1338E4u;
    // 0x1338e4: 0x0  nop
    ctx->pc = 0x1338e4u;
    // NOP
    ctx->pc = 0x1338e8u;
}
