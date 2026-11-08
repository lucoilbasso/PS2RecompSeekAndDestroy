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

// Function: GetGemHeight__8ApcRsc3DP9FVector32
// Address: 0x1d8cc0 - 0x1d8da8
void GetGemHeight__8ApcRsc3DP9FVector32_0x1d8cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGemHeight__8ApcRsc3DP9FVector32_0x1d8cc0");
#endif

    ctx->pc = 0x1d8cc0u;

    // 0x1d8cc0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1d8cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1d8cc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8cc8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8ccc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1d8cd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8cd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8cd8: 0x8c860328  lw          $a2, 0x328($a0)
    ctx->pc = 0x1d8cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1d8cdc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d8cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8ce0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d8ce4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d8ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d8ce8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8CE8u;
    {
        const bool branch_taken_0x1d8ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CE8u;
        // 0x1d8cec: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ce8) {
            ctx->pc = 0x1D8D04u;
            goto label_1d8d04;
        }
    }
    ctx->pc = 0x1D8CF0u;
    // 0x1d8cf0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d8cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d8cf4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1d8cf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8cf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d8cfc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d8cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d8d00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d8d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d8d04:
    // 0x1d8d04: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d8d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8d08: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1d8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1d8d0c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1d8d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1d8d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8d14: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1d8d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1d8d18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8d1c: 0x2447ffc0  addiu       $a3, $v0, -0x40
    ctx->pc = 0x1d8d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d8d20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d8d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8d24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d8d24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8d28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d8d2c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d8d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d8d30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8D30u;
    {
        const bool branch_taken_0x1d8d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D30u;
        // 0x1d8d34: 0x51142  srl         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d30) {
            ctx->pc = 0x1D8D50u;
            goto label_1d8d50;
        }
    }
    ctx->pc = 0x1D8D38u;
    // 0x1d8d38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d8d38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d8d3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1d8d40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8d40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d8d44: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d8d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d8d48: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d8d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d8d4c: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_1d8d50:
    // 0x1d8d50: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1d8d54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d8d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d58: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d8d5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8d60: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x1d8d60u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1d8d64: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1d8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1d8d68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8d6c: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x1d8d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d8d70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D70u;
    {
        const bool branch_taken_0x1d8d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d70) {
            ctx->pc = 0x1D8D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8D70u;
            // 0x1d8d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D88u;
            goto label_1d8d88;
        }
    }
    ctx->pc = 0x1D8D78u;
    // 0x1d8d78: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1d8d7c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1d8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d8d80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d8d84: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x1d8d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
label_1d8d88:
    // 0x1d8d88: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1d8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1d8d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8D8Cu;
    {
        const bool branch_taken_0x1d8d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D8Cu;
        // 0x1d8d90: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d8c) {
            ctx->pc = 0x1D8DA0u;
            goto label_1d8da0;
        }
    }
    ctx->pc = 0x1D8D94u;
    // 0x1d8d94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D98u;
        // 0x1d8d9c: 0xc4404000  lwc1        $f0, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DA0u;
label_1d8da0:
    // 0x1d8da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DA0u;
        // 0x1d8da4: 0xc4c04004  lwc1        $f0, 0x4004($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DA8u;
}
