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

// Function: entry_0012a2c4
// Address: 0x12a2c4 - 0x12a350
void entry_0012a2c4_0x12a2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a2c4_0x12a2c4");
#endif

    ctx->pc = 0x12a2c4u;

    // 0x12a2c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x12a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12a2cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12a2ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12a2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a2d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12a2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12a2d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12a2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12a2dc: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x12a2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x12a2e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a2e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12a2e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12a2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12a2e8: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x12a2e8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12a2ec: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x12a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12a2f0: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x12a2f0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a2f4: 0x29000  sll         $s2, $v0, 0
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12a2f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a2fc: 0x92202a  slt         $a0, $a0, $s2
    ctx->pc = 0x12a2fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12a300: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x12a300u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x12a304: 0x560000b0  bnel        $s0, $zero, . + 4 + (0xB0 << 2)
    ctx->pc = 0x12A304u;
    {
        const bool branch_taken_0x12a304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a304) {
            ctx->pc = 0x12A308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A304u;
            // 0x12a308: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A5C8u;
            return;
        }
    }
    ctx->pc = 0x12A30Cu;
    // 0x12a30c: 0x8f8289f8  lw          $v0, -0x7608($gp)
    ctx->pc = 0x12a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x12a310: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x12A310u;
    {
        const bool branch_taken_0x12a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a310) {
            ctx->pc = 0x12A314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A310u;
            // 0x12a314: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A438u;
            return;
        }
    }
    ctx->pc = 0x12A318u;
    // 0x12a318: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12a31c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x12a31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a320: 0x2451d650  addiu       $s1, $v0, -0x29B0
    ctx->pc = 0x12a320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x12a324: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12a324u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x12a328: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A328u;
    {
        const bool branch_taken_0x12a328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A328u;
        // 0x12a32c: 0xaf9189ec  sw          $s1, -0x7614($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937068), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a328) {
            ctx->pc = 0x12A350u;
            return;
        }
    }
    ctx->pc = 0x12A330u;
    // 0x12a330: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x12a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x12a334: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12a338: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12a33c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12a33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12a340: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x12a340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12a344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12A344u;
    {
        const bool branch_taken_0x12a344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A344u;
        // 0x12a348: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a344) {
            ctx->pc = 0x12A384u;
            return;
        }
    }
    ctx->pc = 0x12A34Cu;
    // 0x12a34c: 0x0  nop
    ctx->pc = 0x12a34cu;
    // NOP
    ctx->pc = 0x12a350u;
}
