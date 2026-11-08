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

// Function: entry_00177a74
// Address: 0x177a74 - 0x177ab4
void entry_00177a74_0x177a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a74_0x177a74");
#endif

    ctx->pc = 0x177a74u;

    // 0x177a74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177a78: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x177a78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x177a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a80: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x177a80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x177a84: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x177a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x177a88: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x177a88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177a8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x177a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x177a90: 0x2421e820  addiu       $at, $at, -0x17E0
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294961184));
    // 0x177a94: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x177a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x177a98: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x177a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x177a9c: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x177aa0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x177aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x177aa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x177aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x177aa8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x177aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x177aac: 0xc067294  jal         func_19CA50
    ctx->pc = 0x177AACu;
    SET_GPR_U32(ctx, 31, 0x177AB4u);
    ctx->pc = 0x177AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AACu;
    // 0x177ab0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x177AACu, 0x177AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AB4u;
}
