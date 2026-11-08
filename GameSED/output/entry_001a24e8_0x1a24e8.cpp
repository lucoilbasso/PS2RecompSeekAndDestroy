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

// Function: entry_001a24e8
// Address: 0x1a24e8 - 0x1a2500
void entry_001a24e8_0x1a24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a24e8_0x1a24e8");
#endif

    ctx->pc = 0x1a24e8u;

    // 0x1a24e8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a24e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a24ec: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1a24ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a24f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a24f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a24f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a24f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a24f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A24F8u;
    {
        const bool branch_taken_0x1a24f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24F8u;
        // 0x1a24fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24f8) {
            ctx->pc = 0x1A2528u;
            return;
        }
    }
    ctx->pc = 0x1A2500u;
}
