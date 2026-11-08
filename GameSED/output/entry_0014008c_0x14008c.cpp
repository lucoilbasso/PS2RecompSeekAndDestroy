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

// Function: entry_0014008c
// Address: 0x14008c - 0x1400f4
void entry_0014008c_0x14008c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014008c_0x14008c");
#endif

    switch (ctx->pc) {
        case 0x1400d4u: goto label_1400d4;
        default: break;
    }

    ctx->pc = 0x14008cu;

    // 0x14008c: 0x16600048  bnez        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x14008Cu;
    {
        const bool branch_taken_0x14008c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14008c) {
            ctx->pc = 0x1401B0u;
            return;
        }
    }
    ctx->pc = 0x140094u;
    // 0x140094: 0xc62003cc  lwc1        $f0, 0x3CC($s1)
    ctx->pc = 0x140094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140098: 0xc7828140  lwc1        $f2, -0x7EC0($gp)
    ctx->pc = 0x140098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14009c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1400a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1400a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1400a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1400a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1400a8: 0x46010569  min.s       $f21, $f0, $f1
    ctx->pc = 0x1400a8u;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1400ac: 0x8e2203b0  lw          $v0, 0x3B0($s1)
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x1400b0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1400b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1400b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1400b8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1400b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1400bc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1400bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1400c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1400C0u;
    {
        const bool branch_taken_0x1400c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400C0u;
        // 0x1400c4: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400c0) {
            ctx->pc = 0x1400F4u;
            return;
        }
    }
    ctx->pc = 0x1400C8u;
    // 0x1400c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1400c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400cc: 0xc052fa2  jal         func_14BE88
    ctx->pc = 0x1400CCu;
    SET_GPR_U32(ctx, 31, 0x1400D4u);
    ctx->pc = 0x1400D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400CCu;
    // 0x1400d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x1400CCu, 0x1400D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400D4u;
label_1400d4:
    // 0x1400d4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1400d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1400d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1400dc: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x1400dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x1400e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1400e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1400e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1400e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1400e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1400e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1400ec: 0x46160d80  add.s       $f22, $f1, $f22
    ctx->pc = 0x1400ecu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x1400f0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1400f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x1400f4u;
}
