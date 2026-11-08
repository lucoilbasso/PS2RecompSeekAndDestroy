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

// Function: ApMotionBezierTraceLoadAcc__FP7WcActorb
// Address: 0x13ad58 - 0x13ae0c
void ApMotionBezierTraceLoadAcc__FP7WcActorb_0x13ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionBezierTraceLoadAcc__FP7WcActorb_0x13ad58");
#endif

    switch (ctx->pc) {
        case 0x13ad8cu: goto label_13ad8c;
        default: break;
    }

    ctx->pc = 0x13ad58u;

    // 0x13ad58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ad5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ad60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13ad60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ad68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ad68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ad70: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13ad74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ad78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ad7c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x13ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13ad80: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13ad80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ad84: 0xc061a46  jal         func_186918
    ctx->pc = 0x13AD84u;
    SET_GPR_U32(ctx, 31, 0x13AD8Cu);
    ctx->pc = 0x13AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD84u;
    // 0x13ad88: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13AD84u, 0x13AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD8Cu;
label_13ad8c:
    // 0x13ad8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13ad8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad90: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x13ad94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AD94u;
    {
        const bool branch_taken_0x13ad94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD94u;
        // 0x13ad98: 0x2444a5c8  addiu       $a0, $v0, -0x5A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad94) {
            ctx->pc = 0x13ADA8u;
            goto label_13ada8;
        }
    }
    ctx->pc = 0x13AD9Cu;
    // 0x13ad9c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13ada0: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADA0u;
    {
        const bool branch_taken_0x13ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13ada0) {
            ctx->pc = 0x13ADACu;
            goto label_13adac;
        }
    }
    ctx->pc = 0x13ADA8u;
label_13ada8:
    // 0x13ada8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13ada8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13adac:
    // 0x13adac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13ADACu;
    {
        const bool branch_taken_0x13adac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADACu;
        // 0x13adb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adac) {
            ctx->pc = 0x13ADF8u;
            goto label_13adf8;
        }
    }
    ctx->pc = 0x13ADB4u;
    // 0x13adb4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x13ADB4u;
    {
        const bool branch_taken_0x13adb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADB4u;
        // 0x13adb8: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adb4) {
            ctx->pc = 0x13ADF0u;
            goto label_13adf0;
        }
    }
    ctx->pc = 0x13ADBCu;
    // 0x13adbc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x13adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13adc0: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x13adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x13adc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13adc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13adc8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13adcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13adccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13add0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13add0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13add4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x13add4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13add8: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x13add8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13addc: 0x70008030  pmfhl.lw    $s0
    ctx->pc = 0x13addcu;
    SET_GPR_VEC(ctx, 16, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x13ade0: 0x1083fb  dsra        $s0, $s0, 15
    ctx->pc = 0x13ade0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> 15);
    // 0x13ade4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13ADE4u;
    {
        const bool branch_taken_0x13ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADE4u;
        // 0x13ade8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ade4) {
            ctx->pc = 0x13ADF8u;
            goto label_13adf8;
        }
    }
    ctx->pc = 0x13ADECu;
    // 0x13adec: 0x0  nop
    ctx->pc = 0x13adecu;
    // NOP
label_13adf0:
    // 0x13adf0: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13adf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13adf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13adf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13adf8:
    // 0x13adf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13adf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13adfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13adfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ae00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ae04: 0x3e00008  jr          $ra
    ctx->pc = 0x13AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE04u;
        // 0x13ae08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AE0Cu;
}
