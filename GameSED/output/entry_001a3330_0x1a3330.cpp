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

// Function: entry_001a3330
// Address: 0x1a3330 - 0x1a3350
void entry_001a3330_0x1a3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3330_0x1a3330");
#endif

    switch (ctx->pc) {
        case 0x1a3344u: goto label_1a3344;
        default: break;
    }

    ctx->pc = 0x1a3330u;

    // 0x1a3330: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3330u;
    {
        const bool branch_taken_0x1a3330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3330u;
        // 0x1a3334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3330) {
            ctx->pc = 0x1A3350u;
            return;
        }
    }
    ctx->pc = 0x1A3338u;
    // 0x1a3338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a333c: 0xc067858  jal         func_19E160
    ctx->pc = 0x1A333Cu;
    SET_GPR_U32(ctx, 31, 0x1A3344u);
    ctx->pc = 0x1A3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A333Cu;
    // 0x1a3340: 0xc62d0020  lwc1        $f13, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x1A333Cu, 0x1A3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3344u;
label_1a3344:
    // 0x1a3344: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3344u;
    {
        const bool branch_taken_0x1a3344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3344u;
        // 0x1a3348: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3344) {
            ctx->pc = 0x1A3360u;
            return;
        }
    }
    ctx->pc = 0x1A334Cu;
    // 0x1a334c: 0x0  nop
    ctx->pc = 0x1a334cu;
    // NOP
    ctx->pc = 0x1a3350u;
}
