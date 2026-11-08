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

// Function: entry_0017dc50
// Address: 0x17dc50 - 0x17dc84
void entry_0017dc50_0x17dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc50_0x17dc50");
#endif

    switch (ctx->pc) {
        case 0x17dc64u: goto label_17dc64;
        default: break;
    }

    ctx->pc = 0x17dc50u;

    // 0x17dc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dc5c: 0xc05dc0a  jal         func_177028
    ctx->pc = 0x17DC5Cu;
    SET_GPR_U32(ctx, 31, 0x17DC64u);
    ctx->pc = 0x17DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC5Cu;
    // 0x17dc60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177028u, 0x17DC5Cu, 0x17DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC64u;
label_17dc64:
    // 0x17dc64: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x17dc64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17dc68: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x17dc68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc6c: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x17dc6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x17dc70: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x17dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x17dc74: 0x97a50006  lhu         $a1, 0x6($sp)
    ctx->pc = 0x17dc74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x17dc78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17dc7c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x17dc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17dc80: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x17dc84u;
}
