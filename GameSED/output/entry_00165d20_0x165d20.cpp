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

// Function: entry_00165d20
// Address: 0x165d20 - 0x165dbc
void entry_00165d20_0x165d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d20_0x165d20");
#endif

    switch (ctx->pc) {
        case 0x165d54u: goto label_165d54;
        case 0x165d64u: goto label_165d64;
        case 0x165dacu: goto label_165dac;
        default: break;
    }

    ctx->pc = 0x165d20u;

label_165d20:
    // 0x165d20: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x165d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_165d24:
    // 0x165d24: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x165d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_165d28:
    // 0x165d28: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_165d2c:
    if (ctx->pc == 0x165D2Cu) {
        ctx->pc = 0x165D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D28u;
        // 0x165d2c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D30u;
        goto label_165d30;
    }
    ctx->pc = 0x165D28u;
    {
        const bool branch_taken_0x165d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d28) {
            ctx->pc = 0x165D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D28u;
            // 0x165d2c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC0u;
            return;
        }
    }
    ctx->pc = 0x165D30u;
label_165d30:
    // 0x165d30: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x165d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_165d34:
    // 0x165d34: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x165d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_165d38:
    // 0x165d38: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x165d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_165d3c:
    // 0x165d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165d40:
    // 0x165d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165d44:
    // 0x165d44: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x165d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_165d48:
    // 0x165d48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x165d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_165d4c:
    // 0x165d4c: 0xc041160  jal         func_104580
label_165d50:
    if (ctx->pc == 0x165D50u) {
        ctx->pc = 0x165D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D4Cu;
        // 0x165d50: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D54u;
        goto label_165d54;
    }
    ctx->pc = 0x165D4Cu;
    SET_GPR_U32(ctx, 31, 0x165D54u);
    ctx->pc = 0x165D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D4Cu;
    // 0x165d50: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x165D4Cu, 0x165D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D54u;
label_165d54:
    // 0x165d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x165d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_165d58:
    // 0x165d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165d5c:
    // 0x165d5c: 0xc04112e  jal         func_1044B8
label_165d60:
    if (ctx->pc == 0x165D60u) {
        ctx->pc = 0x165D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D5Cu;
        // 0x165d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D64u;
        goto label_165d64;
    }
    ctx->pc = 0x165D5Cu;
    SET_GPR_U32(ctx, 31, 0x165D64u);
    ctx->pc = 0x165D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D5Cu;
    // 0x165d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x165D5Cu, 0x165D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D64u;
label_165d64:
    // 0x165d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_165d68:
    // 0x165d68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x165d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_165d6c:
    // 0x165d6c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x165d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_165d70:
    // 0x165d70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x165d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_165d74:
    // 0x165d74: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x165d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_165d78:
    // 0x165d78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x165d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_165d7c:
    // 0x165d7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x165d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_165d80:
    // 0x165d80: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x165d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_165d84:
    // 0x165d84: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x165d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_165d88:
    // 0x165d88: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x165d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_165d8c:
    // 0x165d8c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x165d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_165d90:
    // 0x165d90: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x165d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_165d94:
    // 0x165d94: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_165d98:
    // 0x165d98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x165d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_165d9c:
    // 0x165d9c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x165d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_165da0:
    // 0x165da0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_165da4:
    // 0x165da4: 0x40f809  jalr        $v0
label_165da8:
    if (ctx->pc == 0x165DA8u) {
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DACu;
        goto label_165dac;
    }
    ctx->pc = 0x165DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165DACu);
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DA4u, 0x165DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165DACu;
label_165dac:
    // 0x165dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165db0:
    // 0x165db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165db4:
    // 0x165db4: 0xc0618da  jal         func_186368
label_165db8:
    if (ctx->pc == 0x165DB8u) {
        ctx->pc = 0x165DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DB4u;
        // 0x165db8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DBCu;
        goto label_fallthrough_0x165db4;
    }
    ctx->pc = 0x165DB4u;
    SET_GPR_U32(ctx, 31, 0x165DBCu);
    ctx->pc = 0x165DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DB4u;
    // 0x165db8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x165DB4u, 0x165DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x165db4:
    ctx->pc = 0x165DBCu;
}
