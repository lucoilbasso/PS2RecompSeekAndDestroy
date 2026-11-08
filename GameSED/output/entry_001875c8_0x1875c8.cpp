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

// Function: entry_001875c8
// Address: 0x1875c8 - 0x187610
void entry_001875c8_0x1875c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001875c8_0x1875c8");
#endif

    switch (ctx->pc) {
        case 0x1875d4u: goto label_1875d4;
        default: break;
    }

    ctx->pc = 0x1875c8u;

    // 0x1875c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1875c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1875cc: 0xc061258  jal         func_184960
    ctx->pc = 0x1875CCu;
    SET_GPR_U32(ctx, 31, 0x1875D4u);
    ctx->pc = 0x1875D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875CCu;
    // 0x1875d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1875CCu, 0x1875D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875D4u;
label_1875d4:
    // 0x1875d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1875d8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1875dc: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x1875dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x1875e0: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1875e4: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1875e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1875e8: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1875e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x1875ec: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x1875ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x1875f0: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1875f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1875f4: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1875f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1875f8: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1875f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1875fc: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1875fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x187600: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x187600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x187604: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x187604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x187608: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18760c: 0x260201b4  addiu       $v0, $s0, 0x1B4
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->pc = 0x187610u;
}
