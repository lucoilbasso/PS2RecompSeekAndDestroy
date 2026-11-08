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

// Function: entry_0012b708
// Address: 0x12b708 - 0x12b760
void entry_0012b708_0x12b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b708_0x12b708");
#endif

    switch (ctx->pc) {
        case 0x12b718u: goto label_12b718;
        case 0x12b728u: goto label_12b728;
        default: break;
    }

    ctx->pc = 0x12b708u;

    // 0x12b708: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12b70c: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x12b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x12b710: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12B710u;
    SET_GPR_U32(ctx, 31, 0x12B718u);
    ctx->pc = 0x12B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B710u;
    // 0x12b714: 0x8ca40084  lw          $a0, 0x84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12B710u, 0x12B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B718u;
label_12b718:
    // 0x12b718: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x12b71c: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x12b720: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12B720u;
    SET_GPR_U32(ctx, 31, 0x12B728u);
    ctx->pc = 0x12B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B720u;
    // 0x12b724: 0x8cc40088  lw          $a0, 0x88($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12B720u, 0x12B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B728u;
label_12b728:
    // 0x12b728: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12b72c: 0x2442d650  addiu       $v0, $v0, -0x29B0
    ctx->pc = 0x12b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x12b730: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x12b730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x12b734: 0x8c50008c  lw          $s0, 0x8C($v0)
    ctx->pc = 0x12b734u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D6DCu));
    // 0x12b738: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12b738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b73c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x12b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6D0u));
    // 0x12b740: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x12b740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x12b744: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12b748: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12b74c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12b750: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6D8u));
    // 0x12b754: 0xacc5008c  sw          $a1, 0x8C($a2)
    ctx->pc = 0x12b754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6DCu, _value); } while (0);
    // 0x12b758: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12B758u;
    SET_GPR_U32(ctx, 31, 0x12B760u);
    ctx->pc = 0x12B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B758u;
    // 0x12b75c: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12B758u, 0x12B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B760u;
}
