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

// Function: entry_00112cbc
// Address: 0x112cbc - 0x112cc4
void entry_00112cbc_0x112cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cbc_0x112cbc");
#endif

    ctx->pc = 0x112cbcu;

    // 0x112cbc: 0xc05f504  jal         func_17D410
    ctx->pc = 0x112CBCu;
    SET_GPR_U32(ctx, 31, 0x112CC4u);
    ctx->pc = 0x112CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CBCu;
    // 0x112cc0: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D410u, 0x112CBCu, 0x112CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CC4u;
}
