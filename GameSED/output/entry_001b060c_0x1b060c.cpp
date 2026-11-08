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

// Function: entry_001b060c
// Address: 0x1b060c - 0x1b0668
void entry_001b060c_0x1b060c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b060c_0x1b060c");
#endif

    switch (ctx->pc) {
        case 0x1b0660u: goto label_1b0660;
        default: break;
    }

    ctx->pc = 0x1b060cu;

    // 0x1b060c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b0610: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1b0610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1b0614: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b0614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0618: 0x24848040  addiu       $a0, $a0, -0x7FC0
    ctx->pc = 0x1b0618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    // 0x1b061c: 0x24427f00  addiu       $v0, $v0, 0x7F00
    ctx->pc = 0x1b061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32512));
    // 0x1b0620: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b0624: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b0624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b0628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b0628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b062c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b062cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1b0630: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1b0630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1b0634: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1b0634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1b0638: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1b0638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1b063c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1b063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1b0640: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1b0640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b0644: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1b0644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b0648: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x1b0648u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x20407F04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x20407F04u, _value); } while (0);
    // 0x1b064c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x1b064cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x20407F06u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x20407F06u, _value); } while (0);
    // 0x1b0650: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1b0650u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x20407F07u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x20407F07u, _value); } while (0);
    // 0x1b0654: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b0654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x20407F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x20407F08u, _value); } while (0);
    // 0x1b0658: 0xc06c058  jal         func_1B0160
    ctx->pc = 0x1B0658u;
    SET_GPR_U32(ctx, 31, 0x1B0660u);
    ctx->pc = 0x1B065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0658u;
    // 0x1b065c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0160u, 0x1B0658u, 0x1B0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0660u;
label_1b0660:
    // 0x1b0660: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1b0660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1b0664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b0668u;
}
