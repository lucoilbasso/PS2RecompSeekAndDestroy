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

// Function: entry_001abb18
// Address: 0x1abb18 - 0x1abb64
void entry_001abb18_0x1abb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abb18_0x1abb18");
#endif

    switch (ctx->pc) {
        case 0x1abb38u: goto label_1abb38;
        default: break;
    }

    ctx->pc = 0x1abb18u;

    // 0x1abb18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1abb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1abb1c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1abb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1abb20: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1abb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1abb24: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x1abb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x1abb28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1abb28u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x1abb2c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x1abb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb30: 0xc06bde8  jal         func_1AF7A0
    ctx->pc = 0x1ABB30u;
    SET_GPR_U32(ctx, 31, 0x1ABB38u);
    ctx->pc = 0x1ABB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB30u;
    // 0x1abb34: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF7A0u, 0x1ABB30u, 0x1ABB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB38u;
label_1abb38:
    // 0x1abb38: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1abb3c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1abb40: 0x246308f0  addiu       $v1, $v1, 0x8F0
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
    // 0x1abb44: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1abb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1abb48: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1abb48u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2408F0u));
    // 0x1abb4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1abb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abb50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1abb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1abb54: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1abb54u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x1abb58: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x1abb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x1abb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb60: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1abb60u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 5));
    ctx->pc = 0x1abb64u;
}
