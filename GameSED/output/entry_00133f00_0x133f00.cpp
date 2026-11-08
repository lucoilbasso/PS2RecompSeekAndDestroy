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

// Function: entry_00133f00
// Address: 0x133f00 - 0x133f8c
void entry_00133f00_0x133f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133f00_0x133f00");
#endif

    switch (ctx->pc) {
        case 0x133f14u: goto label_133f14;
        case 0x133f20u: goto label_133f20;
        default: break;
    }

    ctx->pc = 0x133f00u;

    // 0x133f00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x133f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133f04: 0x56820022  bnel        $s4, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x133F04u;
    {
        const bool branch_taken_0x133f04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x133f04) {
            ctx->pc = 0x133F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133F04u;
            // 0x133f08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133F90u;
            return;
        }
    }
    ctx->pc = 0x133F0Cu;
    // 0x133f0c: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x133F0Cu;
    SET_GPR_U32(ctx, 31, 0x133F14u);
    ctx->pc = 0x133F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F0Cu;
    // 0x133f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x133F0Cu, 0x133F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F14u;
label_133f14:
    // 0x133f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f18: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133F18u;
    SET_GPR_U32(ctx, 31, 0x133F20u);
    ctx->pc = 0x133F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F18u;
    // 0x133f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133F18u, 0x133F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F20u;
label_133f20:
    // 0x133f20: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x133f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x133f24: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x133f28: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x133f28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x133f2c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x133f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x133f30: 0x26022000  addiu       $v0, $s0, 0x2000
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x133f34: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x133f34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x133f38: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x133f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x133f3c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x133f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x133f40: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x133f44: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x133f48: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x133f4c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x133f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x133f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133f58: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x133f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x133f5c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x133f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133f60: 0x248610a0  addiu       $a2, $a0, 0x10A0
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4256));
    // 0x133f64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x133f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133f6c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x133f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x133f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x133f74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x133f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x133f78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x133f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x133f7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x133f7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x133f80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x133f80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x133f84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x133f84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x133f88: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x133f88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x133f8cu;
}
