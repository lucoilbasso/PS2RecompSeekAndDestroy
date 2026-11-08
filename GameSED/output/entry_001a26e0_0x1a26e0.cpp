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

// Function: entry_001a26e0
// Address: 0x1a26e0 - 0x1a26f8
void entry_001a26e0_0x1a26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26e0_0x1a26e0");
#endif

    switch (ctx->pc) {
        case 0x1a26f0u: goto label_1a26f0;
        default: break;
    }

    ctx->pc = 0x1a26e0u;

    // 0x1a26e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a26e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26e4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1a26e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a26e8: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x1A26E8u;
    SET_GPR_U32(ctx, 31, 0x1A26F0u);
    ctx->pc = 0x1A26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26E8u;
    // 0x1a26ec: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1A26E8u, 0x1A26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26F0u;
label_1a26f0:
    // 0x1a26f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A26F0u;
    {
        const bool branch_taken_0x1a26f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F0u;
        // 0x1a26f4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f0) {
            ctx->pc = 0x1A2704u;
            return;
        }
    }
    ctx->pc = 0x1A26F8u;
}
