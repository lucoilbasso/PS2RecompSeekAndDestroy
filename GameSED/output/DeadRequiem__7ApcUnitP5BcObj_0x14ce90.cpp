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

// Function: DeadRequiem__7ApcUnitP5BcObj
// Address: 0x14ce90 - 0x14cf48
void DeadRequiem__7ApcUnitP5BcObj_0x14ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeadRequiem__7ApcUnitP5BcObj_0x14ce90");
#endif

    ctx->pc = 0x14ce90u;

    // 0x14ce90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ce94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14ce94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ce98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce9c: 0x8ce40204  lw          $a0, 0x204($a3)
    ctx->pc = 0x14ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 516)));
    // 0x14cea0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cea4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x14cea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x14cea8: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x14cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
    // 0x14ceac: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x14ceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x14ceb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14ceb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ceb4: 0xa2480a  movz        $t1, $a1, $v0
    ctx->pc = 0x14ceb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x14ceb8: 0x24e60200  addiu       $a2, $a3, 0x200
    ctx->pc = 0x14ceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x14cebc: 0x24e80210  addiu       $t0, $a3, 0x210
    ctx->pc = 0x14cebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x14cec0: 0x10890004  beq         $a0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CEC0u;
    {
        const bool branch_taken_0x14cec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x14CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC0u;
        // 0x14cec4: 0xa3500a  movz        $t2, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cec0) {
            ctx->pc = 0x14CED4u;
            goto label_14ced4;
        }
    }
    ctx->pc = 0x14CEC8u;
    // 0x14cec8: 0x8ce20208  lw          $v0, 0x208($a3)
    ctx->pc = 0x14cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 520)));
    // 0x14cecc: 0x544a0016  bnel        $v0, $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x14CECCu;
    {
        const bool branch_taken_0x14cecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x14cecc) {
            ctx->pc = 0x14CED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CECCu;
            // 0x14ced0: 0x8ce201f0  lw          $v0, 0x1F0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF28u;
            goto label_14cf28;
        }
    }
    ctx->pc = 0x14CED4u;
label_14ced4:
    // 0x14ced4: 0xace001f8  sw          $zero, 0x1F8($a3)
    ctx->pc = 0x14ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 0));
    // 0x14ced8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x14cedc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x14cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x14cee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14cee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cee4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14cee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ceec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x14ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x14cef0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14cef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14cef4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14cef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14cef8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14cef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14cefc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14cf00: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14cf00u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14cf04: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14cf04u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14cf08: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14cf08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14cf0c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x14cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x14cf10: 0x24e6020c  addiu       $a2, $a3, 0x20C
    ctx->pc = 0x14cf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 524));
    // 0x14cf14: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x14cf14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf18: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14cf18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf1c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf20: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x14cf20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf24: 0x8ce201f0  lw          $v0, 0x1F0($a3)
    ctx->pc = 0x14cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_14cf28:
    // 0x14cf28: 0x54490003  bnel        $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF28u;
    {
        const bool branch_taken_0x14cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x14cf28) {
            ctx->pc = 0x14CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CF28u;
            // 0x14cf2c: 0x8ce201f4  lw          $v0, 0x1F4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF38u;
            goto label_14cf38;
        }
    }
    ctx->pc = 0x14CF30u;
    // 0x14cf30: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF30u;
        // 0x14cf34: 0xace001f0  sw          $zero, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CF38u;
label_14cf38:
    // 0x14cf38: 0x504a0001  beql        $v0, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x14CF38u;
    {
        const bool branch_taken_0x14cf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x14cf38) {
            ctx->pc = 0x14CF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CF38u;
            // 0x14cf3c: 0xace001f4  sw          $zero, 0x1F4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF40u;
            goto label_14cf40;
        }
    }
    ctx->pc = 0x14CF40u;
label_14cf40:
    // 0x14cf40: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CF48u;
}
