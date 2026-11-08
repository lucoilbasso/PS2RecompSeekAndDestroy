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

// Function: entry_00150d68
// Address: 0x150d68 - 0x150d74
void entry_00150d68_0x150d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150d68_0x150d68");
#endif

    switch (ctx->pc) {
        case 0x150d70u: goto label_150d70;
        default: break;
    }

    ctx->pc = 0x150d68u;

    // 0x150d68: 0xc067a02  jal         func_19E808
    ctx->pc = 0x150D68u;
    SET_GPR_U32(ctx, 31, 0x150D70u);
    ctx->pc = 0x150D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D68u;
    // 0x150d6c: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x150D68u, 0x150D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D70u;
label_150d70:
    // 0x150d70: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x150d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x150d74u;
}
