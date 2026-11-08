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

// Function: entry_00181cb8
// Address: 0x181cb8 - 0x181ccc
void entry_00181cb8_0x181cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181cb8_0x181cb8");
#endif

    ctx->pc = 0x181cb8u;

    // 0x181cb8: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x181cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181cbc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x181cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x181cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x181cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CC4u;
    {
        const bool branch_taken_0x181cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181cc4) {
            ctx->pc = 0x181CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CC4u;
            // 0x181cc8: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CCCu;
            return;
        }
    }
    ctx->pc = 0x181CCCu;
}
