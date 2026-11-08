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

// Function: entry_0016dfbc
// Address: 0x16dfbc - 0x16e030
void entry_0016dfbc_0x16dfbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dfbc_0x16dfbc");
#endif

    switch (ctx->pc) {
        case 0x16dff4u: goto label_16dff4;
        case 0x16e004u: goto label_16e004;
        default: break;
    }

    ctx->pc = 0x16dfbcu;

    // 0x16dfbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16dfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfc0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x16dfc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16dfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dfc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16dfc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfcc: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x16dfd0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x16dfd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x16dfd4: 0xc78184d4  lwc1        $f1, -0x7B2C($gp)
    ctx->pc = 0x16dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dfd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dfdc: 0xc78d84d8  lwc1        $f13, -0x7B28($gp)
    ctx->pc = 0x16dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16dfe0: 0x261100d0  addiu       $s1, $s0, 0xD0
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x16dfe4: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x16dfe4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x16dfe8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x16dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dfec: 0xc067ba2  jal         func_19EE88
    ctx->pc = 0x16DFECu;
    SET_GPR_U32(ctx, 31, 0x16DFF4u);
    ctx->pc = 0x16DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFECu;
    // 0x16dff0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE88u, 0x16DFECu, 0x16DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFF4u;
label_16dff4:
    // 0x16dff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dff8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dffc: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x16DFFCu;
    SET_GPR_U32(ctx, 31, 0x16E004u);
    ctx->pc = 0x16E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFFCu;
    // 0x16e000: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x16DFFCu, 0x16E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E004u;
label_16e004:
    // 0x16e004: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x16e008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e00c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x16e00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x16e010: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16E010u;
    {
        const bool branch_taken_0x16e010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E010u;
        // 0x16e014: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e010) {
            ctx->pc = 0x16E048u;
            return;
        }
    }
    ctx->pc = 0x16E018u;
    // 0x16e018: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E018u;
    {
        const bool branch_taken_0x16e018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e018) {
            ctx->pc = 0x16E01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E018u;
            // 0x16e01c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E030u;
            return;
        }
    }
    ctx->pc = 0x16E020u;
    // 0x16e020: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16E020u;
    {
        const bool branch_taken_0x16e020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e020) {
            ctx->pc = 0x16E024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E020u;
            // 0x16e024: 0x269305c0  addiu       $s3, $s4, 0x5C0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1472));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E054u;
            return;
        }
    }
    ctx->pc = 0x16E028u;
    // 0x16e028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16E028u;
    {
        const bool branch_taken_0x16e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e028) {
            ctx->pc = 0x16E054u;
            return;
        }
    }
    ctx->pc = 0x16E030u;
}
