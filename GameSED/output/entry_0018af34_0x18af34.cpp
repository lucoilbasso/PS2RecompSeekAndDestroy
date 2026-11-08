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

// Function: entry_0018af34
// Address: 0x18af34 - 0x18b038
void entry_0018af34_0x18af34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018af34_0x18af34");
#endif

    switch (ctx->pc) {
        case 0x18af44u: goto label_18af44;
        case 0x18af58u: goto label_18af58;
        default: break;
    }

    ctx->pc = 0x18af34u;

    // 0x18af34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af3c: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18AF3Cu;
    SET_GPR_U32(ctx, 31, 0x18AF44u);
    ctx->pc = 0x18AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF3Cu;
    // 0x18af40: 0x26a60180  addiu       $a2, $s5, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18AF3Cu, 0x18AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF44u;
label_18af44:
    // 0x18af44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af48: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x18af48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18af4c: 0x26a60190  addiu       $a2, $s5, 0x190
    ctx->pc = 0x18af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x18af50: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18AF50u;
    SET_GPR_U32(ctx, 31, 0x18AF58u);
    ctx->pc = 0x18AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF50u;
    // 0x18af54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18AF50u, 0x18AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF58u;
label_18af58:
    // 0x18af58: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x18af5c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x18af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x18af60: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x18AF60u;
    {
        const bool branch_taken_0x18af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af60) {
            ctx->pc = 0x18AF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF60u;
            // 0x18af64: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B038u;
            return;
        }
    }
    ctx->pc = 0x18AF68u;
    // 0x18af68: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x18af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x18af6c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x18AF6Cu;
    {
        const bool branch_taken_0x18af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af6c) {
            ctx->pc = 0x18AF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF6Cu;
            // 0x18af70: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B038u;
            return;
        }
    }
    ctx->pc = 0x18AF74u;
    // 0x18af74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18af78: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x18af78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x18af7c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18af80: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x18af80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x18af84: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x18af84u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x18af88: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x18af88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18af8c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x18af90: 0x1613fc  dsll32      $v0, $s6, 15
    ctx->pc = 0x18af90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 15));
    // 0x18af94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18af98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18af9c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x18afa0: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x18afa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x18afa4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18afa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18afa8: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x18afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x18afac: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x18afacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x18afb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18afb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18afb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18afb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18afb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18afbc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afc0: 0x8ea50154  lw          $a1, 0x154($s5)
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
    // 0x18afc4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18afc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afc8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x18afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x18afcc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afd0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x18afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x18afd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afd8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x18afd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18afdc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afe0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afe4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afe8: 0xc6a001b0  lwc1        $f0, 0x1B0($s5)
    ctx->pc = 0x18afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18afec: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18afecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aff0: 0xc6a101b4  lwc1        $f1, 0x1B4($s5)
    ctx->pc = 0x18aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aff4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18aff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18aff8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18affc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b000: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18b000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18b004: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b008: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18b008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18b00c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x18b00cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b010: 0xc6a101bc  lwc1        $f1, 0x1BC($s5)
    ctx->pc = 0x18b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b014: 0xc6a001b8  lwc1        $f0, 0x1B8($s5)
    ctx->pc = 0x18b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b018: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18b018u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18b01c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x18b01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18b020: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18b024: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18b024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18b028: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x18b028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b02c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18B02Cu;
    {
        const bool branch_taken_0x18b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B02Cu;
        // 0x18b030: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b02c) {
            ctx->pc = 0x18B1A4u;
            return;
        }
    }
    ctx->pc = 0x18B034u;
    // 0x18b034: 0x0  nop
    ctx->pc = 0x18b034u;
    // NOP
    ctx->pc = 0x18b038u;
}
