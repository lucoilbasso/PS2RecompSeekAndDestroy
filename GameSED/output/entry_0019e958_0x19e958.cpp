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

// Function: entry_0019e958
// Address: 0x19e958 - 0x19e964
void entry_0019e958_0x19e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e958_0x19e958");
#endif

    ctx->pc = 0x19e958u;

    // 0x19e958: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x19e958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e95c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x19E95Cu;
    {
        const bool branch_taken_0x19e95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e95c) {
            ctx->pc = 0x19E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E95Cu;
            // 0x19e960: 0x2442c000  addiu       $v0, $v0, -0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E970u;
            return;
        }
    }
    ctx->pc = 0x19E964u;
}
