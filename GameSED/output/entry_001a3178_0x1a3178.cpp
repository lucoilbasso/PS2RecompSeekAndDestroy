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

// Function: entry_001a3178
// Address: 0x1a3178 - 0x1a318c
void entry_001a3178_0x1a3178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3178_0x1a3178");
#endif

    switch (ctx->pc) {
        case 0x1a3188u: goto label_1a3188;
        default: break;
    }

    ctx->pc = 0x1a3178u;

    // 0x1a3178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a317c: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x1a317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3180: 0xc067804  jal         func_19E010
    ctx->pc = 0x1A3180u;
    SET_GPR_U32(ctx, 31, 0x1A3188u);
    ctx->pc = 0x1A3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3180u;
    // 0x1a3184: 0xc4ad0010  lwc1        $f13, 0x10($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E010u, 0x1A3180u, 0x1A3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1a318cu;
}
