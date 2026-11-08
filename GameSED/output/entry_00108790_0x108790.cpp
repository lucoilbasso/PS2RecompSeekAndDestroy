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

// Function: entry_00108790
// Address: 0x108790 - 0x1087dc
void entry_00108790_0x108790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108790_0x108790");
#endif

    switch (ctx->pc) {
        case 0x108798u: goto label_108798;
        default: break;
    }

    ctx->pc = 0x108790u;

    // 0x108790: 0xc0691f6  jal         func_1A47D8
    ctx->pc = 0x108790u;
    SET_GPR_U32(ctx, 31, 0x108798u);
    ctx->pc = 0x108794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108790u;
    // 0x108794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47D8u, 0x108790u, 0x108798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108798u;
label_108798:
    // 0x108798: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x108798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10879c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10879cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1087a0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1087a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1087a4: 0x3401fff9  ori         $at, $zero, 0xFFF9
    ctx->pc = 0x1087a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1087a8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1087ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1087acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1087b0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1087b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1087b4: 0x50400252  beql        $v0, $zero, . + 4 + (0x252 << 2)
    ctx->pc = 0x1087B4u;
    {
        const bool branch_taken_0x1087b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1087b4) {
            ctx->pc = 0x1087B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087B4u;
            // 0x1087b8: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x1087BCu;
    // 0x1087bc: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x1087bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1087c0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1087c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1087c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1087C4u;
    {
        const bool branch_taken_0x1087c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087C4u;
        // 0x1087c8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087c4) {
            ctx->pc = 0x1087DCu;
            return;
        }
    }
    ctx->pc = 0x1087CCu;
    // 0x1087cc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1087ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1087d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1087d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1087d4: 0x5440024a  bnel        $v0, $zero, . + 4 + (0x24A << 2)
    ctx->pc = 0x1087D4u;
    {
        const bool branch_taken_0x1087d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1087d4) {
            ctx->pc = 0x1087D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087D4u;
            // 0x1087d8: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x1087DCu;
}
