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

// Function: entry_001a3158
// Address: 0x1a3158 - 0x1a3178
void entry_001a3158_0x1a3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3158_0x1a3158");
#endif

    switch (ctx->pc) {
        case 0x1a3170u: goto label_1a3170;
        default: break;
    }

    ctx->pc = 0x1a3158u;

    // 0x1a3158: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3158u;
    {
        const bool branch_taken_0x1a3158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3158u;
        // 0x1a315c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3158) {
            ctx->pc = 0x1A3178u;
            return;
        }
    }
    ctx->pc = 0x1A3160u;
    // 0x1a3160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3164: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x1a3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3168: 0xc067858  jal         func_19E160
    ctx->pc = 0x1A3168u;
    SET_GPR_U32(ctx, 31, 0x1A3170u);
    ctx->pc = 0x1A316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3168u;
    // 0x1a316c: 0xc4ad0010  lwc1        $f13, 0x10($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x1A3168u, 0x1A3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3170u;
label_1a3170:
    // 0x1a3170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3170u;
    {
        const bool branch_taken_0x1a3170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3170u;
        // 0x1a3174: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3170) {
            ctx->pc = 0x1A318Cu;
            return;
        }
    }
    ctx->pc = 0x1A3178u;
}
