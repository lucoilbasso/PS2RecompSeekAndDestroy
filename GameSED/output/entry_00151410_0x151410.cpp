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

// Function: entry_00151410
// Address: 0x151410 - 0x151440
void entry_00151410_0x151410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151410_0x151410");
#endif

    ctx->pc = 0x151410u;

    // 0x151410: 0x52a0000b  beql        $s5, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x151410u;
    {
        const bool branch_taken_0x151410 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x151410) {
            ctx->pc = 0x151414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151410u;
            // 0x151414: 0xc60003b4  lwc1        $f0, 0x3B4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151440u;
            return;
        }
    }
    ctx->pc = 0x151418u;
    // 0x151418: 0x92020575  lbu         $v0, 0x575($s0)
    ctx->pc = 0x151418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x15141c: 0xc60103b4  lwc1        $f1, 0x3B4($s0)
    ctx->pc = 0x15141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151420: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x151420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151428: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x15142c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x15142cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x151430: 0xc4209860  lwc1        $f0, -0x67A0($at)
    ctx->pc = 0x151430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151434: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151438: 0xe60103b4  swc1        $f1, 0x3B4($s0)
    ctx->pc = 0x151438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
    // 0x15143c: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x15143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x151440u;
}
