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

// Function: entry_0018c180
// Address: 0x18c180 - 0x18c198
void entry_0018c180_0x18c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c180_0x18c180");
#endif

    ctx->pc = 0x18c180u;

    // 0x18c180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C180u;
    {
        const bool branch_taken_0x18c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C180u;
        // 0x18c184: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c180) {
            ctx->pc = 0x18C198u;
            return;
        }
    }
    ctx->pc = 0x18C188u;
    // 0x18c188: 0x460ba042  mul.s       $f1, $f20, $f11
    ctx->pc = 0x18c188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[11]);
    // 0x18c18c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18C18Cu;
    {
        const bool branch_taken_0x18c18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C18Cu;
        // 0x18c190: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c18c) {
            ctx->pc = 0x18C1ECu;
            return;
        }
    }
    ctx->pc = 0x18C194u;
    // 0x18c194: 0x0  nop
    ctx->pc = 0x18c194u;
    // NOP
    ctx->pc = 0x18c198u;
}
