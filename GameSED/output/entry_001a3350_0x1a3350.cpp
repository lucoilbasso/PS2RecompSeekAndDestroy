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

// Function: entry_001a3350
// Address: 0x1a3350 - 0x1a3360
void entry_001a3350_0x1a3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3350_0x1a3350");
#endif

    switch (ctx->pc) {
        case 0x1a335cu: goto label_1a335c;
        default: break;
    }

    ctx->pc = 0x1a3350u;

    // 0x1a3350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3354: 0xc067804  jal         func_19E010
    ctx->pc = 0x1A3354u;
    SET_GPR_U32(ctx, 31, 0x1A335Cu);
    ctx->pc = 0x1A3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3354u;
    // 0x1a3358: 0xc62d0020  lwc1        $f13, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E010u, 0x1A3354u, 0x1A335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A335Cu;
label_1a335c:
    // 0x1a335c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1a335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1a3360u;
}
