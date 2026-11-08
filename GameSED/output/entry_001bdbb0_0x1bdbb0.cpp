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

// Function: entry_001bdbb0
// Address: 0x1bdbb0 - 0x1bdbc0
void entry_001bdbb0_0x1bdbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdbb0_0x1bdbb0");
#endif

    switch (ctx->pc) {
        case 0x1bdbbcu: goto label_1bdbbc;
        default: break;
    }

    ctx->pc = 0x1bdbb0u;

    // 0x1bdbb0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1bdbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbb4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BDBB4u;
    SET_GPR_U32(ctx, 31, 0x1BDBBCu);
    ctx->pc = 0x1BDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBB4u;
    // 0x1bdbb8: 0x24a5b288  addiu       $a1, $a1, -0x4D78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BDBB4u, 0x1BDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBBCu;
label_1bdbbc:
    // 0x1bdbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bdbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bdbc0u;
}
