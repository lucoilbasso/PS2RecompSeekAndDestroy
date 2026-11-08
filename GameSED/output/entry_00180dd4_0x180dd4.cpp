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

// Function: entry_00180dd4
// Address: 0x180dd4 - 0x180de8
void entry_00180dd4_0x180dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180dd4_0x180dd4");
#endif

    ctx->pc = 0x180dd4u;

    // 0x180dd4: 0xc5800018  lwc1        $f0, 0x18($t4)
    ctx->pc = 0x180dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dd8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180ddc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180ddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180de0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DE0u;
    {
        const bool branch_taken_0x180de0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180de0) {
            ctx->pc = 0x180DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DE0u;
            // 0x180de4: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DE8u;
            return;
        }
    }
    ctx->pc = 0x180DE8u;
}
