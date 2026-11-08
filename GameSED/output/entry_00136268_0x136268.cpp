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

// Function: entry_00136268
// Address: 0x136268 - 0x136298
void entry_00136268_0x136268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136268_0x136268");
#endif

    ctx->pc = 0x136268u;

    // 0x136268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13626c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136270: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136274: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136278: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x136278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13627c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x136280: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x136284: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x136284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x136288: 0x184000a3  blez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x136288u;
    {
        const bool branch_taken_0x136288 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136288u;
        // 0x13628c: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136288) {
            ctx->pc = 0x136518u;
            return;
        }
    }
    ctx->pc = 0x136290u;
    // 0x136290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x136290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136294: 0x0  nop
    ctx->pc = 0x136294u;
    // NOP
    ctx->pc = 0x136298u;
}
