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

// Function: entry_00180d28
// Address: 0x180d28 - 0x180d3c
void entry_00180d28_0x180d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d28_0x180d28");
#endif

    ctx->pc = 0x180d28u;

    // 0x180d28: 0xc5800018  lwc1        $f0, 0x18($t4)
    ctx->pc = 0x180d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d2c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180d30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180d30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D34u;
    {
        const bool branch_taken_0x180d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d34) {
            ctx->pc = 0x180D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D34u;
            // 0x180d38: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D3Cu;
            return;
        }
    }
    ctx->pc = 0x180D3Cu;
}
