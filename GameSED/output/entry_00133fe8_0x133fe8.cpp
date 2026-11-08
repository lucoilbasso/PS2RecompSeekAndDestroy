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

// Function: entry_00133fe8
// Address: 0x133fe8 - 0x134074
void entry_00133fe8_0x133fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133fe8_0x133fe8");
#endif

    switch (ctx->pc) {
        case 0x133ffcu: goto label_133ffc;
        case 0x134008u: goto label_134008;
        default: break;
    }

    ctx->pc = 0x133fe8u;

    // 0x133fe8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133fec: 0x16820021  bne         $s4, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x133FECu;
    {
        const bool branch_taken_0x133fec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x133fec) {
            ctx->pc = 0x134074u;
            return;
        }
    }
    ctx->pc = 0x133FF4u;
    // 0x133ff4: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x133FF4u;
    SET_GPR_U32(ctx, 31, 0x133FFCu);
    ctx->pc = 0x133FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FF4u;
    // 0x133ff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x133FF4u, 0x133FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FFCu;
label_133ffc:
    // 0x133ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134000: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134000u;
    SET_GPR_U32(ctx, 31, 0x134008u);
    ctx->pc = 0x134004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134000u;
    // 0x134004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134000u, 0x134008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134008u;
label_134008:
    // 0x134008: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x134008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x13400c: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x134010: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x134010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x134014: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x134014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x134018: 0x26022000  addiu       $v0, $s0, 0x2000
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x13401c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x13401cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x134020: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x134020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x134024: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x134024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x134028: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x134028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x13402c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13402cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x134030: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x134034: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x134034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x134038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x134038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13403c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13403cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x134040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134044: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x134044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134048: 0x249010b0  addiu       $s0, $a0, 0x10B0
    ctx->pc = 0x134048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
    // 0x13404c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134054: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x134054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x134058: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13405c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13405cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x134060: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x134060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x134064: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x134064u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x134068: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x134068u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13406c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13406cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x134070: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x134070u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x134074u;
}
