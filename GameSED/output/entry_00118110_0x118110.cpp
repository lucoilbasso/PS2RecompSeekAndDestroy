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

// Function: entry_00118110
// Address: 0x118110 - 0x118158
void entry_00118110_0x118110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118110_0x118110");
#endif

    ctx->pc = 0x118110u;

label_118110:
    // 0x118110: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118114: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x118114u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x118118: 0x0  nop
    ctx->pc = 0x118118u;
    // NOP
    // 0x11811c: 0x0  nop
    ctx->pc = 0x11811cu;
    // NOP
    // 0x118120: 0x0  nop
    ctx->pc = 0x118120u;
    // NOP
    // 0x118124: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118124u;
    {
        const bool branch_taken_0x118124 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118124u;
        // 0x118128: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118124) {
            ctx->pc = 0x118110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118110;
        }
    }
    ctx->pc = 0x11812Cu;
    // 0x11812c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118130: 0xae400c2c  sw          $zero, 0xC2C($s2)
    ctx->pc = 0x118130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3116), GPR_U32(ctx, 0));
    // 0x118134: 0xae401cb0  sw          $zero, 0x1CB0($s2)
    ctx->pc = 0x118134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7344), GPR_U32(ctx, 0));
    // 0x118138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11813c: 0xae401cb4  sw          $zero, 0x1CB4($s2)
    ctx->pc = 0x11813cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7348), GPR_U32(ctx, 0));
    // 0x118140: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x118140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118144: 0xae420fec  sw          $v0, 0xFEC($s2)
    ctx->pc = 0x118144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4076), GPR_U32(ctx, 2));
    // 0x118148: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11814c: 0xae420fe8  sw          $v0, 0xFE8($s2)
    ctx->pc = 0x11814cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4072), GPR_U32(ctx, 2));
    // 0x118150: 0x26421006  addiu       $v0, $s2, 0x1006
    ctx->pc = 0x118150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4102));
    // 0x118154: 0x0  nop
    ctx->pc = 0x118154u;
    // NOP
    ctx->pc = 0x118158u;
}
