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

// Function: entry_00114cc0
// Address: 0x114cc0 - 0x114ce0
void entry_00114cc0_0x114cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114cc0_0x114cc0");
#endif

    switch (ctx->pc) {
        case 0x114cccu: goto label_114ccc;
        default: break;
    }

    ctx->pc = 0x114cc0u;

    // 0x114cc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x114cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114cc4: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114CC4u;
    SET_GPR_U32(ctx, 31, 0x114CCCu);
    ctx->pc = 0x114CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CC4u;
    // 0x114cc8: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114CC4u, 0x114CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CCCu;
label_114ccc:
    // 0x114ccc: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114cd0: 0x26040404  addiu       $a0, $s0, 0x404
    ctx->pc = 0x114cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x114cd4: 0x24a5fcb0  addiu       $a1, $a1, -0x350
    ctx->pc = 0x114cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966448));
    // 0x114cd8: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114CD8u;
    SET_GPR_U32(ctx, 31, 0x114CE0u);
    ctx->pc = 0x114CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CD8u;
    // 0x114cdc: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114CD8u, 0x114CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CE0u;
}
