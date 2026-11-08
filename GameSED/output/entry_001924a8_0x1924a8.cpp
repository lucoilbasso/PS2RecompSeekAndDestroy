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

// Function: entry_001924a8
// Address: 0x1924a8 - 0x1924b8
void entry_001924a8_0x1924a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924a8_0x1924a8");
#endif

    ctx->pc = 0x1924a8u;

    // 0x1924a8: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x1924a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1924ac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1924ACu;
    {
        const bool branch_taken_0x1924ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924ac) {
            ctx->pc = 0x1924B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1924ACu;
            // 0x1924b0: 0xc6220280  lwc1        $f2, 0x280($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1924B8u;
            return;
        }
    }
    ctx->pc = 0x1924B4u;
    // 0x1924b4: 0xc6220284  lwc1        $f2, 0x284($s1)
    ctx->pc = 0x1924b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x1924b8u;
}
