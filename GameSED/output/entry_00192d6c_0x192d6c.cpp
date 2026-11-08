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

// Function: entry_00192d6c
// Address: 0x192d6c - 0x192e28
void entry_00192d6c_0x192d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d6c_0x192d6c");
#endif

    switch (ctx->pc) {
        case 0x192dacu: goto label_192dac;
        case 0x192df4u: goto label_192df4;
        case 0x192e24u: goto label_192e24;
        default: break;
    }

    ctx->pc = 0x192d6cu;

    // 0x192d6c: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x192d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x192d70: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x192D70u;
    {
        const bool branch_taken_0x192d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D70u;
        // 0x192d74: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d70) {
            ctx->pc = 0x192E28u;
            return;
        }
    }
    ctx->pc = 0x192D78u;
    // 0x192d78: 0x26630190  addiu       $v1, $s3, 0x190
    ctx->pc = 0x192d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x192d7c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192d80: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x192d80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x192d84: 0xc661023c  lwc1        $f1, 0x23C($s3)
    ctx->pc = 0x192d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192d8c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x192d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192d90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d94: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x192d98: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d9c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x192d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192da0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192da4: 0xc064dda  jal         func_193768
    ctx->pc = 0x192DA4u;
    SET_GPR_U32(ctx, 31, 0x192DACu);
    ctx->pc = 0x192DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DA4u;
    // 0x192da8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192DA4u, 0x192DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DACu;
label_192dac:
    // 0x192dac: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x192dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x192db0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x192db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192db4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192db4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192db8: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x192db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x192dbc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x192dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192dc0: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x192dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x192dc4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192dc8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x192dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x192dcc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192dd0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192dd4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192dd8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192ddc: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x192de0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x192de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x192de8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x192dec: 0xc064cc6  jal         func_193318
    ctx->pc = 0x192DECu;
    SET_GPR_U32(ctx, 31, 0x192DF4u);
    ctx->pc = 0x192DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DECu;
    // 0x192df0: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x192DECu, 0x192DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DF4u;
label_192df4:
    // 0x192df4: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x192df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x192df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dfc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e00: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x192e00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x192e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e08: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x192e0c: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x192e10: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x192e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x192e14: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x192e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x192e18: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192e18u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192e1c: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192E1Cu;
    SET_GPR_U32(ctx, 31, 0x192E24u);
    ctx->pc = 0x192E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E1Cu;
    // 0x192e20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192E1Cu, 0x192E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E24u;
label_192e24:
    // 0x192e24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192e28u;
}
