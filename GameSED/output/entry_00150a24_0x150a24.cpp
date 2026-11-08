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

// Function: entry_00150a24
// Address: 0x150a24 - 0x150a48
void entry_00150a24_0x150a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150a24_0x150a24");
#endif

    switch (ctx->pc) {
        case 0x150a2cu: goto label_150a2c;
        case 0x150a40u: goto label_150a40;
        default: break;
    }

    ctx->pc = 0x150a24u;

    // 0x150a24: 0xc061422  jal         func_185088
    ctx->pc = 0x150A24u;
    SET_GPR_U32(ctx, 31, 0x150A2Cu);
    ctx->pc = 0x150A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A24u;
    // 0x150a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x150A24u, 0x150A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A2Cu;
label_150a2c:
    // 0x150a2c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x150a30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x150a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150a34: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x150a34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x150a38: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x150A38u;
    SET_GPR_U32(ctx, 31, 0x150A40u);
    ctx->pc = 0x150A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A38u;
    // 0x150a3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x150A38u, 0x150A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A40u;
label_150a40:
    // 0x150a40: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x150A40u;
    SET_GPR_U32(ctx, 31, 0x150A48u);
    ctx->pc = 0x150A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A40u;
    // 0x150a44: 0x92440575  lbu         $a0, 0x575($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x150A40u, 0x150A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A48u;
}
