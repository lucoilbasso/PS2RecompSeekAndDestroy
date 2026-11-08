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

// Function: entry_0014361c
// Address: 0x14361c - 0x143644
void entry_0014361c_0x14361c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014361c_0x14361c");
#endif

    ctx->pc = 0x14361cu;

    // 0x14361c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x14361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x143620: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x143620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x143624: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x143624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x143628: 0x8cb70010  lw          $s7, 0x10($a1)
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14362c: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x14362cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
    // 0x143630: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x143630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x143634: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x143634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x143638: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x143638u;
    {
        const bool branch_taken_0x143638 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143638u;
        // 0x14363c: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143638) {
            ctx->pc = 0x143644u;
            return;
        }
    }
    ctx->pc = 0x143640u;
    // 0x143640: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x143640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x143644u;
}
