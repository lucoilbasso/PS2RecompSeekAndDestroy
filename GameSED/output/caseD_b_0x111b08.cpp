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

// Function: caseD_b
// Address: 0x111b08 - 0x111b14
void caseD_b_0x111b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x111b08");
#endif

    switch (ctx->pc) {
        case 0x111b10u: goto label_111b10;
        default: break;
    }

    ctx->pc = 0x111b08u;

    // 0x111b08: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x111B08u;
    SET_GPR_U32(ctx, 31, 0x111B10u);
    ctx->pc = 0x111B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B08u;
    // 0x111b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x111B08u, 0x111B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B10u;
label_111b10:
    // 0x111b10: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x111b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x111b14u;
}
