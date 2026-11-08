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

// Function: entry_00128498
// Address: 0x128498 - 0x1284f8
void entry_00128498_0x128498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128498_0x128498");
#endif

    ctx->pc = 0x128498u;

    // 0x128498: 0x26230240  addiu       $v1, $s1, 0x240
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x12849c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x12849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1284a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1284a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1284a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1284a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1284ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1284acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1284b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1284b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1284b4: 0x96e20046  lhu         $v0, 0x46($s7)
    ctx->pc = 0x1284b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 70)));
    // 0x1284b8: 0x4602b8c2  mul.s       $f3, $f23, $f2
    ctx->pc = 0x1284b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1284bc: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1284bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1284c0: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x1284c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1284c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1284c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1284c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1284c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1284cc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1284ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1284d0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1284d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1284d4: 0xc6200248  lwc1        $f0, 0x248($s1)
    ctx->pc = 0x1284d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1284d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1284d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1284dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1284DCu;
    {
        const bool branch_taken_0x1284dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284DCu;
        // 0x1284e0: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284dc) {
            ctx->pc = 0x1284F8u;
            return;
        }
    }
    ctx->pc = 0x1284E4u;
    // 0x1284e4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1284e4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1284e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1284e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1284ec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1284ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1284f0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1284f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1284f4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1284f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    ctx->pc = 0x1284f8u;
}
