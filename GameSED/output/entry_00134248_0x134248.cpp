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

// Function: entry_00134248
// Address: 0x134248 - 0x134260
void entry_00134248_0x134248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134248_0x134248");
#endif

    ctx->pc = 0x134248u;

    // 0x134248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13424c: 0x1471000a  bne         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x13424Cu;
    {
        const bool branch_taken_0x13424c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x134250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13424Cu;
        // 0x134250: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13424c) {
            ctx->pc = 0x134278u;
            return;
        }
    }
    ctx->pc = 0x134254u;
    // 0x134254: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13425c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13425cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x134260u;
}
