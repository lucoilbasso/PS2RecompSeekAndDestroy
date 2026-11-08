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

// Function: entry_00151440
// Address: 0x151440 - 0x151458
void entry_00151440_0x151440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151440_0x151440");
#endif

    ctx->pc = 0x151440u;

    // 0x151440: 0xc6010354  lwc1        $f1, 0x354($s0)
    ctx->pc = 0x151440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151444: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151448: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x151448u;
    {
        const bool branch_taken_0x151448 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151448u;
        // 0x15144c: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151448) {
            ctx->pc = 0x151458u;
            return;
        }
    }
    ctx->pc = 0x151450u;
    // 0x151450: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x151450u;
    {
        const bool branch_taken_0x151450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151450u;
        // 0x151454: 0xe6150624  swc1        $f21, 0x624($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151450) {
            ctx->pc = 0x151494u;
            return;
        }
    }
    ctx->pc = 0x151458u;
}
