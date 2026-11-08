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

// Function: entry_001755fc
// Address: 0x1755fc - 0x175604
void entry_001755fc_0x1755fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755fc_0x1755fc");
#endif

    ctx->pc = 0x1755fcu;

    // 0x1755fc: 0xc05d426  jal         func_175098
    ctx->pc = 0x1755FCu;
    SET_GPR_U32(ctx, 31, 0x175604u);
    ctx->pc = 0x175600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755FCu;
    // 0x175600: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x1755FCu, 0x175604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175604u;
}
