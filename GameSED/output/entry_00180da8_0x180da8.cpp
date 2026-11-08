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

// Function: entry_00180da8
// Address: 0x180da8 - 0x180dbc
void entry_00180da8_0x180da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180da8_0x180da8");
#endif

    ctx->pc = 0x180da8u;

    // 0x180da8: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x180da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dac: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180db0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180db4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DB4u;
    {
        const bool branch_taken_0x180db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180db4) {
            ctx->pc = 0x180DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DB4u;
            // 0x180db8: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DBCu;
            return;
        }
    }
    ctx->pc = 0x180DBCu;
}
