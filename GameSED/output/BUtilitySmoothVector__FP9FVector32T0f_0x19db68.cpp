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

// Function: BUtilitySmoothVector__FP9FVector32T0f
// Address: 0x19db68 - 0x19dc8c
void BUtilitySmoothVector__FP9FVector32T0f_0x19db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilitySmoothVector__FP9FVector32T0f_0x19db68");
#endif

    ctx->pc = 0x19db68u;

    // 0x19db68: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19db6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19db6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19db74: 0xc78285dc  lwc1        $f2, -0x7A24($gp)
    ctx->pc = 0x19db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19db78: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x19db78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19db7c: 0x460c1842  mul.s       $f1, $f3, $f12
    ctx->pc = 0x19db7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x19db80: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x19db80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19db84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19DB84u;
    {
        const bool branch_taken_0x19db84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB84u;
        // 0x19db88: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db84) {
            ctx->pc = 0x19DBA0u;
            goto label_19dba0;
        }
    }
    ctx->pc = 0x19DB8Cu;
    // 0x19db8c: 0xc78085e0  lwc1        $f0, -0x7A20($gp)
    ctx->pc = 0x19db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19db90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19db90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19db94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DB94u;
    {
        const bool branch_taken_0x19db94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19db94) {
            ctx->pc = 0x19DBA0u;
            goto label_19dba0;
        }
    }
    ctx->pc = 0x19DB9Cu;
    // 0x19db9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19db9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19dba0:
    // 0x19dba0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dba4: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dba8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DBA8u;
    {
        const bool branch_taken_0x19dba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dba8) {
            ctx->pc = 0x19DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DBA8u;
            // 0x19dbac: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DBB0u;
            goto label_19dbb0;
        }
    }
    ctx->pc = 0x19DBB0u;
label_19dbb0:
    // 0x19dbb0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dbb4: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dbb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dbbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19dbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19dbc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DBC0u;
    {
        const bool branch_taken_0x19dbc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBC0u;
        // 0x19dbc4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbc0) {
            ctx->pc = 0x19DBCCu;
            goto label_19dbcc;
        }
    }
    ctx->pc = 0x19DBC8u;
    // 0x19dbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dbcc:
    // 0x19dbcc: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x19dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x19dbd0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dbd4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dbd8: 0xc78285e4  lwc1        $f2, -0x7A1C($gp)
    ctx->pc = 0x19dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dbdc: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x19dbdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19dbe0: 0x460c1842  mul.s       $f1, $f3, $f12
    ctx->pc = 0x19dbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x19dbe4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x19dbe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbe8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DBE8u;
    {
        const bool branch_taken_0x19dbe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBE8u;
        // 0x19dbec: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbe8) {
            ctx->pc = 0x19DC00u;
            goto label_19dc00;
        }
    }
    ctx->pc = 0x19DBF0u;
    // 0x19dbf0: 0xc78085e8  lwc1        $f0, -0x7A18($gp)
    ctx->pc = 0x19dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19dbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DBF8u;
    {
        const bool branch_taken_0x19dbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dbf8) {
            ctx->pc = 0x19DBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DBF8u;
            // 0x19dbfc: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC00u;
            goto label_19dc00;
        }
    }
    ctx->pc = 0x19DC00u;
label_19dc00:
    // 0x19dc00: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dc04: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dc04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC08u;
    {
        const bool branch_taken_0x19dc08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc08) {
            ctx->pc = 0x19DC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC08u;
            // 0x19dc0c: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC10u;
            goto label_19dc10;
        }
    }
    ctx->pc = 0x19DC10u;
label_19dc10:
    // 0x19dc10: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc14: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dc14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19dc18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19dc1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DC1Cu;
    {
        const bool branch_taken_0x19dc1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC1Cu;
        // 0x19dc20: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc1c) {
            ctx->pc = 0x19DC28u;
            goto label_19dc28;
        }
    }
    ctx->pc = 0x19DC24u;
    // 0x19dc24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x19dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_19dc28:
    // 0x19dc28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19dc2c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc30: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dc34: 0xc78285ec  lwc1        $f2, -0x7A14($gp)
    ctx->pc = 0x19dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dc38: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19dc38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19dc3c: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x19dc3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x19dc40: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x19dc40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DC44u;
    {
        const bool branch_taken_0x19dc44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc44) {
            ctx->pc = 0x19DC5Cu;
            goto label_19dc5c;
        }
    }
    ctx->pc = 0x19DC4Cu;
    // 0x19dc4c: 0xc78085f0  lwc1        $f0, -0x7A10($gp)
    ctx->pc = 0x19dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc50: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19dc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC54u;
    {
        const bool branch_taken_0x19dc54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc54) {
            ctx->pc = 0x19DC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC54u;
            // 0x19dc58: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC5Cu;
            goto label_19dc5c;
        }
    }
    ctx->pc = 0x19DC5Cu;
label_19dc5c:
    // 0x19dc5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19dc5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19dc60: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x19dc60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC64u;
    {
        const bool branch_taken_0x19dc64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc64) {
            ctx->pc = 0x19DC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC64u;
            // 0x19dc68: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC6Cu;
            goto label_19dc6c;
        }
    }
    ctx->pc = 0x19DC6Cu;
label_19dc6c:
    // 0x19dc6c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc70: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x19dc70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc74: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x19dc74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x19dc78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DC78u;
    {
        const bool branch_taken_0x19dc78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC78u;
        // 0x19dc7c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc78) {
            ctx->pc = 0x19DC84u;
            goto label_19dc84;
        }
    }
    ctx->pc = 0x19DC80u;
    // 0x19dc80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19dc84:
    // 0x19dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC8Cu;
}
