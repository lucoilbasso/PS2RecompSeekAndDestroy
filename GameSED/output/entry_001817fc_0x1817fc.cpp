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

// Function: entry_001817fc
// Address: 0x1817fc - 0x181818
void entry_001817fc_0x1817fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001817fc_0x1817fc");
#endif

    ctx->pc = 0x1817fcu;

    // 0x1817fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1817FCu;
    {
        const bool branch_taken_0x1817fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817fc) {
            ctx->pc = 0x181818u;
            return;
        }
    }
    ctx->pc = 0x181804u;
    // 0x181804: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x181804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181808: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x181808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18180c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18180Cu;
    {
        const bool branch_taken_0x18180c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18180Cu;
        // 0x181810: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18180c) {
            ctx->pc = 0x181818u;
            return;
        }
    }
    ctx->pc = 0x181814u;
    // 0x181814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181818u;
}
