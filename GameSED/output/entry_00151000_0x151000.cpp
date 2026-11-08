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

// Function: entry_00151000
// Address: 0x151000 - 0x151034
void entry_00151000_0x151000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151000_0x151000");
#endif

    ctx->pc = 0x151000u;

    // 0x151000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151004: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x151004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151008: 0x56c0000b  bnel        $s6, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x151008u;
    {
        const bool branch_taken_0x151008 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x151008) {
            ctx->pc = 0x15100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151008u;
            // 0x15100c: 0x4602ad42  mul.s       $f21, $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151038u;
            return;
        }
    }
    ctx->pc = 0x151010u;
    // 0x151010: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x151010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x151014: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151018: 0xc601035c  lwc1        $f1, 0x35C($s0)
    ctx->pc = 0x151018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15101c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x151020: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x151024: 0xc4209864  lwc1        $f0, -0x679C($at)
    ctx->pc = 0x151024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151028: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x151028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15102c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15102cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151030: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x151030u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x151034u;
}
