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

// Function: entry_0017ba08
// Address: 0x17ba08 - 0x17ba40
void entry_0017ba08_0x17ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba08_0x17ba08");
#endif

    ctx->pc = 0x17ba08u;

    // 0x17ba08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ba0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ba10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ba14: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17ba18: 0x3411c034  ori         $s1, $zero, 0xC034
    ctx->pc = 0x17ba18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17ba1c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x17ba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17ba20: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17ba24: 0x1045001b  beq         $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17BA24u;
    {
        const bool branch_taken_0x17ba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x17BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA24u;
        // 0x17ba28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba24) {
            ctx->pc = 0x17BA94u;
            return;
        }
    }
    ctx->pc = 0x17BA2Cu;
    // 0x17ba2c: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x17ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
    // 0x17ba30: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17ba34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17ba34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba38: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x17ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17ba3c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x17ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x17ba40u;
}
