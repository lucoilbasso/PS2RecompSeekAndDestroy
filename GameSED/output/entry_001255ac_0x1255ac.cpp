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

// Function: entry_001255ac
// Address: 0x1255ac - 0x1255d0
void entry_001255ac_0x1255ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001255ac_0x1255ac");
#endif

    ctx->pc = 0x1255acu;

    // 0x1255ac: 0xc78180d4  lwc1        $f1, -0x7F2C($gp)
    ctx->pc = 0x1255acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1255b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1255b4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1255b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1255b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1255bc: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1255bcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1255c0: 0x4617a836  c.le.s      $f21, $f23
    ctx->pc = 0x1255c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255c4: 0x4501ff3c  bc1t        . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1255C4u;
    {
        const bool branch_taken_0x1255c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255C4u;
        // 0x1255c8: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255c4) {
            ctx->pc = 0x1252B8u;
            return;
        }
    }
    ctx->pc = 0x1255CCu;
    // 0x1255cc: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x1255ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    ctx->pc = 0x1255d0u;
}
