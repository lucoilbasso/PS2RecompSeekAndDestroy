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

// Function: entry_00118950
// Address: 0x118950 - 0x11895c
void entry_00118950_0x118950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118950_0x118950");
#endif

    ctx->pc = 0x118950u;

    // 0x118950: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x118954: 0xc045360  jal         func_114D80
    ctx->pc = 0x118954u;
    SET_GPR_U32(ctx, 31, 0x11895Cu);
    ctx->pc = 0x118958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118954u;
    // 0x118958: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118954u, 0x11895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11895Cu;
}
