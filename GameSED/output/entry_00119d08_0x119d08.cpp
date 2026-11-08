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

// Function: entry_00119d08
// Address: 0x119d08 - 0x119d50
void entry_00119d08_0x119d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d08_0x119d08");
#endif

    ctx->pc = 0x119d08u;

label_119d08:
    // 0x119d08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x119d0c: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x119d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x119d10: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x119D10u;
    {
        const bool branch_taken_0x119d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D10u;
        // 0x119d14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d10) {
            ctx->pc = 0x119D5Cu;
            return;
        }
    }
    ctx->pc = 0x119D18u;
    // 0x119d18: 0x24031268  addiu       $v1, $zero, 0x1268
    ctx->pc = 0x119d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x119d1c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x119d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x119d20: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x119d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119d24: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x119d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x119d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119d2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x119d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119d34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119d38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x119d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119d3c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119d44: 0x8463d700  lh          $v1, -0x2900($v1)
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956800)));
    // 0x119d48: 0x1064ffef  beq         $v1, $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x119D48u;
    {
        const bool branch_taken_0x119d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x119D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D48u;
        // 0x119d4c: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d48) {
            ctx->pc = 0x119D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119d08;
        }
    }
    ctx->pc = 0x119D50u;
}
