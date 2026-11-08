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

// Function: entry_001411d8
// Address: 0x1411d8 - 0x1411e0
void entry_001411d8_0x1411d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001411d8_0x1411d8");
#endif

    ctx->pc = 0x1411d8u;

    // 0x1411d8: 0xc067a02  jal         func_19E808
    ctx->pc = 0x1411D8u;
    SET_GPR_U32(ctx, 31, 0x1411E0u);
    ctx->pc = 0x1411DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411D8u;
    // 0x1411dc: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x1411D8u, 0x1411E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411E0u;
}
