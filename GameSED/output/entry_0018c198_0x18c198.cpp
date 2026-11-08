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

// Function: entry_0018c198
// Address: 0x18c198 - 0x18c1b8
void entry_0018c198_0x18c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c198_0x18c198");
#endif

    ctx->pc = 0x18c198u;

    // 0x18c198: 0x33c20f00  andi        $v0, $fp, 0xF00
    ctx->pc = 0x18c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3840);
    // 0x18c19c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C19Cu;
    {
        const bool branch_taken_0x18c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C19Cu;
        // 0x18c1a0: 0x211c2  srl         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c19c) {
            ctx->pc = 0x18C1B8u;
            return;
        }
    }
    ctx->pc = 0x18C1A4u;
    // 0x18c1a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c1ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c1b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18C1B0u;
    {
        const bool branch_taken_0x18c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1B0u;
        // 0x18c1b4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1b0) {
            ctx->pc = 0x18C1ECu;
            return;
        }
    }
    ctx->pc = 0x18C1B8u;
}
