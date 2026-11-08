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

// Function: entry_00118198
// Address: 0x118198 - 0x1181d8
void entry_00118198_0x118198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118198_0x118198");
#endif

    ctx->pc = 0x118198u;

label_118198:
    // 0x118198: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11819c: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x11819cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1181a0: 0x0  nop
    ctx->pc = 0x1181a0u;
    // NOP
    // 0x1181a4: 0x0  nop
    ctx->pc = 0x1181a4u;
    // NOP
    // 0x1181a8: 0x0  nop
    ctx->pc = 0x1181a8u;
    // NOP
    // 0x1181ac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1181ACu;
    {
        const bool branch_taken_0x1181ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1181B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181ACu;
        // 0x1181b0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181ac) {
            ctx->pc = 0x118198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118198;
        }
    }
    ctx->pc = 0x1181B4u;
    // 0x1181b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1181b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1181b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1181b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1181bc: 0x28c2006e  slti        $v0, $a2, 0x6E
    ctx->pc = 0x1181bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1181c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1181C0u;
    {
        const bool branch_taken_0x1181c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1181C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181C0u;
        // 0x1181c4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181c0) {
            ctx->pc = 0x118188u;
            return;
        }
    }
    ctx->pc = 0x1181C8u;
    // 0x1181c8: 0x26550c50  addiu       $s5, $s2, 0xC50
    ctx->pc = 0x1181c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3152));
    // 0x1181cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1181ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1181d0: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1181d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1181d4: 0x0  nop
    ctx->pc = 0x1181d4u;
    // NOP
    ctx->pc = 0x1181d8u;
}
