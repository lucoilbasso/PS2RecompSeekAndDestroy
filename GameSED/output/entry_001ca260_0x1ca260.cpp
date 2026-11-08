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

// Function: entry_001ca260
// Address: 0x1ca260 - 0x1ca288
void entry_001ca260_0x1ca260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca260_0x1ca260");
#endif

    ctx->pc = 0x1ca260u;

label_1ca260:
    // 0x1ca260: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x1ca260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x1ca264: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x1ca264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x1ca268: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x1ca268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x1ca26c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ca270: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1ca270u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1ca274: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x1ca274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca278: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CA278u;
    {
        const bool branch_taken_0x1ca278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA278u;
        // 0x1ca27c: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca278) {
            ctx->pc = 0x1CA260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA280u;
    // 0x1ca280: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1ca280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1ca284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1ca288u;
}
