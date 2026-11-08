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

// Function: entry_00140434
// Address: 0x140434 - 0x140458
void entry_00140434_0x140434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140434_0x140434");
#endif

    ctx->pc = 0x140434u;

    // 0x140434: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x140434u;
    {
        const bool branch_taken_0x140434 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x140438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140434u;
        // 0x140438: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140434) {
            ctx->pc = 0x1404B0u;
            return;
        }
    }
    ctx->pc = 0x14043Cu;
    // 0x14043c: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x14043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140440: 0xc64101a4  lwc1        $f1, 0x1A4($s2)
    ctx->pc = 0x140440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140444: 0x264202c0  addiu       $v0, $s2, 0x2C0
    ctx->pc = 0x140444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x140448: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x140448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x14044c: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x14044cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x140450: 0xae4002c4  sw          $zero, 0x2C4($s2)
    ctx->pc = 0x140450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 708), GPR_U32(ctx, 0));
    // 0x140454: 0x0  nop
    ctx->pc = 0x140454u;
    // NOP
    ctx->pc = 0x140458u;
}
