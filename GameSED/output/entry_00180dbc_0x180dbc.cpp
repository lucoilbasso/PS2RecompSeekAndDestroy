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

// Function: entry_00180dbc
// Address: 0x180dbc - 0x180dd4
void entry_00180dbc_0x180dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180dbc_0x180dbc");
#endif

    ctx->pc = 0x180dbcu;

    // 0x180dbc: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x180dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dc0: 0xc5a10008  lwc1        $f1, 0x8($t5)
    ctx->pc = 0x180dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180dc4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180dc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180dcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DCCu;
    {
        const bool branch_taken_0x180dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180dcc) {
            ctx->pc = 0x180DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DCCu;
            // 0x180dd0: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DD4u;
            return;
        }
    }
    ctx->pc = 0x180DD4u;
}
