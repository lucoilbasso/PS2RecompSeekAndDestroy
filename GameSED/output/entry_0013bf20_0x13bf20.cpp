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

// Function: entry_0013bf20
// Address: 0x13bf20 - 0x13bf58
void entry_0013bf20_0x13bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf20_0x13bf20");
#endif

    ctx->pc = 0x13bf20u;

    // 0x13bf20: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x13bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bf24: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x13bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x13bf28: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x13bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf2c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x13bf2cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x13bf30: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13bf34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bf38: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13bf3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13bf3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x13bf40: 0x1456000f  bne         $v0, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x13BF40u;
    {
        const bool branch_taken_0x13bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x13BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF40u;
        // 0x13bf44: 0xe6610014  swc1        $f1, 0x14($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf40) {
            ctx->pc = 0x13BF80u;
            return;
        }
    }
    ctx->pc = 0x13BF48u;
    // 0x13bf48: 0x8cb001b0  lw          $s0, 0x1B0($a1)
    ctx->pc = 0x13bf48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x13bf4c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BF4Cu;
    {
        const bool branch_taken_0x13bf4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf4c) {
            ctx->pc = 0x13BF94u;
            return;
        }
    }
    ctx->pc = 0x13BF54u;
    // 0x13bf54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13bf58u;
}
