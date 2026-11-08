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

// Function: caseD_5
// Address: 0x14d9c8 - 0x14da2c
void caseD_5_0x14d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14d9c8");
#endif

    switch (ctx->pc) {
        case 0x14d9d4u: goto label_14d9d4;
        case 0x14d9e8u: goto label_14d9e8;
        default: break;
    }

    ctx->pc = 0x14d9c8u;

    // 0x14d9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9cc: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D9CCu;
    SET_GPR_U32(ctx, 31, 0x14D9D4u);
    ctx->pc = 0x14D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9CCu;
    // 0x14d9d0: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D9CCu, 0x14D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9D4u;
label_14d9d4:
    // 0x14d9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9d8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x14d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9e0: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D9E0u;
    SET_GPR_U32(ctx, 31, 0x14D9E8u);
    ctx->pc = 0x14D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9E0u;
    // 0x14d9e4: 0xe6200300  swc1        $f0, 0x300($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D9E0u, 0x14D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9E8u;
label_14d9e8:
    // 0x14d9e8: 0xc78381c4  lwc1        $f3, -0x7E3C($gp)
    ctx->pc = 0x14d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d9ec: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x14d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9f4: 0x2402050a  addiu       $v0, $zero, 0x50A
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x14d9f8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x14d9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x14d9fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14da00: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x14da00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x14da04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14da04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14da08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14da08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14da0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14da0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14da10: 0xe6200354  swc1        $f0, 0x354($s1)
    ctx->pc = 0x14da10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
    // 0x14da14: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x14da14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14da18: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DA18u;
    {
        const bool branch_taken_0x14da18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA18u;
        // 0x14da1c: 0xe6220358  swc1        $f2, 0x358($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da18) {
            ctx->pc = 0x14DA2Cu;
            return;
        }
    }
    ctx->pc = 0x14DA20u;
    // 0x14da20: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da24: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x14da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x14da28: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    ctx->pc = 0x14da2cu;
}
