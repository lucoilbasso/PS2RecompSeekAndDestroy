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

// Function: entry_00140d4c
// Address: 0x140d4c - 0x140e88
void entry_00140d4c_0x140d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140d4c_0x140d4c");
#endif

    switch (ctx->pc) {
        case 0x140d5cu: goto label_140d5c;
        case 0x140e0cu: goto label_140e0c;
        case 0x140e44u: goto label_140e44;
        case 0x140e4cu: goto label_140e4c;
        case 0x140e64u: goto label_140e64;
        default: break;
    }

    ctx->pc = 0x140d4cu;

    // 0x140d4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x140d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x140d50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x140d54: 0xc04fbc0  jal         func_13EF00
    ctx->pc = 0x140D54u;
    SET_GPR_U32(ctx, 31, 0x140D5Cu);
    ctx->pc = 0x140D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D54u;
    // 0x140d58: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF00u, 0x140D54u, 0x140D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D5Cu;
label_140d5c:
    // 0x140d5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d60: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x140d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x140d64: 0x3c01c400  lui         $at, 0xC400
    ctx->pc = 0x140d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50176 << 16));
    // 0x140d68: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x140d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x140d6c: 0x2408e001  addiu       $t0, $zero, -0x1FFF
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959105));
    // 0x140d70: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x140d74: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x140d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x140d78: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x140d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x140d7c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x140d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x140d80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x140d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x140d84: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x140d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x140d88: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x140d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x140d8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140d90: 0x24030555  addiu       $v1, $zero, 0x555
    ctx->pc = 0x140d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
    // 0x140d94: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x140d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x140d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x140d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140d9c: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x140d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x140da0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x140da4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x140da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x140da8: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x140da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x140dac: 0xc7848158  lwc1        $f4, -0x7EA8($gp)
    ctx->pc = 0x140dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x140db0: 0x26070350  addiu       $a3, $s0, 0x350
    ctx->pc = 0x140db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x140db4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x140db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x140db8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x140db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140dbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x140dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dc0: 0xe60303a0  swc1        $f3, 0x3A0($s0)
    ctx->pc = 0x140dc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x140dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x140dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dc8: 0xe6000354  swc1        $f0, 0x354($s0)
    ctx->pc = 0x140dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 852), bits); }
    // 0x140dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dd0: 0xe6010358  swc1        $f1, 0x358($s0)
    ctx->pc = 0x140dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
    // 0x140dd4: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x140dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x140dd8: 0xae080370  sw          $t0, 0x370($s0)
    ctx->pc = 0x140dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 8));
    // 0x140ddc: 0xe6050360  swc1        $f5, 0x360($s0)
    ctx->pc = 0x140ddcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 864), bits); }
    // 0x140de0: 0xe6040364  swc1        $f4, 0x364($s0)
    ctx->pc = 0x140de0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 868), bits); }
    // 0x140de4: 0xe6020368  swc1        $f2, 0x368($s0)
    ctx->pc = 0x140de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
    // 0x140de8: 0xe6070388  swc1        $f7, 0x388($s0)
    ctx->pc = 0x140de8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x140dec: 0xe6060398  swc1        $f6, 0x398($s0)
    ctx->pc = 0x140decu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
    // 0x140df0: 0xae0903a4  sw          $t1, 0x3A4($s0)
    ctx->pc = 0x140df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 9));
    // 0x140df4: 0xe6070380  swc1        $f7, 0x380($s0)
    ctx->pc = 0x140df4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
    // 0x140df8: 0xe6060390  swc1        $f6, 0x390($s0)
    ctx->pc = 0x140df8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
    // 0x140dfc: 0xae03036c  sw          $v1, 0x36C($s0)
    ctx->pc = 0x140dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 3));
    // 0x140e00: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x140e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x140e04: 0xc05053c  jal         func_1414F0
    ctx->pc = 0x140E04u;
    SET_GPR_U32(ctx, 31, 0x140E0Cu);
    ctx->pc = 0x140E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E04u;
    // 0x140e08: 0xae000350  sw          $zero, 0x350($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1414F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414F0u, 0x140E04u, 0x140E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E0Cu;
label_140e0c:
    // 0x140e0c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x140e10: 0x8e030370  lw          $v1, 0x370($s0)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x140e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x140e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140e24: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x140e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x140e28: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x140e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x140e2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x140e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x140e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140e34: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x140e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x140e38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x140e38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x140e3c: 0xc050a56  jal         func_142958
    ctx->pc = 0x140E3Cu;
    SET_GPR_U32(ctx, 31, 0x140E44u);
    ctx->pc = 0x140E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E3Cu;
    // 0x140e40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x140E3Cu, 0x140E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E44u;
label_140e44:
    // 0x140e44: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x140E44u;
    SET_GPR_U32(ctx, 31, 0x140E4Cu);
    ctx->pc = 0x140E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E44u;
    // 0x140e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x140E44u, 0x140E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E4Cu;
label_140e4c:
    // 0x140e4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x140e4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x140e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140e54: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x140e54u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x140e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e5c: 0xc050494  jal         func_141250
    ctx->pc = 0x140E5Cu;
    SET_GPR_U32(ctx, 31, 0x140E64u);
    ctx->pc = 0x140E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E5Cu;
    // 0x140e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x140E5Cu, 0x140E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E64u;
label_140e64:
    // 0x140e64: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x140e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x140e68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x140e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e6c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x140e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140e70: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x140e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x140e74: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x140e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x140e78: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x140e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
    // 0x140e7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x140e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x140e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x140e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x140e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->pc = 0x140e88u;
}
