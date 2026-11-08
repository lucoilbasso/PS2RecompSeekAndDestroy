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

// Function: entry_0013bbe8
// Address: 0x13bbe8 - 0x13bc38
void entry_0013bbe8_0x13bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bbe8_0x13bbe8");
#endif

    ctx->pc = 0x13bbe8u;

    // 0x13bbe8: 0xc62200e0  lwc1        $f2, 0xE0($s1)
    ctx->pc = 0x13bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bbec: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x13bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bbf0: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x13bbf0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x13bbf4: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x13bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bbf8: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x13bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bbfc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x13bbfcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x13bc00: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x13bc00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13bc04: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x13bc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x13bc08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13bc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bc0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bc10: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x13bc14: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13bc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13bc18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13bc18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13bc1c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13bc1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13bc20: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BC20u;
    {
        const bool branch_taken_0x13bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC20u;
        // 0x13bc24: 0xe6820020  swc1        $f2, 0x20($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc20) {
            ctx->pc = 0x13BC70u;
            return;
        }
    }
    ctx->pc = 0x13BC28u;
    // 0x13bc28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13bc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc30: 0x8e6301b0  lw          $v1, 0x1B0($s3)
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x13bc34: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x13bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x13bc38u;
}
