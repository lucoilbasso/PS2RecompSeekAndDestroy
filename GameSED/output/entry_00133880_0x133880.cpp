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

// Function: entry_00133880
// Address: 0x133880 - 0x133898
void entry_00133880_0x133880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133880_0x133880");
#endif

    ctx->pc = 0x133880u;

    // 0x133880: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133884: 0x45030207  bc1tl       . + 4 + (0x207 << 2)
    ctx->pc = 0x133884u;
    {
        const bool branch_taken_0x133884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133884) {
            ctx->pc = 0x133888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133884u;
            // 0x133888: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x13388Cu;
    // 0x13388c: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x13388Cu;
    {
        const bool branch_taken_0x13388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13388Cu;
        // 0x133890: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13388c) {
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133894u;
    // 0x133894: 0x0  nop
    ctx->pc = 0x133894u;
    // NOP
    ctx->pc = 0x133898u;
}
