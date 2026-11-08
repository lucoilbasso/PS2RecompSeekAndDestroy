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

// Function: entry_00114d10
// Address: 0x114d10 - 0x114d30
void entry_00114d10_0x114d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d10_0x114d10");
#endif

    switch (ctx->pc) {
        case 0x114d1cu: goto label_114d1c;
        default: break;
    }

    ctx->pc = 0x114d10u;

    // 0x114d10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x114d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114d14: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114D14u;
    SET_GPR_U32(ctx, 31, 0x114D1Cu);
    ctx->pc = 0x114D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D14u;
    // 0x114d18: 0x2484fb30  addiu       $a0, $a0, -0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114D14u, 0x114D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D1Cu;
label_114d1c:
    // 0x114d1c: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114d20: 0x26050404  addiu       $a1, $s0, 0x404
    ctx->pc = 0x114d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x114d24: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x114d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x114d28: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114D28u;
    SET_GPR_U32(ctx, 31, 0x114D30u);
    ctx->pc = 0x114D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D28u;
    // 0x114d2c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114D28u, 0x114D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D30u;
}
