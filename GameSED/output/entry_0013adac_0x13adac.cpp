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

// Function: entry_0013adac
// Address: 0x13adac - 0x13adf0
void entry_0013adac_0x13adac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013adac_0x13adac");
#endif

    ctx->pc = 0x13adacu;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x13ADECu;
    // 0x13adec: 0x0  nop
    ctx->pc = 0x13adecu;
    // NOP
    ctx->pc = 0x13adf0u;
}
