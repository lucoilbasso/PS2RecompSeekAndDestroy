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

// Function: entry_00164d50
// Address: 0x164d50 - 0x164d78
void entry_00164d50_0x164d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d50_0x164d50");
#endif

    switch (ctx->pc) {
        case 0x164d5cu: goto label_164d5c;
        default: break;
    }

    ctx->pc = 0x164d50u;

    // 0x164d50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x164d54: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x164D54u;
    SET_GPR_U32(ctx, 31, 0x164D5Cu);
    ctx->pc = 0x164D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D54u;
    // 0x164d58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979A8u, 0x164D54u, 0x164D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D5Cu;
label_164d5c:
    // 0x164d5c: 0x24022846  addiu       $v0, $zero, 0x2846
    ctx->pc = 0x164d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    // 0x164d60: 0xae000c04  sw          $zero, 0xC04($s0)
    ctx->pc = 0x164d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 0));
    // 0x164d64: 0xae000c08  sw          $zero, 0xC08($s0)
    ctx->pc = 0x164d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3080), GPR_U32(ctx, 0));
    // 0x164d68: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x164d6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x164d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x164d70: 0x26020cc8  addiu       $v0, $s0, 0xCC8
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3272));
    // 0x164d74: 0x0  nop
    ctx->pc = 0x164d74u;
    // NOP
    ctx->pc = 0x164d78u;
}
