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

// Function: entry_00182b14
// Address: 0x182b14 - 0x182b24
void entry_00182b14_0x182b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182b14_0x182b14");
#endif

    ctx->pc = 0x182b14u;

    // 0x182b14: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182b1c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x182B1Cu;
    {
        const bool branch_taken_0x182b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b1c) {
            ctx->pc = 0x182B58u;
            return;
        }
    }
    ctx->pc = 0x182B24u;
}
